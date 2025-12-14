/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234100
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (-((-((-(65534))))))))));
    var_16 *= ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned int) (-(arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (min((arr_0 [9]), (arr_3 [(unsigned char)16] [(signed char)8]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) -1075630221))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (-((-(arr_3 [i_0] [i_1])))));
                                var_18 = arr_7 [i_0] [i_1] [i_2];
                                var_19 += ((/* implicit */unsigned long long int) (((-(min((-65534), (((/* implicit */int) (signed char)-36)))))) == (((/* implicit */int) (unsigned char)144))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) (-2147483647 - 1));
                            var_21 = ((/* implicit */int) ((unsigned int) max(((-(((/* implicit */int) arr_6 [i_5])))), ((-(((/* implicit */int) arr_11 [i_1] [i_0] [i_5] [i_6])))))));
                            arr_19 [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 65547))) ? (arr_18 [i_1] [i_1] [i_1] [i_1]) : (((int) arr_11 [i_0] [i_1] [i_5] [i_6]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (4548475918910124175ULL) : (((/* implicit */unsigned long long int) arr_1 [i_1]))))) ? (min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)149)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-65527) >= (((/* implicit */int) arr_11 [i_5] [i_1] [i_1] [i_0])))))))) : ((~((~(arr_17 [i_0] [i_1] [i_2])))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) -929788200);
                            arr_22 [i_0] [i_0] [i_1] [i_0] [i_2] [i_5] [i_0] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_1] [i_2]))))));
                            arr_23 [2U] [i_5] [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? ((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_5] [i_5] [i_7])))) : ((-(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_7]))))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_7])) ? (arr_16 [i_1] [i_1] [i_5]) : (arr_16 [i_0] [i_1] [i_5]))) : ((-((-(((/* implicit */int) arr_9 [i_0] [13U] [i_2] [13U] [i_7] [i_7])))))));
                        }
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */int) min((var_23), (arr_10 [i_1] [i_1] [i_2] [i_5] [i_5] [i_8])));
                            var_24 |= ((((/* implicit */_Bool) min((arr_16 [i_0] [i_1] [i_5]), (((/* implicit */int) arr_9 [i_8] [i_5] [i_5] [i_2] [i_0] [i_0]))))) ? ((-(((/* implicit */int) ((-1356730402) <= (((/* implicit */int) (unsigned char)138))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)160)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8] [i_8] [i_8] [i_8] [15]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_16 [i_8] [i_5] [i_1]) : (1837380142))))))));
                        }
                        var_25 = arr_18 [i_0] [i_1] [i_2] [i_5];
                    }
                    var_26 = ((/* implicit */unsigned char) ((arr_18 [i_2] [i_1] [i_1] [i_0]) != (((((/* implicit */_Bool) 1416587885U)) ? (-65527) : (((/* implicit */int) (signed char)-64))))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (-((-(arr_2 [i_0] [i_0]))))))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_0])) ? (arr_15 [i_1] [i_2]) : (arr_15 [i_0] [i_0])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)28))))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_2])) ? (arr_15 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))));
                }
                var_29 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((16470809864072483905ULL), (((/* implicit */unsigned long long int) (unsigned char)70))))) || (((/* implicit */_Bool) ((arr_14 [i_1] [i_1] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) 507408294U))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_1] [i_0])) ? ((-(((/* implicit */int) (unsigned char)80)))) : ((-(arr_16 [i_0] [i_0] [i_0])))))) : ((-(((1490185892U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_1])))))))));
                arr_27 [i_0] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)0))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((var_13) | (var_7))) : (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */int) var_3)) : ((~(((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */int) var_8))))))));
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_0) : (var_7))), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-28))))) : ((-(3787558989U)))));
}
