/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221815
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
    var_16 = ((/* implicit */unsigned long long int) var_15);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_17 &= ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0 - 1])) | (((/* implicit */int) arr_1 [i_1])))) * (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) arr_10 [i_0])))))));
                            var_18 = ((/* implicit */int) arr_1 [i_0 + 1]);
                        }
                    } 
                } 
                var_19 &= ((/* implicit */int) (~(min((var_2), (((/* implicit */unsigned int) ((arr_2 [i_0] [i_1]) ? (((/* implicit */int) arr_5 [i_0] [(unsigned short)4] [i_0] [9LL])) : (((/* implicit */int) (unsigned short)51572)))))))));
            }
        } 
    } 
}
