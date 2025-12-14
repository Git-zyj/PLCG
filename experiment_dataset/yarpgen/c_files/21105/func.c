/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21105
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_9 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3] [10] [i_2 - 1])))))))))));
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_1 [i_3]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_21 [i_1] [i_5] [i_6] [i_1] = ((/* implicit */short) min((((/* implicit */int) arr_4 [i_1] [i_5] [i_6])), (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0)))))))));
                                arr_22 [i_1] = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_5 [i_0] [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_3))));
}
