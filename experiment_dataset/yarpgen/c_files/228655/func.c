/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228655
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-2952)))))))), (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned int) arr_3 [i_1]))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_2 [i_1] [i_1]))) & (((/* implicit */int) var_17))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))), (((/* implicit */int) (!((_Bool)1)))))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((arr_3 [i_1]), (arr_3 [i_1])))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)2948)) ? (67108863) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_1 [(short)13])))))));
                var_21 |= ((/* implicit */long long int) (-((+((~(((/* implicit */int) arr_0 [i_0]))))))));
                var_22 += ((/* implicit */int) ((signed char) ((short) arr_3 [i_0])));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) (+(max(((~(1954600394U))), (var_1)))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (((-(var_9))) << (((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */unsigned int) (~(arr_3 [i_4])))) : ((~(arr_13 [i_2]))))) - (1206473806U))))))));
                        var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))))), (var_6)))) ? (((((/* implicit */_Bool) arr_2 [i_4] [i_5])) ? (arr_8 [i_3]) : (arr_2 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2)) ? (((int) var_8)) : ((~(((/* implicit */int) var_6)))))))));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        arr_20 [i_2] [i_2] [i_4] [8LL] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_2] [i_6] [i_4] [(_Bool)1] [i_3] [4ULL]))))), (((((/* implicit */unsigned int) arr_3 [i_3])) + (0U)))))));
                        arr_21 [i_3] [i_3] [i_3] = arr_19 [i_2] [i_2] [i_6 - 2] [i_6] [i_2];
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_16 [i_2] [i_3] [(short)8] [(short)8] [i_6 - 2] [i_2]), (arr_16 [i_2] [i_3] [i_3] [i_3] [i_6 - 1] [i_2])))))))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (((/* implicit */int) min((arr_18 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2] [i_6]), (((/* implicit */unsigned short) (short)-1))))) : (((/* implicit */int) var_6))));
                        arr_22 [i_2] [i_3] [i_4] [i_6] = min(((short)-2931), (((/* implicit */short) (_Bool)1)));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_1)))))));
}
