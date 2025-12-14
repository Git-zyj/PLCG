/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198067
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((arr_3 [i_0] [(signed char)12]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_1]))))))))))));
                var_11 = ((/* implicit */int) min((var_11), ((~(((/* implicit */int) arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 2; i_2 < 12; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (((max((0ULL), (((/* implicit */unsigned long long int) 7767562965899020901LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2])))))));
        arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_2 - 1]))))) ? (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) (short)10140)))) - (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_2])))))) : (((/* implicit */int) arr_9 [i_2] [i_2]))));
        arr_12 [i_2] = max((arr_8 [i_2]), (((arr_5 [i_2 + 1]) != (arr_5 [i_2 - 1]))));
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
            {
                arr_21 [13LL] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_20 [(short)15] [(short)15] [i_5]))) % (((/* implicit */int) var_9))));
                arr_22 [i_5] [i_4] [i_3] = ((/* implicit */int) var_1);
            }
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
            {
                arr_25 [(unsigned short)15] [i_4] [(unsigned short)15] = ((((/* implicit */int) arr_16 [i_3] [i_4] [i_6])) == (((/* implicit */int) arr_4 [i_6])));
                arr_26 [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_20 [i_3] [i_4] [i_6]))));
            }
            arr_27 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_5);
        }
        var_12 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_17 [i_3] [(unsigned char)9] [i_3])) && (((/* implicit */_Bool) ((int) var_5)))))));
        var_13 = arr_14 [i_3];
    }
    var_14 = var_1;
    var_15 = ((/* implicit */short) ((int) var_2));
}
