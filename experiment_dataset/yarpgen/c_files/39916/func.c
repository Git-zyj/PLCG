/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39916
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
    var_13 = ((/* implicit */short) var_12);
    var_14 = var_11;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)-8871)))), (min((((/* implicit */int) (unsigned char)190)), (arr_1 [i_4]))))))));
                                var_16 = max((max((((/* implicit */unsigned long long int) (short)8852)), (var_4))), (((/* implicit */unsigned long long int) max((arr_1 [i_2]), (((/* implicit */int) (unsigned char)253))))));
                                var_17 = ((/* implicit */unsigned long long int) (-(min((6098472U), (((/* implicit */unsigned int) (unsigned char)202))))));
                                var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-((+(arr_4 [i_3])))))), (min((arr_12 [i_0] [i_3] [i_3] [i_0] [i_4]), (((/* implicit */unsigned long long int) var_2))))));
                            }
                        } 
                    } 
                } 
                arr_16 [(short)9] [i_0] [i_0] = ((/* implicit */signed char) max(((~(arr_12 [20U] [i_1] [2ULL] [i_1] [i_0]))), (((/* implicit */unsigned long long int) (~(var_1))))));
                var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((4288868823U), (((/* implicit */unsigned int) (signed char)-14))))), ((~((~(var_5)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) max(((~(var_5))), (((/* implicit */long long int) max((arr_13 [i_1] [i_6] [i_6 - 1] [i_6 + 3]), (((/* implicit */unsigned int) (unsigned char)82)))))));
                            var_21 += ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)202))));
                            var_22 &= (+(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_5] [i_1] [i_0]))))), (max((var_7), (arr_12 [i_0] [i_5] [i_1] [i_5] [i_6]))))));
                            arr_22 [i_6 + 2] [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) max((min((var_5), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_6] [(unsigned short)21] [i_1] [i_0])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
