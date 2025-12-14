/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53915
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_14 = arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1];
                                var_15 -= ((/* implicit */unsigned long long int) (unsigned char)255);
                                var_16 = ((/* implicit */short) max((((/* implicit */unsigned int) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1])))))), (min((((/* implicit */unsigned int) var_1)), (var_5)))));
                                arr_13 [i_4] [i_4] [i_0] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_2] [i_4]))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max(((+(arr_0 [i_1 - 2]))), (((/* implicit */unsigned long long int) var_9))));
                    var_17 *= ((/* implicit */long long int) (unsigned char)0);
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 1977850880U))))), (max((arr_9 [i_2 + 1] [i_2] [i_2] [i_0] [i_0] [i_0 - 3]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 2])))))) <= (max((((/* implicit */unsigned long long int) (short)-12800)), ((+(arr_7 [i_2] [i_1] [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (((+(max((((/* implicit */unsigned int) (unsigned short)8880)), (1977850880U))))) > (max((((/* implicit */unsigned int) ((_Bool) (short)-12787))), (var_5))))))));
}
