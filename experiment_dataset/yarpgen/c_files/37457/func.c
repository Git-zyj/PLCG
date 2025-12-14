/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37457
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_3 [3] &= ((/* implicit */_Bool) arr_1 [i_0 + 2]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) (-(max((((unsigned long long int) (short)10003)), (((/* implicit */unsigned long long int) var_11))))));
                            arr_14 [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) arr_5 [i_0 + 2]);
                            arr_15 [i_0] [i_1] [i_1] [i_1] [9LL] [i_3] [i_4] = max((((((/* implicit */int) arr_8 [i_0 + 1] [i_0])) * (((/* implicit */int) arr_8 [i_0 + 1] [(unsigned char)0])))), (((/* implicit */int) max(((unsigned short)0), ((unsigned short)65526)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                        {
                            var_20 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] [0U])) - (((/* implicit */int) var_14))))) ? (max((((/* implicit */long long int) (unsigned short)33752)), (arr_9 [i_0 + 1] [i_0] [(unsigned short)10] [(unsigned short)10]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))))) + (((/* implicit */long long int) 1339513156U))));
                            arr_18 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [(unsigned short)1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((max((((/* implicit */long long int) var_16)), (arr_1 [i_2]))) > (((/* implicit */long long int) ((/* implicit */int) max((var_8), (((/* implicit */short) var_10)))))))))));
                        }
                        arr_19 [i_0] [(signed char)4] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((170624391) >= (((/* implicit */int) arr_0 [i_0] [i_3]))))) <= (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)210)), (var_4))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_14)), ((unsigned short)0)))))))));
                        var_21 = ((/* implicit */_Bool) (unsigned char)61);
                        var_22 = ((/* implicit */_Bool) (((((~(var_9))) >> (((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))) >> (((2657272374U) - (2657272330U)))));
                    }
                    for (long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_0] [i_6] [i_0 - 1] [i_0 - 1])), (var_4)))))))));
                        var_24 += ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_12)), (arr_7 [i_0 + 1] [(unsigned char)10] [i_2] [(unsigned char)10]))))) - (((/* implicit */int) var_11))));
                        var_25 |= ((/* implicit */short) (-(((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21571))) * (1440443254U))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)9)) * (((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_23 [i_0] [i_1] [i_2] [i_2] [i_6] = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (arr_9 [i_6 + 3] [i_2] [i_1] [i_0])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_6] [i_6])), (((((/* implicit */_Bool) var_5)) ? (2657272353U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) : ((+(arr_9 [(_Bool)1] [i_1] [i_2] [i_6 + 3]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0 + 1] [i_1]), (var_6))))) ^ (((unsigned long long int) (unsigned short)31)))))));
                        var_28 &= var_17;
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (long long int i_9 = 3; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) max((arr_9 [i_0 + 2] [i_0] [i_0] [10LL]), (((/* implicit */long long int) var_15))))) && ((!(((/* implicit */_Bool) arr_32 [i_8])))))))));
                                var_30 ^= max((max((((/* implicit */unsigned short) ((((/* implicit */int) var_15)) < (((/* implicit */int) (short)7109))))), (max((var_3), (var_3))))), (((/* implicit */unsigned short) (_Bool)1)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */int) ((2082659135U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))));
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12)))) ^ (((/* implicit */int) arr_11 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_2] [4U]))));
                            var_33 += ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) <= (2212308133U));
                            arr_39 [i_0] [(_Bool)1] [(_Bool)1] [i_10] [i_11] [i_10] [i_11] = ((/* implicit */signed char) var_6);
                        }
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            arr_44 [i_12] [i_1] [i_12] [i_1] [5] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)55778))))))) | (((((/* implicit */_Bool) var_4)) ? (arr_41 [i_0] [i_12] [(unsigned char)1] [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (-1175983974))))))));
                            var_34 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (2082659114U))));
                            arr_45 [i_0] [i_0 + 2] [i_0 + 2] [i_12] [i_0 + 2] = ((/* implicit */short) ((max((((/* implicit */unsigned int) (unsigned short)65532)), (1440443254U))) == (((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_10] [i_1]), ((unsigned short)65526)))))));
                            arr_46 [i_0] [i_0] [i_12] [i_0] = (((_Bool)1) || (((/* implicit */_Bool) (signed char)2)));
                        }
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)158))))))) != ((-(((/* implicit */int) (signed char)-8)))))))));
                        /* LoopSeq 2 */
                        for (long long int i_13 = 3; i_13 < 10; i_13 += 4) 
                        {
                            arr_50 [i_0] [i_1] [i_1] [i_10] [i_10] [i_13] = ((/* implicit */_Bool) ((long long int) 2082659135U));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
                            arr_52 [3LL] [i_1] [3LL] [i_10] [i_13] &= ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_18)))), (((/* implicit */int) var_18))))) || (((_Bool) max(((_Bool)1), ((_Bool)1)))));
                        }
                        for (int i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            var_36 += ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (((arr_5 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49)))));
                            arr_55 [i_0 + 2] [i_1] [i_0 + 2] [i_10] [i_14] = arr_49 [i_14] [i_14] [i_14] [(_Bool)1] [i_14];
                            var_37 = ((/* implicit */unsigned int) ((int) max((max((((/* implicit */long long int) var_3)), (var_13))), (max((((/* implicit */long long int) arr_30 [i_0] [i_10] [i_0] [i_2] [i_10] [(unsigned short)9])), (-5299251613189274182LL))))));
                            arr_56 [i_0] [i_1] [i_2] [7LL] [i_14] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1971978238665644472LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (short)3584))))))))));
                        }
                    }
                    for (signed char i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        arr_60 [i_1] [i_2] = ((/* implicit */int) max((max(((-(var_9))), (((/* implicit */long long int) arr_6 [i_0 - 1] [(unsigned short)2])))), (((/* implicit */long long int) var_5))));
                        var_38 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(2212308181U)))) ? (((((/* implicit */int) var_8)) + (((/* implicit */int) (signed char)-74)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)52353)) > (((/* implicit */int) arr_49 [i_0 + 1] [i_1] [(signed char)9] [i_15] [(unsigned short)7]))))))) >> (((((((/* implicit */int) (short)2358)) * (((/* implicit */int) (short)-23744)))) + (55988376)))));
                    }
                }
            } 
        } 
    }
    for (signed char i_16 = 0; i_16 < 14; i_16 += 3) 
    {
        var_39 = ((/* implicit */int) (+(max((((/* implicit */long long int) ((unsigned char) 6294785178477863770LL))), (max((arr_63 [i_16] [i_16]), (((/* implicit */long long int) (unsigned short)49381))))))));
        var_40 += ((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned char) (((-(var_13))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_11)))))))))));
    }
    var_41 = ((/* implicit */unsigned int) var_16);
}
