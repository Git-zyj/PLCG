/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235553
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
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                arr_12 [i_0 + 1] [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) ((arr_11 [i_0] [(short)8] [i_0] [i_0] [3ULL]) >= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_2] [i_4])))))), (min((((/* implicit */short) arr_0 [i_3])), (arr_1 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)26700))))) : ((~(((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 2] [i_0 + 1])))))))));
                                var_14 = ((/* implicit */signed char) arr_11 [i_0 - 2] [i_1 - 1] [i_2] [i_0] [i_1 + 2]);
                                arr_13 [i_0] [i_0] [i_3] [i_0] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4104482217U)) ? (190485078U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104)))))) ? ((+(((arr_0 [i_0]) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) arr_5 [i_4] [i_3] [i_2] [i_0 - 1]))));
                            }
                            arr_14 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 190485079U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (4104482217U)));
                            var_15 = ((/* implicit */signed char) ((((var_10) / (((/* implicit */long long int) ((var_6) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [3ULL] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_1 [i_0])))))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned long long int) 4104482216U)))));
                            arr_15 [(signed char)4] [i_1] [i_1] [i_1 + 1] [i_1] [(signed char)4] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((((/* implicit */int) var_13)) > (((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (_Bool)0))))));
                        }
                    } 
                } 
                arr_16 [i_1] [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)28672)) : (((/* implicit */int) ((signed char) var_5)))));
                var_17 -= ((/* implicit */unsigned short) max((((long long int) 6U)), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0] [i_1 - 1] [(_Bool)1] [i_1 - 3])) ? (4294967289U) : (var_1))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) var_12)) - (15)))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 1; i_5 < 23; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0))));
                    var_19 = ((/* implicit */short) arr_17 [i_7]);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((arr_20 [i_7]), (arr_20 [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (var_6))))))) ? (var_0) : (var_0)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_8 = 1; i_8 < 21; i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            for (signed char i_10 = 1; i_10 < 20; i_10 += 3) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_21 += ((/* implicit */unsigned int) ((arr_17 [i_9]) ? (((/* implicit */int) arr_17 [i_9])) : (((/* implicit */int) var_8))));
                        arr_36 [i_8] [i_8] [i_11] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (4104482216U)))), ((~(-4093991063914029426LL)))));
                        /* LoopSeq 4 */
                        for (unsigned int i_12 = 1; i_12 < 21; i_12 += 3) /* same iter space */
                        {
                            arr_40 [6U] [14U] [6U] [i_11] [i_8] = ((/* implicit */_Bool) ((arr_33 [1ULL] [i_9] [i_10 + 2] [i_11 - 1] [(unsigned char)20]) ^ (max((((/* implicit */long long int) arr_30 [i_11 - 1])), (((((/* implicit */_Bool) arr_29 [i_10])) ? (arr_33 [i_12] [i_11 - 1] [i_10 + 1] [i_9] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_29 [i_8]))));
                            arr_41 [i_8] [i_11] [i_10] [22LL] [i_9] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_10 + 3] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((+(190485079U)))))) : (((arr_38 [i_11 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10])))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_13 = 1; i_13 < 21; i_13 += 3) /* same iter space */
                        {
                            arr_44 [i_8] [i_9] [i_10] [i_8] [i_11] [i_11] [i_13] = ((/* implicit */short) ((_Bool) arr_42 [i_8 - 1] [i_8 - 1] [i_10 + 3] [i_11] [i_11] [i_11] [i_11]));
                            arr_45 [i_8] [i_8] [i_11] [i_10] [i_9] [i_8] [i_8 + 1] = ((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (signed char)38))));
                            var_23 = ((/* implicit */_Bool) ((signed char) var_13));
                            var_24 *= ((/* implicit */unsigned long long int) (+(9223372036854775807LL)));
                        }
                        for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_10] [i_11 - 1]);
                            arr_49 [i_8] [i_8] [i_11 - 1] [i_14] = ((/* implicit */short) var_13);
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) ((short) max((((/* implicit */long long int) (_Bool)0)), (6925461454674660509LL)))))));
                            var_27 = ((/* implicit */signed char) arr_37 [i_14]);
                        }
                        for (short i_15 = 2; i_15 < 21; i_15 += 3) 
                        {
                            arr_52 [6LL] [i_11 - 1] [i_8] [i_11 - 1] [i_11] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-60)) ? (((((/* implicit */_Bool) 9223372036852678656ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-63))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((8992843251110807313ULL), (((/* implicit */unsigned long long int) (signed char)-17))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) var_6))) : ((+(((/* implicit */int) var_2)))))) : (((/* implicit */int) arr_42 [i_8] [i_8] [i_8] [i_8 + 1] [16LL] [i_8 + 2] [i_8 + 1]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 3) 
            {
                {
                    var_29 -= ((/* implicit */unsigned short) min((arr_46 [i_8] [i_8] [(signed char)18] [i_8]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))))));
                    arr_59 [i_8] [i_16] [i_8] = ((/* implicit */_Bool) arr_56 [i_8 + 1] [i_8] [i_16] [i_17 + 1]);
                }
            } 
        } 
    }
    for (short i_18 = 1; i_18 < 21; i_18 += 1) /* same iter space */
    {
        var_30 ^= ((/* implicit */unsigned long long int) var_9);
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 3) 
        {
            for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_21 = 3; i_21 < 22; i_21 += 3) 
                    {
                        for (long long int i_22 = 0; i_22 < 23; i_22 += 1) 
                        {
                            {
                                arr_72 [i_18] [i_19] [i_20] [i_21] [i_18] [i_21] = ((/* implicit */_Bool) arr_67 [i_19] [i_21] [(_Bool)1] [i_19] [i_18]);
                                var_31 = ((/* implicit */unsigned long long int) var_7);
                                arr_73 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (190485080U)));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned int) min((((long long int) (unsigned char)60)), (((/* implicit */long long int) var_4))));
                    /* LoopNest 2 */
                    for (signed char i_23 = 2; i_23 < 22; i_23 += 3) 
                    {
                        for (unsigned short i_24 = 0; i_24 < 23; i_24 += 3) 
                        {
                            {
                                var_33 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_56 [i_23 - 2] [i_23 - 2] [i_19] [i_19])));
                                var_34 = ((/* implicit */unsigned long long int) arr_43 [i_24]);
                            }
                        } 
                    } 
                    var_35 -= ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                    arr_80 [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) ((short) 0LL));
                }
            } 
        } 
    }
    var_36 = ((/* implicit */unsigned int) ((_Bool) var_10));
}
