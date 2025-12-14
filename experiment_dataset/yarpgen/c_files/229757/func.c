/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229757
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
    var_17 = ((/* implicit */unsigned short) var_6);
    var_18 += ((/* implicit */unsigned int) var_9);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) arr_1 [(_Bool)1] [(_Bool)1]);
            var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [17ULL] [i_1 - 1]))) * (var_3)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 2099540647471711977LL)) : (6270464557793392645ULL))) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) arr_1 [i_0] [0U]))))))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
        }
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (2147483646)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) 6U)) | (2099540647471711977LL)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (2099540647471711977LL)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    arr_13 [i_3] [i_3] [18U] [i_0] = ((((arr_10 [i_3] [i_2] [(_Bool)1]) ^ (arr_10 [i_0] [i_0] [i_0]))) | ((~(arr_10 [i_0] [i_2] [i_3]))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) var_1)), ((~(arr_17 [i_0] [(_Bool)1] [(_Bool)1] [i_3] [(unsigned short)21] [i_5 + 1])))))));
                                var_21 = ((/* implicit */short) (((~(-2099540647471711978LL))) < (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_3 [i_2])) / (arr_9 [i_0] [i_2] [6U] [i_5]))))));
                                var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)-11))) ? (((/* implicit */unsigned long long int) min((var_8), (2551818964U)))) : ((~(arr_17 [i_5] [i_5 + 1] [i_5 - 2] [22U] [i_5 - 1] [i_5 + 3])))));
                                arr_21 [i_0] [i_0] [18LL] [i_0] [13U] [18LL] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_11 [i_5 - 2])), (((int) ((unsigned int) arr_6 [i_4] [i_2])))));
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */_Bool) -5210681520963260660LL);
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) ^ (((((/* implicit */_Bool) arr_3 [i_0])) ? ((~(var_3))) : (min((((/* implicit */unsigned int) var_2)), (var_11)))))));
    }
    for (unsigned int i_6 = 2; i_6 < 24; i_6 += 1) 
    {
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((~(var_11))) ^ ((-(var_5))))))));
        arr_25 [i_6] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) min((((/* implicit */int) arr_23 [i_6])), (-1730908465)))), (max((-5210681520963260660LL), (((/* implicit */long long int) var_4)))))), (min((2099540647471711988LL), (((/* implicit */long long int) ((unsigned int) var_8)))))));
    }
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (var_14)));
        var_26 *= ((_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (((2347748810U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7])))))));
        arr_29 [i_7] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7] [7U] [(_Bool)1] [23U]))) != (1718664061U)))), (((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2963891600U)))));
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_7] [i_7])))))));
    }
    for (int i_8 = 2; i_8 < 12; i_8 += 3) 
    {
        arr_33 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)127)))))))));
        arr_34 [i_8] = ((/* implicit */_Bool) ((unsigned int) arr_17 [i_8] [i_8] [i_8] [12U] [i_8] [i_8]));
        arr_35 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_8] [13U])) && (((/* implicit */_Bool) arr_17 [i_8] [i_8 + 2] [i_8 - 1] [i_8] [i_8 + 2] [i_8]))));
    }
}
