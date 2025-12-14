/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21781
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_1])), (var_1)))) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) >= (arr_1 [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483647)) / (var_11)))) ? (arr_1 [i_1]) : (arr_0 [i_1] [i_1]))))))));
                arr_5 [i_0] [i_1] [(unsigned short)13] = ((/* implicit */unsigned int) (((+(arr_0 [i_0] [i_1]))) / (((/* implicit */unsigned long long int) ((194971015U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51788))))))));
                arr_6 [(unsigned short)6] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
            }
        } 
    } 
    var_14 = ((((/* implicit */_Bool) 536870911)) ? (4099996268U) : (((/* implicit */unsigned int) -607625478)));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [i_3] [i_3] = ((/* implicit */int) var_12);
                arr_14 [i_3] [i_3] [i_3] = ((/* implicit */short) (((_Bool)1) && ((_Bool)1)));
                var_15 -= ((/* implicit */int) var_6);
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_22 [i_5] [i_3] [i_4] [i_5] [(unsigned short)1] = ((/* implicit */int) max((((/* implicit */unsigned short) ((short) (unsigned char)204))), (min((arr_10 [i_2]), (((/* implicit */unsigned short) arr_3 [i_2]))))));
                                var_16 = ((/* implicit */unsigned long long int) ((min((max((4124858082U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) ((short) (_Bool)0))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (short)32739)) >= (((/* implicit */int) (short)13040)))))));
                }
            }
        } 
    } 
}
