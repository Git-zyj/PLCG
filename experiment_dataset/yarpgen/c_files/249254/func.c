/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249254
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) 7282226540800233607LL);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_21 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_19) - (((/* implicit */int) (_Bool)0)))))));
                    var_22 &= ((/* implicit */unsigned long long int) 17U);
                    var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2]))) : (((arr_4 [i_0] [i_1] [i_2] [i_1]) ? (17U) : (arr_5 [i_0] [i_0 + 1] [i_0 - 1])))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : (3360606139U)));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            arr_17 [i_4] [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */signed char) ((((((/* implicit */int) var_0)) > (((/* implicit */int) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4 + 3] [i_0 + 1]))) : (((arr_1 [(_Bool)1] [i_3]) % (((/* implicit */unsigned int) -4))))));
                            arr_18 [i_0 - 1] [i_3] [7] [i_0 - 1] [i_0 - 1] = ((/* implicit */short) arr_12 [i_0 + 1] [i_3]);
                        }
                        for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            arr_22 [14U] [i_5] [i_4 + 4] [i_3] [i_0] = var_19;
                            var_25 = ((/* implicit */short) 25U);
                            var_26 = ((((/* implicit */_Bool) -4)) ? (4294967293U) : ((-(arr_10 [i_0 + 1]))));
                            var_27 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_4 + 3] [i_0] [i_0 - 1] [i_0 - 1]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 3; i_8 < 14; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_14))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])) + (((/* implicit */int) arr_13 [i_4 + 4] [(short)7] [i_8] [i_8 + 2] [i_8 - 3])))))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 426397771U)))))));
                        }
                        var_32 = ((/* implicit */int) max((var_32), ((+(4)))));
                    }
                } 
            } 
            var_33 = ((/* implicit */short) ((arr_3 [i_0 - 1] [i_0 - 1]) & (arr_3 [i_0 - 1] [i_0 + 1])));
        }
    }
    var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) min((min((22U), (max((((/* implicit */unsigned int) (_Bool)1)), (63U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1480907948)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)4634)) : (2147483638))) : (((int) (-2147483647 - 1)))))))))));
    /* LoopSeq 2 */
    for (int i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        var_35 = ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)4662)), (17U)))) ? (((((/* implicit */_Bool) arr_7 [i_9] [(short)13])) ? (arr_1 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9] [i_9]))))) : (arr_10 [i_9]))), (((/* implicit */unsigned int) arr_20 [i_9] [4] [i_9] [i_9] [i_9] [5U]))));
        arr_30 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)-29273)) ? (-445408116) : (((/* implicit */int) (signed char)-113)))))) ? (((arr_29 [i_9] [i_9]) ? (((/* implicit */int) arr_29 [i_9] [i_9])) : (((/* implicit */int) arr_11 [i_9] [i_9] [i_9] [(signed char)5])))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) -7831832721409109746LL))))), (arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))));
        arr_31 [i_9] = max((((/* implicit */unsigned long long int) min((arr_1 [i_9] [i_9]), (((/* implicit */unsigned int) arr_4 [i_9] [12] [i_9] [i_9]))))), (min((((/* implicit */unsigned long long int) min((3868569525U), (((/* implicit */unsigned int) var_16))))), (min((0ULL), (((/* implicit */unsigned long long int) -4658267508446207042LL)))))));
    }
    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_11 = 2; i_11 < 11; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    {
                        arr_41 [i_10] [i_11] [i_12] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_11 + 3] [i_11 + 2])) || (((/* implicit */_Bool) arr_2 [i_11 + 2] [i_11 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_11 + 3] [i_11 - 2])) ? (((/* implicit */int) arr_2 [i_11 + 2] [i_11 + 3])) : (((/* implicit */int) arr_2 [i_11 + 3] [i_11 + 3])))))));
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_40 [i_11] [i_11 - 1] [i_11 + 2] [10U] [i_11 + 1] [i_11 - 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_39 [i_10] [11] [i_12] [(short)8] [i_10] [i_12])))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)24556))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_19)), (var_9)))) ? (max((((/* implicit */long long int) arr_11 [12U] [15LL] [i_12] [i_12])), (var_5))) : (((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) arr_13 [i_10] [i_13] [i_12] [i_13] [i_10]))))))))))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_7) ? (arr_36 [i_10]) : (arr_36 [i_10]))))));
    }
    var_38 = ((/* implicit */int) ((max((max((var_18), (var_18))), (((/* implicit */unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 276428277U))))), (((((/* implicit */_Bool) 3360606139U)) ? (3868569538U) : (((/* implicit */unsigned int) var_8)))))))));
}
