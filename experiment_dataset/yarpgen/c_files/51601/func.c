/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51601
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
    var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) var_3)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0 + 3] = ((/* implicit */unsigned short) arr_1 [(signed char)15] [(_Bool)1]);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            arr_6 [i_0 - 1] [i_1 - 2] = ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_1]);
            arr_7 [i_1] = ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)22050)) : (21))))), (((/* implicit */int) arr_3 [i_0 - 1]))));
        }
        for (signed char i_2 = 3; i_2 < 16; i_2 += 1) 
        {
            arr_10 [i_0] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_2] [i_2 - 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_9 [(_Bool)1] [i_2] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(_Bool)0] [i_0 - 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 - 1])))))) : (arr_8 [i_2])))));
            arr_11 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            arr_12 [(signed char)12] [i_2] [i_0 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 2])) ? (arr_9 [i_2] [i_2 + 1] [i_2 - 2]) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2 - 2])) ? (arr_5 [i_0] [(_Bool)1] [4U]) : (arr_5 [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0 + 2]), (arr_0 [i_0 + 3]))))) : (((arr_8 [i_2]) + (((/* implicit */long long int) ((unsigned int) arr_4 [i_0] [i_0] [i_2])))))));
            arr_13 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_0] [(unsigned short)6]);
        }
        arr_14 [i_0] = ((/* implicit */unsigned long long int) (-(((arr_9 [i_0 + 1] [i_0] [i_0 + 1]) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_18 [i_3] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (3378612507U)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0 - 1])), (var_15)))) : (((/* implicit */int) var_9))));
            arr_19 [i_0 - 1] [i_3] [i_3] = ((/* implicit */unsigned int) arr_1 [i_0 + 3] [i_0 + 3]);
            arr_20 [i_0 + 3] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_15 [i_0 + 3])) : (((/* implicit */int) arr_15 [i_3]))))) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */int) ((_Bool) arr_5 [i_0 + 1] [i_0 + 3] [(_Bool)1]))) : (((/* implicit */int) arr_3 [i_0 - 1])))) : (((/* implicit */int) ((unsigned short) arr_8 [i_0 + 2])))));
            arr_21 [i_3] [i_3] [i_0 + 1] = ((/* implicit */unsigned long long int) var_14);
        }
        arr_22 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 3] [i_0 - 1]))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        arr_25 [i_4] = ((/* implicit */int) (((-(((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)9]))) : (arr_9 [(unsigned char)7] [(unsigned char)7] [i_4]))))) - (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4])))));
        arr_26 [i_4] [i_4] = ((((/* implicit */long long int) max(((~(((/* implicit */int) arr_16 [i_4] [i_4])))), ((-(-22)))))) / ((-(((((/* implicit */_Bool) arr_1 [i_4] [9LL])) ? (arr_8 [(short)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4]))))))));
    }
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        arr_29 [i_5] [(signed char)8] = ((/* implicit */signed char) arr_4 [i_5] [i_5] [i_5]);
        arr_30 [(_Bool)1] = ((/* implicit */unsigned short) arr_24 [(_Bool)0] [i_5]);
    }
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((var_6), (((((/* implicit */_Bool) var_8)) || (var_9))))))));
}
