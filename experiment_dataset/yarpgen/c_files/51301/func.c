/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51301
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
    var_13 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */short) (unsigned char)161);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min(((_Bool)0), (((_Bool) (+(var_8))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-11813)) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_2))))))) : (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (min((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL)))))));
                    var_14 = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) var_7)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 487457526U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_4] [(unsigned short)2] [i_4] [(signed char)1]))) : (var_9))))) >= (((((/* implicit */_Bool) (short)17788)) ? (-3435166722592734284LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5647)))))));
                                arr_16 [i_0] [i_1] [i_4] [i_1] [i_4] [i_3] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) arr_1 [i_0])) % (((((/* implicit */_Bool) (short)17786)) ? (((/* implicit */unsigned long long int) -7056597492376722846LL)) : (var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)234))))) ? (((/* implicit */int) (short)-7531)) : (((/* implicit */int) (signed char)-13)))))));
                                var_16 ^= (~(((((/* implicit */_Bool) 227525404U)) ? (((((/* implicit */_Bool) (signed char)53)) ? (2215608111U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))))) : (min((((/* implicit */unsigned int) var_0)), (var_8))))));
                                arr_17 [i_0] [i_0] [i_0] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (short)-23971))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (4294967288U)))))) ? (4294967267U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-17)))))));
                            }
                        } 
                    } 
                }
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((var_10), ((~((~(arr_14 [i_0] [i_1] [i_1] [i_1]))))))))));
                arr_18 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) var_7)) ? ((+(arr_6 [i_0] [i_1] [1U] [1U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33)))))) ? (((((/* implicit */int) max((((/* implicit */signed char) var_11)), (arr_12 [i_0] [i_1] [i_1])))) >> (((4294967267U) - (4294967255U))))) : (max((((/* implicit */int) ((short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((+(((/* implicit */int) (short)-1))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 1; i_5 < 12; i_5 += 3) 
    {
        var_18 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) -610154232215619219LL)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (signed char)13))))))) : (max((((((/* implicit */_Bool) 4294967266U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)32))) : (4503599627370496LL))), (-610154232215619219LL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10906)) ? (((/* implicit */int) arr_26 [i_7] [i_7] [i_5 + 3] [i_8])) : (((/* implicit */int) arr_26 [i_5] [i_6] [i_5 + 1] [i_5]))))), (((((((/* implicit */_Bool) (short)-10906)) && (((/* implicit */_Bool) (signed char)63)))) ? (var_6) : ((~(arr_28 [i_5] [i_6] [i_7] [i_8] [i_5])))))));
                        var_20 += ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)28496))));
                        arr_30 [i_7] [i_5] [i_5] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_7] [(unsigned short)19])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1462129691U)))) ? (((/* implicit */int) max((((/* implicit */short) var_7)), ((short)17784)))) : (((((/* implicit */int) (signed char)28)) / (((/* implicit */int) (signed char)-64)))))) * (((((((/* implicit */int) (unsigned short)39211)) * (((/* implicit */int) var_0)))) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-48))))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_5 + 2])) / (((/* implicit */int) arr_19 [i_5 + 3]))))) ? ((-(((/* implicit */int) arr_19 [i_5 + 3])))) : (((((/* implicit */_Bool) arr_19 [i_5 + 2])) ? (((/* implicit */int) arr_19 [i_5 + 1])) : (((/* implicit */int) arr_19 [i_5 + 3]))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((var_1) ? (((((/* implicit */_Bool) arr_1 [i_8])) ? (4067441892U) : (1419148945U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_6])) + (((/* implicit */int) (short)19421))))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_9 = 2; i_9 < 12; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) var_11);
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_39 [i_5] [i_9 + 1] [i_10] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)5864)), (4294967295U)));
                        arr_40 [i_5] [i_5] [i_5] [i_5 + 2] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967282U)) ? (4294967278U) : (((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4327)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)-102))))) : (2885043691U)))));
                        var_24 *= ((/* implicit */unsigned int) (unsigned char)63);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((unsigned long long int) var_11));
                        var_26 = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-13547))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_41 [(_Bool)1] [i_9 - 1] [i_5] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((long long int) (signed char)-64))));
                    }
                    arr_44 [i_5] [i_5] [i_10] = ((/* implicit */unsigned long long int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        var_27 ^= ((/* implicit */long long int) (~(((unsigned long long int) arr_38 [i_9] [0U] [i_5] [i_13] [i_9 + 2] [i_9]))));
                        arr_47 [i_5 + 1] [i_5] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [(unsigned char)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))) : (((arr_21 [i_5 + 3]) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_5] [i_9] [i_10])) ? (((/* implicit */int) arr_0 [i_10])) : (((/* implicit */int) arr_20 [i_9])))))))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)27))))) ? (arr_6 [(_Bool)1] [i_9] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_22 [i_10] [i_13]))))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_14 = 1; i_14 < 11; i_14 += 2) 
                        {
                            var_29 = (+(((/* implicit */int) arr_31 [i_9])));
                            arr_52 [i_5] [(_Bool)0] [i_10] [i_9] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)197)) <= (((/* implicit */int) var_12))))) << ((((~(((/* implicit */int) (unsigned char)228)))) + (259)))));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((var_6) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-5875)))))))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 3) 
                        {
                            arr_55 [i_5] = ((/* implicit */short) (((-(arr_27 [i_5 + 2] [i_5 + 2] [i_9 + 3] [i_9] [i_9 - 2]))) - ((-(arr_27 [i_5 - 1] [i_5 - 1] [i_9] [i_9] [i_9 - 2])))));
                            var_31 = ((/* implicit */signed char) (-(max((arr_29 [i_5 + 3] [i_5]), (arr_29 [i_5 + 2] [i_5])))));
                        }
                        var_32 = ((/* implicit */long long int) (signed char)-95);
                    }
                    for (signed char i_16 = 1; i_16 < 14; i_16 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_17 = 1; i_17 < 11; i_17 += 4) 
                        {
                            arr_61 [i_9] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                            arr_62 [i_5] [i_9] [i_10] [i_16] [9] [i_17 + 4] = ((/* implicit */short) ((((((((/* implicit */int) var_1)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (arr_11 [i_17] [i_16 + 1] [i_10] [i_10] [i_9] [i_5])))) : (((((/* implicit */_Bool) arr_15 [i_5] [i_9] [6LL] [i_16] [i_17 + 2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_5] [i_5] [i_9] [i_10] [i_10] [i_16] [i_17 + 2]))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-5901), (((/* implicit */short) (unsigned char)170))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)32710)) : (((/* implicit */int) arr_51 [i_17 + 3] [i_16] [i_16 + 1] [10LL] [i_9 - 1] [i_9] [i_5 + 2])))) : (((((/* implicit */int) var_0)) - (((/* implicit */int) arr_31 [i_5])))))))));
                        }
                        arr_63 [i_5 + 2] [i_9 - 1] [i_5] [i_16 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                    }
                }
            } 
        } 
    }
}
