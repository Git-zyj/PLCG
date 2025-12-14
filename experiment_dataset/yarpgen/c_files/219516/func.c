/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219516
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = min((((/* implicit */long long int) (-(((/* implicit */int) arr_8 [(unsigned short)19] [i_2] [i_1] [i_0]))))), (min((arr_1 [i_0] [i_1]), (var_6))));
                    var_13 += ((/* implicit */unsigned short) max((((/* implicit */int) arr_7 [i_1] [i_2])), ((+(((/* implicit */int) (signed char)37))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_3] [(unsigned char)20] [i_3] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)3105))))))))));
                                arr_15 [i_0] [i_1] [i_2] [(unsigned char)4] [(unsigned short)12] [i_3] = max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3] [i_4])) / (((/* implicit */int) arr_0 [i_0] [i_2]))))), ((-(7014198264332628506LL))));
                                var_14 = ((/* implicit */signed char) min((var_6), (((/* implicit */long long int) var_0))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_15 = var_6;
                        arr_19 [(unsigned char)12] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)8))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        arr_22 [(unsigned short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)48023)) ? ((-(((/* implicit */int) arr_0 [i_0] [i_0])))) : ((-(((/* implicit */int) (signed char)-22))))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((20LL) ^ (min((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [10LL] [i_2] [i_6])), (min((((/* implicit */long long int) (signed char)37)), (-5106775821116519629LL))))))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-124)) <= (((/* implicit */int) arr_23 [(signed char)21] [(unsigned short)3] [i_7] [i_2] [(unsigned short)5])))))));
                        var_18 = ((/* implicit */unsigned char) min(((+(-19LL))), (5106775821116519629LL)));
                        /* LoopSeq 4 */
                        for (unsigned char i_8 = 1; i_8 < 19; i_8 += 3) /* same iter space */
                        {
                            arr_28 [i_0] [i_7] [i_7] [i_7] [i_8 + 2] = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)228))))));
                            var_19 = ((/* implicit */signed char) ((-8763713163525193720LL) | (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_2] [i_1] [i_7])))));
                            var_20 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)48)))))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 19; i_9 += 3) /* same iter space */
                        {
                            var_21 = max((((/* implicit */long long int) (+((-(((/* implicit */int) arr_6 [(signed char)2]))))))), (max((((/* implicit */long long int) (unsigned char)11)), ((-(-2380156217655693620LL))))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_1 [i_0] [i_9 + 3]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)16)))))))))));
                            arr_32 [i_0] [i_1] [i_2] [i_7] [(unsigned short)3] = (unsigned short)41263;
                            arr_33 [i_7] [i_9 - 1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_20 [i_9 + 3])))) * (max((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_7] [i_1])), ((~(((/* implicit */int) (signed char)104))))))));
                        }
                        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 3) /* same iter space */
                        {
                            arr_36 [i_0] [i_1] [i_7] [(unsigned char)8] [i_10 + 1] = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
                            var_23 = ((/* implicit */unsigned short) var_5);
                        }
                        for (unsigned char i_11 = 1; i_11 < 19; i_11 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_38 [i_7] [14LL] [i_2] [i_7] [i_11]))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            arr_42 [i_0] [i_1] [i_2] [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */int) max(((unsigned short)31771), (((/* implicit */unsigned short) (signed char)-13))))) << ((((+(((/* implicit */int) (unsigned short)35032)))) - (35032))))) * ((~(((/* implicit */int) arr_30 [i_7] [i_1] [(unsigned char)17] [(unsigned char)17]))))));
                            var_26 *= (unsigned short)14336;
                            var_27 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_37 [i_0] [i_1] [i_2] [i_0] [i_12] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) arr_37 [i_12] [i_12] [i_7] [i_2] [(unsigned short)10] [(unsigned short)10]))))));
                            arr_43 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */unsigned char) (-((~(-9214291200977135717LL)))));
                        }
                        for (signed char i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            var_28 = ((/* implicit */long long int) min((var_28), (min((8710226211375443565LL), (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 19LL))))), ((~(((/* implicit */int) (unsigned char)71)))))))))));
                            var_29 = var_10;
                            var_30 += ((/* implicit */signed char) var_1);
                        }
                        for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)51940))));
                            var_32 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_16 [i_0] [(unsigned char)0] [(signed char)5] [i_0] [i_0] [i_0]))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_3), (var_4))))))) ? ((-(((/* implicit */int) (signed char)20)))) : (((/* implicit */int) var_0))));
}
