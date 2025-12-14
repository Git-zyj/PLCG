/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193484
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) var_3)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_4))));
                    var_13 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_14 = (-(((/* implicit */int) (unsigned short)13)));
                        var_15 = ((/* implicit */unsigned char) -8);
                        var_16 = ((/* implicit */int) max((var_16), ((+(((/* implicit */int) var_2))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_17 ^= ((/* implicit */unsigned long long int) ((int) 1391665764));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) var_3);
                            arr_16 [i_0] [i_1] = ((unsigned short) var_1);
                            var_19 ^= ((/* implicit */unsigned long long int) 3617100844U);
                            var_20 = (~((~(((/* implicit */int) var_3)))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_21 *= ((/* implicit */signed char) (-((~(-1391665749)))));
                            arr_19 [i_0] [i_4] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -2002920882)) : (var_4));
                            var_22 = ((/* implicit */long long int) var_3);
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
                            var_24 = (~(var_8));
                        }
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_0))))) : (var_4)));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36404)) ? (3532991238552614457LL) : (-1LL))))));
                            arr_23 [i_0] [i_0] [i_0] [i_4] [i_7] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_5))))));
                        }
                        var_27 = ((/* implicit */short) ((unsigned short) var_2));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            {
                                var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7)) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) % (var_4))))));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) * (((/* implicit */int) (signed char)71))));
                            }
                        } 
                    } 
                }
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_7))));
                arr_28 [i_0] [i_1 - 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-9712))));
                var_31 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((long long int) var_7)) : ((~(var_4)))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((var_5) ? ((+(((/* implicit */int) var_1)))) : (var_10))))))));
    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) max((((((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) var_2)) : (var_10))) - (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) min((var_7), (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < (var_7)))) : (((/* implicit */int) (unsigned short)8483)))))))));
}
