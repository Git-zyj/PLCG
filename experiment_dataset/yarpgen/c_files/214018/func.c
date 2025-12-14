/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214018
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
    var_14 &= ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_16 = ((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_17 = ((/* implicit */short) max((((/* implicit */long long int) var_6)), (arr_2 [i_1] [i_1])));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (arr_2 [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (-1857269130) : (((/* implicit */int) arr_0 [i_1]))))))))));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_19 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((short) -241806563))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (1583455772603226059LL))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_2])) : (((/* implicit */int) min((((/* implicit */signed char) ((var_1) < (((/* implicit */unsigned long long int) 241806533))))), (((signed char) var_8)))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned char i_6 = 2; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned char) var_11);
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_2 [i_2] [8U]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 12; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~((-(-241806563))))))));
                            var_24 = ((/* implicit */short) max((min((arr_14 [i_7 + 1] [i_7 + 1] [i_4] [i_7 - 1] [i_7 - 1]), (((/* implicit */unsigned int) arr_6 [i_8] [i_8] [i_8])))), (((/* implicit */unsigned int) ((short) var_6)))));
                            var_25 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_13 [i_2] [i_4] [i_7 - 1] [i_7 - 1] [i_8] [i_8] [(unsigned short)6])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_3 [i_2] [i_2]))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)235)), (241806577))))));
                        }
                    } 
                } 
            }
            var_26 = ((unsigned int) ((((/* implicit */int) arr_6 [i_3] [i_3] [i_3])) <= (var_12)));
            var_27 = ((/* implicit */short) var_2);
            var_28 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) (~(241806562))))), (max((arr_18 [i_2]), (var_5)))));
        }
        for (int i_9 = 4; i_9 < 11; i_9 += 1) 
        {
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 241806562)) ? (-635880301) : (((/* implicit */int) ((short) 4262916056U)))))) - (var_1)));
            /* LoopSeq 2 */
            for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (15377637732612680604ULL) : (var_1)))) ? (var_1) : (max((arr_10 [i_9 + 2] [10ULL]), (((/* implicit */unsigned long long int) var_9))))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_12] [i_9 - 2])))))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (~(3846804417U))))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_7)), (arr_1 [i_12]))), (((long long int) arr_18 [i_9 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_27 [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_9 - 3]), (((/* implicit */short) ((((/* implicit */int) arr_23 [i_2] [5] [i_10] [i_11])) != (((/* implicit */int) var_13))))))))) : ((-(((var_3) ? (arr_13 [i_10] [i_10] [8U] [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) var_12))))))));
                            var_34 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_27 [12LL] [i_9 - 4] [(signed char)10] [i_11])) ? (((/* implicit */int) arr_27 [i_2] [i_10] [i_2] [i_11])) : (var_7))) + (2147483647))) << (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_23 [i_2] [i_9] [10] [i_9 - 1])) : (((/* implicit */int) (short)0)))))))) - (1)))));
                            var_35 = ((/* implicit */unsigned char) var_10);
                        }
                    } 
                } 
            }
            for (int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                var_36 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 4262916071U)) ? (((/* implicit */int) arr_0 [i_9 + 1])) : (((/* implicit */int) arr_0 [i_9 - 2])))));
                var_37 = ((/* implicit */unsigned char) ((((unsigned long long int) ((_Bool) arr_30 [i_13] [i_13]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_2] [i_9] [(unsigned char)0] [i_9])))));
            }
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) ((-3184579586155895344LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_9 + 1] [i_9 - 1] [i_9 + 2] [(unsigned short)6] [i_9])))))) * (((/* implicit */int) ((((/* implicit */int) arr_20 [i_9 - 4] [i_9] [i_9 - 1] [10LL] [i_9])) == (((/* implicit */int) arr_20 [i_9 + 2] [i_9 + 2] [i_9 - 1] [10ULL] [i_9])))))));
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    {
                        var_39 = ((/* implicit */int) ((long long int) (-(((/* implicit */int) (short)2047)))));
                        var_40 |= ((/* implicit */int) 32051239U);
                    }
                } 
            } 
        }
        var_41 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4262916056U))));
        var_42 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (2199944419023185101ULL))));
        var_43 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_32 [2] [10LL] [6LL] [i_2]), (((/* implicit */unsigned short) (unsigned char)116))))), (((((/* implicit */_Bool) 2166510472U)) ? (((/* implicit */unsigned int) 900727007)) : (101212802U)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3665710019U)) ? (((/* implicit */int) (_Bool)1)) : (var_2))), (((/* implicit */int) var_6))))) : (max((((/* implicit */unsigned long long int) (signed char)-83)), (11083693262748883316ULL))));
    }
    var_44 = ((/* implicit */_Bool) max((max((max((var_5), (var_2))), (var_7))), (max((((/* implicit */int) var_11)), (min((var_12), (((/* implicit */int) var_11))))))));
}
