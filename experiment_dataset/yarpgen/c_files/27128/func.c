/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27128
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))), (max((((/* implicit */unsigned int) (signed char)64)), (971940067U))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (var_7)));
        arr_4 [i_0] = (!((_Bool)1));
    }
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) 3323027229U);
        var_17 &= ((/* implicit */signed char) (-2147483647 - 1));
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 8703271792326560432LL))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22913))))))))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) 238989934U))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 12; i_2 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((arr_12 [i_2 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1]))))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (short)27928))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        for (short i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) arr_15 [i_2]);
                                var_22 ^= ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */long long int) arr_6 [i_3]);
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((+(((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 + 2] [i_2])))) & (((/* implicit */int) (short)9)))))));
    }
    var_25 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) ((short) 36028797018963968LL))) != (((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-6))))))))), ((((_Bool)1) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775807LL))))))))));
}
