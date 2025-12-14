/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45420
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned char) ((int) arr_2 [i_0]));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((long long int) arr_4 [i_0]));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        var_17 += ((((((/* implicit */_Bool) arr_4 [i_3])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))));
                        var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) : (3397395477U)))) ? (((/* implicit */long long int) 1043177542)) : (-4600639206106095170LL)));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)240)))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [i_2]))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((unsigned int) arr_10 [i_4] [i_1] [i_2 - 1] [i_4]));
                        arr_15 [i_0] [i_1] [(unsigned char)2] [i_4] = ((/* implicit */unsigned int) (unsigned char)240);
                    }
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) ((int) var_11));
                    var_22 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((((/* implicit */_Bool) (~(10LL)))) ? (max((796852041U), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_5] [i_0])))) : (((/* implicit */unsigned int) ((arr_11 [i_0] [i_1 - 2] [i_5] [i_1]) / (((/* implicit */int) (short)29639))))))) >> (((((/* implicit */int) arr_8 [i_0])) + (25505)))))) : (((/* implicit */short) ((((((/* implicit */_Bool) (~(10LL)))) ? (max((796852041U), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_5] [i_0])))) : (((/* implicit */unsigned int) ((arr_11 [i_0] [i_1 - 2] [i_5] [i_1]) / (((/* implicit */int) (short)29639))))))) >> (((((((/* implicit */int) arr_8 [i_0])) + (25505))) + (377))))));
                    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2])) ? (arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]) : (arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]))) - (((arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]) + (arr_10 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2])))));
                }
                /* vectorizable */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_17 [i_0]);
                    var_24 = ((/* implicit */long long int) var_12);
                }
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_0);
}
