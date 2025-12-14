/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53106
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
    var_10 -= ((/* implicit */signed char) (+(((unsigned int) ((signed char) var_3)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (unsigned short)5748))));
        arr_4 [i_0] = ((/* implicit */signed char) max((max((4563485455199161455ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))), (((/* implicit */unsigned long long int) ((short) (unsigned char)165)))));
        var_12 = ((/* implicit */short) max((max((13883258618510390160ULL), (((/* implicit */unsigned long long int) (+(arr_3 [18LL] [i_0])))))), (((/* implicit */unsigned long long int) -1043900778))));
    }
    for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (unsigned int i_3 = 2; i_3 < 10; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        arr_15 [i_2] [(signed char)0] [i_4] = ((/* implicit */int) ((short) var_6));
                        var_13 = ((/* implicit */unsigned char) ((short) (_Bool)0));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 3) 
                    {
                        var_14 -= ((/* implicit */signed char) ((int) max((((int) var_2)), (((((/* implicit */_Bool) 2417351420U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_3])))))));
                        arr_18 [1U] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((min((max((496U), (((/* implicit */unsigned int) arr_0 [21U])))), (max((arr_7 [i_5] [i_2]), (arr_13 [i_2]))))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_16 [i_5] [3ULL] [3ULL] [i_1])) ? (948232806) : (((/* implicit */int) (signed char)124)))))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            arr_21 [i_6] [i_1] &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)21)), (arr_13 [i_1])));
            var_15 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
            arr_22 [i_1] [0LL] = ((/* implicit */short) max((3538469135802066041LL), (((/* implicit */long long int) 1238463925U))));
        }
    }
    for (signed char i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_8 = 1; i_8 < 20; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                for (int i_10 = 3; i_10 < 19; i_10 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_16 ^= ((/* implicit */long long int) (_Bool)1);
                            arr_34 [i_7] [i_8] [18] [i_10] [i_11] = ((/* implicit */int) (+(542974566U)));
                            var_17 = ((/* implicit */unsigned int) 8731569910539083741LL);
                        }
                        for (unsigned short i_12 = 1; i_12 < 20; i_12 += 3) 
                        {
                            arr_38 [i_10] [i_10] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -638146470)), (max((((/* implicit */long long int) (_Bool)1)), (3538469135802066041LL)))))), ((-(arr_35 [i_7] [i_10 + 2] [i_10] [i_8 - 1] [i_12])))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((var_4), (((/* implicit */unsigned long long int) arr_26 [i_8] [i_9] [i_9])))))));
                        }
                        arr_39 [i_10] = arr_29 [i_7] [i_7] [i_10 + 2] [i_10];
                        var_19 |= ((((/* implicit */_Bool) min((((/* implicit */int) arr_31 [i_8 + 2] [i_8 + 2] [i_8] [i_10 + 3] [i_10] [8U])), (-1)))) ? (((((/* implicit */int) arr_31 [i_8 + 2] [i_10] [i_10] [i_10 + 3] [i_10] [i_10])) / (((/* implicit */int) arr_31 [i_8 + 2] [i_10 - 2] [i_8 + 2] [i_10 + 3] [i_10] [13U])))) : (((int) arr_31 [i_8 + 2] [i_8 + 2] [i_10] [i_10 + 3] [i_10] [i_10 - 2])));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)91)) ? (arr_24 [i_7] [i_7]) : (arr_26 [i_7] [i_7] [i_7]))));
        /* LoopSeq 1 */
        for (int i_13 = 2; i_13 < 20; i_13 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((_Bool) -346701981))), (max(((+(var_8))), (((/* implicit */unsigned int) arr_1 [12]))))));
            var_22 = (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (-948232807)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_13] [14LL] [i_7]))) : (max((((/* implicit */unsigned int) arr_32 [i_13 + 2] [8U] [i_13] [i_13 + 1] [i_13] [17U] [i_13])), ((+(3885625023U))))));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max((min((min((((/* implicit */long long int) arr_36 [i_7] [8U] [i_13] [i_13] [8U] [14] [i_13])), (3538469135802066051LL))), (((/* implicit */long long int) -1003086384)))), (((/* implicit */long long int) min((((/* implicit */int) ((signed char) arr_33 [18ULL] [i_7] [(signed char)16] [(signed char)16] [(signed char)1]))), (((((/* implicit */_Bool) (unsigned char)172)) ? (arr_23 [i_7]) : (((/* implicit */int) arr_1 [19]))))))))))));
        }
        var_24 -= ((/* implicit */unsigned int) max((((/* implicit */int) arr_29 [i_7] [i_7] [12U] [i_7])), (max((((/* implicit */int) arr_28 [i_7] [i_7] [i_7])), (-1)))));
    }
    var_25 ^= ((max((var_0), (((/* implicit */unsigned int) ((unsigned short) -3538469135802066076LL))))) / (((/* implicit */unsigned int) ((int) 1933593086U))));
}
