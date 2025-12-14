/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216296
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */_Bool) min((7630443902279036643ULL), (((/* implicit */unsigned long long int) (signed char)-1))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) + (arr_4 [i_4] [i_4] [i_4 + 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) < (((/* implicit */int) max((arr_8 [i_0] [i_1] [i_0] [i_3] [i_4]), (((/* implicit */unsigned short) var_13)))))))))))));
                                arr_12 [i_0] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned short) ((signed char) var_2))), (arr_11 [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 2] [i_4 + 3]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_19 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (signed char)69)), ((+(71062786892735015ULL))))) == (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_6)), (2234691392U))), (arr_17 [i_0] [i_0] [i_0]))))));
                                arr_20 [i_0] [i_0] [i_2] [i_0] [i_6] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
                                var_19 ^= ((/* implicit */unsigned char) ((short) 12658907506789354002ULL));
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */short) max((min((((((/* implicit */int) (_Bool)1)) / (var_6))), (((int) (short)11084)))), (arr_15 [i_1] [i_1] [i_2] [i_1] [i_1])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_20 = ((unsigned long long int) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))));
                        var_21 -= var_0;
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((-6646987195918855589LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            var_23 = ((/* implicit */int) var_3);
                        }
                        var_24 += var_12;
                        arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) (signed char)-108));
                        arr_32 [i_0] [i_0] = min((((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned short) arr_14 [i_0] [i_0 + 1] [i_0 + 1]))))), (2878104519U));
                        var_25 *= ((/* implicit */short) ((_Bool) ((signed char) var_12)));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_8))));
                        arr_35 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])), (((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_26 [i_0] [i_0 + 1] [i_0 + 1])) + (9328)))))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 2]))) >= (var_8))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 2])))))))))));
                    }
                    arr_36 [i_0] [i_1] [i_2] = max(((+(((/* implicit */int) (!(((/* implicit */_Bool) 18445618173802708992ULL))))))), ((-((-(((/* implicit */int) var_15)))))));
                    arr_37 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((3957535018U), (((/* implicit */unsigned int) var_13))));
                }
            } 
        } 
    } 
    var_28 -= ((/* implicit */unsigned int) var_6);
    var_29 = ((/* implicit */short) ((max(((-(((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_4))))))) + (var_6)));
    var_30 = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */int) ((short) var_14))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (var_6))))));
}
