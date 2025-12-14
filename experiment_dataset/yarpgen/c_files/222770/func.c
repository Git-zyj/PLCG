/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222770
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
    var_15 = ((/* implicit */unsigned int) min((var_5), (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) (unsigned char)69);
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_1] [i_0]))) / (var_1))))) ? (((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (signed char)16)))) : ((+(((((/* implicit */int) var_11)) / (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [3LL])))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */int) min(((short)18330), (((/* implicit */short) ((((/* implicit */int) (short)18330)) == (((/* implicit */int) var_2)))))))) != (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 2] [i_1])) : (((((/* implicit */int) (short)-26287)) % (((/* implicit */int) (short)16959)))))))))));
                }
                for (short i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    var_18 = (+(min((var_5), (((/* implicit */long long int) (unsigned char)184)))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */int) min((arr_9 [i_3] [i_1]), (((/* implicit */signed char) arr_11 [i_1]))))) * ((-(((/* implicit */int) max(((short)18900), ((short)-18331)))))))))));
                    /* LoopSeq 4 */
                    for (int i_4 = 1; i_4 < 14; i_4 += 4) 
                    {
                        arr_15 [i_1] [(signed char)9] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (short)18333)) != (((/* implicit */int) arr_13 [i_1 + 1])))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_3] [(short)8] [i_3] [i_4 + 1] [i_4 + 1])) ? ((+(var_5))) : (((/* implicit */long long int) min((167394577U), (((/* implicit */unsigned int) -1552023417)))))))))))));
                        var_21 = ((/* implicit */_Bool) ((1552023426) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned int) var_3);
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_0 + 1] [i_0]))) : ((-(4294967295U)))));
                        }
                        var_23 ^= ((/* implicit */short) (~((+(arr_18 [i_1] [i_1] [i_3] [i_0] [i_0 + 2])))));
                        arr_21 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(0U)));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_5] [i_0 + 1]))))))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) (~(min((((/* implicit */long long int) 0U)), (max((((/* implicit */long long int) var_14)), (var_5)))))));
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            arr_27 [10] [i_1] [i_3] [i_3] [i_3] [i_7] [i_8] &= ((/* implicit */long long int) (-(max((((((/* implicit */int) (short)16957)) + (((/* implicit */int) (signed char)116)))), ((+(((/* implicit */int) (short)18341))))))));
                            var_26 = min((min((arr_6 [i_0] [i_8] [i_8]), (arr_6 [i_0 + 1] [i_7] [i_8]))), (min((arr_6 [i_1] [i_3] [i_8]), (arr_6 [i_0] [i_1 + 1] [i_0]))));
                            var_27 = ((((((/* implicit */_Bool) -5944135689014692205LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-16937), ((short)16982))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16949))) : (14663441042165411765ULL))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [12LL] [4ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_7] [i_8]))) : (arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_18 [i_8] [i_7] [i_3] [(signed char)14] [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7] [i_7] [i_7] [(short)12]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)18332)))))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)16959))))) : (((/* implicit */int) ((-7925403388526051954LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_0] [i_7])))))))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((max((arr_14 [(unsigned char)7] [i_0 + 1] [i_0 - 1] [(signed char)1] [(unsigned char)7] [i_1 - 2]), (arr_14 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_1 + 1]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 - 2] [i_9])) ? (max((((/* implicit */long long int) arr_22 [i_9])), (var_5))) : (max((((/* implicit */long long int) var_3)), (arr_19 [i_0])))))))))));
                        }
                        for (short i_10 = 3; i_10 < 15; i_10 += 1) 
                        {
                            var_30 &= ((/* implicit */short) (~(min((min((((/* implicit */long long int) (short)-16960)), (-1448399332343579403LL))), (((/* implicit */long long int) arr_32 [i_7] [i_7] [i_3] [i_7] [i_3] [(signed char)2] [i_10 - 1]))))));
                            arr_33 [9] [i_1] [i_3] [i_0] [i_1 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_22 [i_0 + 1]), (arr_22 [i_1 - 1])))) ? (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) max(((signed char)-51), (((/* implicit */signed char) arr_11 [i_0]))))) : (((/* implicit */int) arr_25 [i_1] [i_3])))) : (((((((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (short)-18331)))) + (2147483647))) >> (((-1552023417) + (1552023442)))))));
                            var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8988)) ? (4294967295U) : (((/* implicit */unsigned int) -1552023416))))) ? ((~(((/* implicit */int) arr_10 [5LL] [i_0] [(_Bool)1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) > (17948954223090431266ULL)))))) != ((((~(((/* implicit */int) var_13)))) / (max((-1967250837), (((/* implicit */int) (signed char)18))))))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) arr_2 [i_0] [i_1 - 1] [i_3]))));
                            arr_34 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_24 [i_3] [i_3] [(short)6] [i_3] [i_0] [i_3]))))));
                        }
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) var_5))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
                    {
                        arr_38 [i_0 - 1] [i_1 + 1] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) max((arr_18 [i_0 + 2] [i_0] [i_1 + 1] [i_0 + 1] [5LL]), (arr_18 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_0 - 1] [i_11])));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-2772)) ? (((/* implicit */unsigned long long int) 1972754660U)) : (6057641789767942277ULL))) + (0ULL)))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) var_1)) <= (arr_14 [i_0 + 1] [i_1] [i_1] [i_1 - 2] [i_3] [i_11])))))));
                        arr_39 [i_0] [i_3] [i_3] [i_3] = min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */signed char) var_14)));
                        var_35 *= ((/* implicit */long long int) var_14);
                        arr_40 [i_0] [i_1 + 1] [i_3] [i_0] = ((/* implicit */int) ((_Bool) max((((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (short)18993))))), (var_8))));
                    }
                }
                arr_41 [(signed char)12] [i_0] [i_1] |= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_1] [i_1 - 2])) ? (arr_18 [i_0 - 1] [i_0 + 2] [i_1 + 1] [i_1] [i_1 - 2]) : (arr_18 [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_1] [i_1 - 1]))));
                /* LoopNest 2 */
                for (signed char i_12 = 1; i_12 < 13; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_36 &= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_1] [i_1] [i_1]), (arr_2 [i_1] [i_12] [i_1])))) ? (((/* implicit */long long int) ((int) arr_2 [i_1] [i_12] [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_1] [6ULL] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))) : (var_1)))));
                            arr_46 [i_12] [i_12] [i_12 + 3] [i_1] [i_12] |= ((/* implicit */_Bool) ((((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 - 1] [i_1 + 1] [i_13] [i_1 + 1] [i_0]))) != (-3107439531034576743LL)))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)21)))))));
                        }
                    } 
                } 
                arr_47 [(unsigned short)6] [i_1] &= ((/* implicit */signed char) (~(max(((~(((/* implicit */int) (short)-16976)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)29010))))))));
            }
        } 
    } 
}
