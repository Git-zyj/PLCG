/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39941
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) - (arr_3 [i_0] [i_1] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))) : (var_1)))));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) arr_8 [i_2] [i_2] [i_2] [i_2]);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) 14068345246811693717ULL))));
                        var_17 ^= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_1) : (2556166894U)))) ? (arr_3 [i_0 - 3] [i_0 + 3] [(signed char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1]))))));
                    }
                    var_18 = ((/* implicit */unsigned long long int) var_13);
                    arr_14 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(1738800394U)))) ? (((arr_5 [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 3]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 3]))) : (1738800394U))) : (((/* implicit */unsigned int) ((arr_5 [i_0 + 1] [i_0 + 3] [i_0 - 2] [i_0 + 2]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 1] [i_0 - 3] [i_0 - 3])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) (~(min((arr_9 [(short)19] [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 1] [i_5]), (var_1)))));
                                var_19 += ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_15 [i_0 + 2] [i_0] [5] [i_0 - 3])) << (((arr_6 [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 3]) - (150775825U)))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */short) arr_16 [(signed char)8] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((max(((~(var_8))), (((((/* implicit */_Bool) 1638459134U)) ? (((/* implicit */unsigned int) 837695992)) : (1026802290U))))), (var_4)));
    var_22 = ((/* implicit */int) (short)-9092);
    var_23 = max((((min((1738800394U), (((/* implicit */unsigned int) var_2)))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (var_13));
}
