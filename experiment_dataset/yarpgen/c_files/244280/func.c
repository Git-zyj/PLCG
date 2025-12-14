/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244280
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
    var_18 += ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) var_10);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)0);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) + (((/* implicit */int) var_9))))) ? ((+(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                        var_20 |= ((/* implicit */unsigned char) var_12);
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 2) /* same iter space */
                {
                    arr_15 [i_0] [(short)0] [i_0] [i_4] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_1 + 3] [i_4 - 3]))));
                    var_21 = ((/* implicit */int) var_13);
                    arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)65535))));
                }
                for (unsigned long long int i_5 = 4; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((((/* implicit */int) arr_2 [i_5 - 4] [i_1 + 3] [i_1 + 3])) / (((/* implicit */int) var_4)))), (((/* implicit */int) var_9)))))));
                    var_23 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) (_Bool)1)))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned int) ((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_20 [i_6] [i_6])) << (((((/* implicit */int) arr_19 [i_6])) - (113))))))) >= (((/* implicit */int) max((arr_20 [i_6] [i_6]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) 2526471793917747648LL))))))))));
        arr_22 [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_20 [i_6] [i_6])) / (var_17))), (((/* implicit */int) ((_Bool) var_15)))))) ? ((+(((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) arr_20 [i_6] [i_6]))))))) : (((/* implicit */int) (_Bool)1))));
    }
    var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
}
