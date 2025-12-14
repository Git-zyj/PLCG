/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213875
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) 1591528480);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967295U)), (18446744073709551606ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 32767U)) != (((long long int) var_0)))))) : (max((max((((/* implicit */unsigned long long int) var_6)), (9ULL))), (18446744073709551606ULL)))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_11 -= ((/* implicit */int) (+(max((10ULL), (((/* implicit */unsigned long long int) var_9))))));
                                var_12 *= ((/* implicit */_Bool) var_1);
                                arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (448511243) : (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 295986760U)))))) : (max((((/* implicit */long long int) var_7)), (arr_3 [i_1 - 1] [i_1 - 1])))));
                                var_13 -= ((/* implicit */long long int) var_8);
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_14 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (var_3)))) : (min((10ULL), (((/* implicit */unsigned long long int) (short)-12114)))))), (((/* implicit */unsigned long long int) max(((+(2147483647))), (((((/* implicit */_Bool) (unsigned short)51507)) ? (((/* implicit */int) (signed char)0)) : (-1591528481)))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_2] [i_5]))) ? (max((((/* implicit */unsigned long long int) 4294967295U)), (10ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1U))))));
                                arr_17 [i_0] [i_0] [i_2] [4U] [i_3] [i_3] [i_5] = ((/* implicit */signed char) max((max((1591528480), (((/* implicit */int) (unsigned char)184)))), (((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)14029)))), (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) -4564705021896213723LL)))))))));
                                var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) -1591528475)) ? (max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_1 - 1] [i_1] [i_2] [i_3 + 1] [i_3] [i_5])), (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_1)))))));
                            }
                        }
                    } 
                } 
                arr_18 [i_0] [3LL] = ((/* implicit */unsigned int) 18446744073709551609ULL);
                var_17 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551610ULL)) && (((/* implicit */_Bool) (signed char)-109))))) : (((/* implicit */int) max(((unsigned short)51507), (((/* implicit */unsigned short) var_4))))))));
                var_18 = ((/* implicit */signed char) var_5);
            }
        } 
    } 
    var_19 += var_6;
}
