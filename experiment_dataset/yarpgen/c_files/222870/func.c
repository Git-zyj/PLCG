/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222870
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
    var_17 = ((/* implicit */int) var_5);
    var_18 = ((/* implicit */unsigned int) 679628673);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_1 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_2 [i_0])) > (((((/* implicit */long long int) min((1767206809U), (((/* implicit */unsigned int) var_14))))) ^ (((var_15) | (((/* implicit */long long int) arr_1 [i_0]))))))));
        arr_5 [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -991105460)) ? (991105460) : (991105460))), (((/* implicit */int) (!(((/* implicit */_Bool) 5351268355522027013LL)))))))) ? (((/* implicit */unsigned int) (-(arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_0 [i_0]))));
        var_19 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_2 [i_0])) : (-3777497397509361363LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) != (max((((/* implicit */int) var_16)), (arr_2 [i_0]))))))) : (min((((var_7) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        var_20 *= ((/* implicit */unsigned long long int) (+(-991105460)));
        var_21 += ((/* implicit */unsigned long long int) (+(((((arr_6 [i_1]) != (var_1))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_9))))) : (max((var_0), (((/* implicit */long long int) var_5))))))));
        var_22 = arr_7 [i_1];
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */long long int) var_1);
                    arr_13 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((long long int) arr_12 [i_1 - 3] [i_1 - 3] [i_2] [i_3]));
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                arr_19 [i_4] [i_2] &= ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((((/* implicit */_Bool) min((var_11), (var_6)))) ? (((((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_3] [i_4] [i_5])) ? (((/* implicit */unsigned int) -991105460)) : (var_2))) : (((/* implicit */unsigned int) (-(991105459)))))) : (min((arr_6 [i_1]), (((/* implicit */unsigned int) arr_9 [i_1 + 3])))));
                                var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (max((-6152422440303990382LL), (((/* implicit */long long int) arr_14 [i_1] [i_4]))))));
                                arr_20 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] = ((/* implicit */signed char) arr_10 [i_1 - 3] [i_1] [i_1]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 2; i_6 < 15; i_6 += 4) 
                    {
                        arr_23 [i_3] &= ((/* implicit */int) (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((short) 1908625992976936178ULL)))))));
                        arr_24 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3518550840U)))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_9 [i_6 + 1])), (-991105460)))), (max((3036604056U), (arr_6 [i_1 + 2])))))) ? (min((min((((/* implicit */unsigned long long int) arr_17 [i_1] [i_2] [i_3] [i_6] [i_1 - 2])), (153229502792062059ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1148863050)) ? (((/* implicit */unsigned int) -614959163)) : (1524370251U)))))) : (((/* implicit */unsigned long long int) ((((long long int) 1908625992976936178ULL)) >> (((((((/* implicit */_Bool) arr_18 [i_3])) ? (4294967283U) : (((/* implicit */unsigned int) arr_8 [i_1] [i_2] [i_3])))) - (4294967228U)))))))))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_14 [i_3] [i_1])) : (4281596923300296484LL))), (((/* implicit */long long int) ((arr_22 [i_1] [i_6]) << (((arr_11 [i_1 - 3] [i_1 - 3] [i_1 - 3]) - (1799872363U))))))))) ? (min((16538118080732615432ULL), (((/* implicit */unsigned long long int) 4281596923300296454LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) -4281596923300296454LL)) : (8716419157773449823ULL)))) ? (max((((/* implicit */long long int) var_10)), (arr_18 [i_3]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                        {
                            var_27 = ((/* implicit */short) (-(((/* implicit */int) arr_26 [i_1 + 2] [i_2] [i_3] [i_3] [i_6] [i_7 + 3]))));
                            arr_29 [i_1 + 1] [i_2] [i_3] [i_6 + 3] [i_6] &= ((/* implicit */_Bool) min((((max((((/* implicit */long long int) var_2)), (var_13))) << (((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7 + 1]))) : (arr_12 [i_2] [i_2] [i_2] [i_2]))) - (1LL))))), (((/* implicit */long long int) 1646736299))));
                            var_28 *= var_12;
                        }
                        for (int i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_7 [i_2]))));
                            var_30 = ((/* implicit */unsigned int) arr_15 [i_1] [i_1 - 2] [i_1]);
                        }
                        /* vectorizable */
                        for (long long int i_9 = 1; i_9 < 16; i_9 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((arr_34 [i_9 + 1] [i_1 - 3] [i_1 + 1] [i_1] [i_1] [i_1]) << (((var_0) - (8660656157536925125LL)))));
                            var_32 &= ((/* implicit */unsigned int) var_15);
                        }
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            arr_38 [i_1 + 3] [i_1] [i_10] [i_1] [i_1] [i_1] &= max((((((/* implicit */int) var_7)) >> (((var_3) - (15655292660776674836ULL))))), (var_6));
                            var_33 = ((/* implicit */int) min(((-(4281596923300296439LL))), (((long long int) min((-4281596923300296454LL), (((/* implicit */long long int) arr_30 [i_1] [i_1] [i_1] [i_1 + 3] [i_1])))))));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        var_34 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_41 [i_1] [i_1 - 1] [i_1] [i_1 - 3] [i_1])) ? (1908625992976936178ULL) : (((/* implicit */unsigned long long int) 2221754734U)))), (4722376346853223523ULL)));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) : (((((/* implicit */_Bool) 771542665)) ? (2312760859U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_12])))))))) ? (max((((/* implicit */long long int) (-(((/* implicit */int) arr_33 [i_12] [i_11] [i_3] [i_2] [i_1]))))), (((arr_9 [i_11]) ? (((/* implicit */long long int) arr_6 [i_1 + 1])) : (4281596923300296439LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (4281596923300296439LL) : (((/* implicit */long long int) arr_14 [i_2] [i_11])))) == (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_1] [i_2] [i_1]))) : (arr_12 [i_1 - 1] [i_2] [i_3] [i_12])))))))));
                            var_36 += ((/* implicit */long long int) (-(min((((var_4) * (((/* implicit */unsigned long long int) 6LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))) * (2932358739U))))))));
                        }
                    }
                }
            } 
        } 
    }
    var_37 = ((long long int) var_14);
}
