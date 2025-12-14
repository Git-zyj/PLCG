/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221452
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_16 = 294357689U;
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 17179869183LL)) ? (((/* implicit */int) (unsigned short)33777)) : (((/* implicit */int) (_Bool)1))))), (4000609607U))), (((/* implicit */unsigned int) max((var_13), (((/* implicit */int) arr_6 [i_1] [i_1])))))));
                arr_9 [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_14);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */int) var_12);
                                arr_18 [i_1] [(unsigned short)7] [i_1] [6LL] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) 1442262653);
                                var_18 = (+(((/* implicit */int) (signed char)(-127 - 1))));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 4000609610U)) <= (144114638320041984ULL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 2] [i_1])))))) : (((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)(-127 - 1)))))) : (294357687U)))));
                            }
                            /* vectorizable */
                            for (short i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)0)))))))));
                                var_21 += ((/* implicit */unsigned char) (~(4000609607U)));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4000609609U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (294357688U)));
                            }
                            for (short i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                            {
                                arr_27 [i_0] [i_0] [i_1] [i_0] [i_6] [i_1] [i_2] = ((/* implicit */long long int) (signed char)(-127 - 1));
                                var_23 = (+(((((/* implicit */_Bool) ((var_11) | (var_0)))) ? (var_2) : (((/* implicit */int) ((((/* implicit */long long int) var_13)) <= (5545345684332243393LL)))))));
                                var_24 = ((/* implicit */unsigned int) max((var_24), (294357687U)));
                                var_25 = ((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_0] [i_6]);
                                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) <= ((-(((/* implicit */int) (signed char)-45)))))))) ^ (((((/* implicit */_Bool) (short)-31430)) ? (18446744073709551590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)32767))))))))))));
                            }
                            var_27 = ((/* implicit */int) (unsigned char)63);
                            arr_28 [i_1] [i_2] [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)11131))))) ? (((((/* implicit */_Bool) (short)31429)) ? (-5095449579242913725LL) : (((/* implicit */long long int) 4000609593U)))) : (((/* implicit */long long int) 4294967295U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(294357665U)))) ? (((((/* implicit */_Bool) 7896606859733941883ULL)) ? (((/* implicit */int) (_Bool)1)) : (var_4))) : (((((/* implicit */_Bool) (unsigned short)4092)) ? (var_4) : (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) ((unsigned long long int) (+(-1505348228)))))));
}
