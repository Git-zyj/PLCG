/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47330
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (max((arr_0 [(signed char)10]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32767), (((/* implicit */short) (_Bool)1)))))))), (max((4480099620173044226ULL), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [(unsigned short)6]))))))))));
                        var_15 *= ((/* implicit */long long int) ((_Bool) (((!(((/* implicit */_Bool) var_1)))) ? ((~(arr_0 [i_0]))) : (max((arr_4 [i_0] [i_1 + 1] [i_0]), (((/* implicit */unsigned long long int) arr_1 [2ULL] [i_1])))))));
                        var_16 -= ((/* implicit */int) (_Bool)1);
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (short)32767))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (var_8)));
                        arr_13 [i_0] |= ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) var_5)) ? (-1) : (-1))), (((((/* implicit */int) (unsigned char)151)) + (var_12))))), (var_10)));
                    }
                    for (unsigned char i_5 = 3; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [(_Bool)1] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)177)) ? (0) : (((/* implicit */int) arr_3 [i_0] [i_1 + 2]))))) ? (max((arr_6 [i_0]), (((/* implicit */unsigned int) 0)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5 + 1] [i_1 + 1])))))) ? (((((/* implicit */_Bool) ((short) (signed char)87))) ? (((unsigned long long int) arr_10 [i_0] [i_0] [i_1 - 1] [i_0] [i_5])) : (((/* implicit */unsigned long long int) (+(arr_12 [(_Bool)1])))))) : (((/* implicit */unsigned long long int) ((((_Bool) var_7)) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (999892595868493918LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(max((min((((/* implicit */unsigned long long int) var_12)), (549621596160ULL))), (((((/* implicit */_Bool) var_9)) ? (2932113495387281376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
                        var_20 *= ((/* implicit */long long int) ((((/* implicit */long long int) var_6)) != (((long long int) (!(((/* implicit */_Bool) 1125899906842623ULL)))))));
                    }
                    for (unsigned char i_6 = 3; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        var_21 *= ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) >= (-3004560390730077444LL))))) : (18445618173802708993ULL))) == (((/* implicit */unsigned long long int) (~(max((1265537334U), (((/* implicit */unsigned int) arr_2 [i_6])))))))));
                        arr_20 [i_0] [i_0] &= ((/* implicit */_Bool) ((int) (+(18445618173802708992ULL))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_22 *= ((/* implicit */short) (~(1265537330U)));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (14) : (((/* implicit */int) (_Bool)1)))))));
                            var_24 *= ((/* implicit */unsigned char) max(((~(min((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_2] [i_6] [i_1] [i_7])), (1125899906842621ULL))))), (((/* implicit */unsigned long long int) arr_12 [i_6]))));
                            var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 15514630578322270245ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6ULL)));
                        }
                        arr_25 [i_6] [i_6 - 3] [i_2] [i_1 + 2] [i_1 + 2] [i_0] &= ((/* implicit */short) var_11);
                    }
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0])) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) 13345103693954151257ULL))));
}
