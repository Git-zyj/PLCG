/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24623
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
    var_11 = var_9;
    var_12 = ((/* implicit */unsigned char) var_4);
    var_13 &= ((/* implicit */int) ((((var_3) - (var_3))) >> (((((((/* implicit */_Bool) 1595368342U)) ? (((/* implicit */unsigned long long int) (+(var_1)))) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (1133756644ULL)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) arr_2 [i_0 - 3])) & (arr_1 [i_0 + 1]))), ((~(arr_1 [i_0 - 1]))))))));
        arr_3 [6ULL] [i_0] |= ((/* implicit */_Bool) min(((+(arr_1 [i_0 - 2]))), (max((((/* implicit */unsigned long long int) ((var_6) & (arr_2 [i_0])))), (min((((/* implicit */unsigned long long int) var_3)), (arr_1 [7])))))));
    }
    for (signed char i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((var_3) / (((/* implicit */long long int) 2699598933U)))), (((/* implicit */long long int) (_Bool)1))))) || (((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) arr_6 [i_1] [i_1])), (var_2)))), (var_6)))))))));
        var_16 = ((/* implicit */signed char) min((arr_4 [i_1] [i_1 - 2]), (((/* implicit */long long int) ((((((/* implicit */int) var_5)) / (((/* implicit */int) arr_6 [i_1] [i_1 + 1])))) < ((~(((/* implicit */int) var_4)))))))));
    }
    for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_17 = ((/* implicit */short) arr_10 [i_2]);
        arr_11 [i_2] = ((/* implicit */unsigned int) (short)0);
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (short)0))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            arr_22 [i_6] [i_6] [i_2] [i_6] [i_6] [i_2] = ((/* implicit */unsigned long long int) (((!((_Bool)1))) && (((/* implicit */_Bool) ((arr_20 [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))) : (var_10))))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (unsigned char)175))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            arr_27 [i_2] [i_2] |= ((/* implicit */short) arr_23 [i_2] [i_2]);
            var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))));
        }
        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            arr_30 [i_2] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_18 [i_2] [i_2] [i_8] [i_2]), ((signed char)-127)))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_2)) : (((((arr_25 [i_8] [i_8] [i_2]) + (2147483647))) << (((((-4989986605640461767LL) + (4989986605640461782LL))) - (11LL)))))));
            /* LoopSeq 3 */
            for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (signed char)127))));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    var_22 = ((/* implicit */signed char) var_8);
                    var_23 = ((signed char) max((arr_12 [i_9]), (((/* implicit */unsigned long long int) arr_34 [i_2]))));
                    var_24 = ((/* implicit */short) var_8);
                }
            }
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_8]))))))))));
                /* LoopSeq 3 */
                for (short i_12 = 2; i_12 < 24; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        arr_45 [i_2] [i_8] [i_11] [i_13] [i_12] [i_13] = ((/* implicit */_Bool) (-(min((((unsigned long long int) arr_8 [i_11])), (((/* implicit */unsigned long long int) arr_21 [i_12 + 1] [i_12 - 2] [i_12 - 1] [i_13] [i_13]))))));
                        arr_46 [i_2] [i_8] [i_12] [i_8] [i_2] = ((/* implicit */unsigned short) var_3);
                        var_26 |= ((/* implicit */signed char) (-(11624968406485283574ULL)));
                    }
                    /* LoopSeq 1 */
                    for (int i_14 = 2; i_14 < 24; i_14 += 2) 
                    {
                        arr_50 [6ULL] [i_11] [i_12] = ((/* implicit */signed char) (((+(((/* implicit */int) ((signed char) var_2))))) | ((~((~(arr_43 [i_11])))))));
                        var_27 = ((/* implicit */int) var_2);
                        arr_51 [i_2] [i_8] [i_12] [i_12] [2LL] [i_14] [i_14] = ((short) arr_17 [i_2] [i_8] [i_11] [i_14]);
                        var_28 *= ((/* implicit */short) arr_39 [i_2] [i_2]);
                    }
                    var_29 = ((/* implicit */signed char) arr_33 [i_2] [i_2] [i_11] [i_12]);
                }
                /* vectorizable */
                for (signed char i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    var_30 = ((/* implicit */unsigned long long int) arr_8 [i_2]);
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_16 [10LL] [i_15] [i_11] [i_15]))));
                }
                for (int i_16 = 2; i_16 < 22; i_16 += 2) 
                {
                    var_32 -= ((/* implicit */unsigned long long int) (_Bool)1);
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (((((/* implicit */_Bool) (short)-24057)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))))) ? (var_1) : (arr_55 [i_2] [i_8] [i_11] [16LL] [i_16])));
                    arr_58 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)24057)), (arr_23 [i_8] [i_16]))))))), (max((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6))))), ((~(((/* implicit */int) (_Bool)1))))))));
                }
            }
            for (long long int i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) arr_32 [i_2] [i_8]))));
                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) max((min((6821775667224268041ULL), (((/* implicit */unsigned long long int) (-(var_7)))))), (((/* implicit */unsigned long long int) min((arr_24 [i_2]), (((/* implicit */signed char) ((arr_36 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) >= (((/* implicit */unsigned int) -610639830)))))))))))));
            }
        }
        var_36 = ((/* implicit */_Bool) (signed char)0);
        /* LoopNest 2 */
        for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            for (long long int i_19 = 1; i_19 < 24; i_19 += 2) 
            {
                {
                    var_37 = min((((((/* implicit */_Bool) max((arr_56 [i_19 - 1] [i_19] [i_18] [i_18]), (((/* implicit */unsigned int) arr_24 [i_2]))))) ? (((((/* implicit */int) arr_24 [i_19])) << (((var_6) + (1054734391))))) : ((-(var_9))))), ((+(((/* implicit */int) var_4)))));
                    arr_66 [i_19] [i_19 + 1] = ((/* implicit */long long int) (-(2699598950U)));
                    var_38 = ((signed char) (+(arr_55 [i_19 - 1] [i_19 + 1] [i_19 - 1] [i_19] [i_19])));
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (~(max((((((/* implicit */_Bool) arr_59 [i_2] [i_2] [i_2])) ? (arr_53 [i_19 - 1] [i_18] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */int) var_2))))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        for (long long int i_21 = 0; i_21 < 25; i_21 += 3) 
                        {
                            {
                                arr_75 [i_2] [(_Bool)1] [i_2] [i_2] [i_2] = ((((((/* implicit */int) (signed char)0)) << (((((((/* implicit */_Bool) var_0)) ? (var_3) : (var_10))) + (6820718085913069106LL))))) / (var_1));
                                var_40 += ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) max((var_4), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_5))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_41 = ((/* implicit */unsigned int) var_3);
}
