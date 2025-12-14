/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50576
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_3 [(signed char)0] &= ((/* implicit */_Bool) (short)-1);
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) ((min((((/* implicit */unsigned int) (_Bool)1)), (var_1))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))) >= (((/* implicit */int) (short)-2))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        arr_8 [20U] [(unsigned short)17] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_4))))))));
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) arr_5 [i_1])))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 24; i_2 += 2) 
        {
            arr_13 [i_1] [i_1] [13U] = ((/* implicit */long long int) arr_11 [i_1] [i_2] [i_2]);
            var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_11 [18LL] [i_2 - 1] [i_2 - 1]), (arr_11 [12ULL] [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(unsigned char)10] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_11 [10LL] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_11 [6LL] [i_2 - 1] [i_2 + 1]))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_8)))));
        }
        var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))), (((arr_4 [i_1] [i_1]) >> (((((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) (_Bool)1)))) - (92)))))));
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        var_15 = ((/* implicit */long long int) var_10);
        arr_17 [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_3 - 1]))));
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 - 1]))) | (var_10)));
    }
    var_17 = ((/* implicit */short) (unsigned char)189);
    /* LoopSeq 2 */
    for (short i_4 = 3; i_4 < 11; i_4 += 4) 
    {
        arr_22 [0U] = ((/* implicit */short) (((+(((/* implicit */int) arr_6 [i_4 - 2] [i_4 - 1])))) << (((((/* implicit */int) ((signed char) arr_6 [i_4 - 2] [i_4 - 1]))) - (87)))));
        var_18 = ((short) (~((~(((/* implicit */int) arr_19 [10ULL] [(short)4]))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        arr_25 [i_5] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8)));
        var_19 += ((/* implicit */int) ((((/* implicit */int) arr_9 [i_5] [i_5])) > (((/* implicit */int) var_9))));
        var_20 = ((/* implicit */short) ((arr_23 [i_5]) / (((((/* implicit */int) arr_1 [i_5])) + (arr_23 [i_5])))));
    }
}
