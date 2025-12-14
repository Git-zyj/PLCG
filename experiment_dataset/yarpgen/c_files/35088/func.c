/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35088
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
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) arr_1 [i_0 - 1] [i_1]);
                            var_16 = ((int) ((var_13) << (((((((/* implicit */int) arr_0 [i_0])) + (11421))) - (28)))));
                        }
                    } 
                } 
                var_17 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_10 [i_0] [i_1])));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) 14739925450383621861ULL);
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((unsigned short) max((var_11), (((/* implicit */unsigned int) var_12)))))) : (((int) arr_1 [i_1] [i_5 + 3])))))));
                            arr_16 [i_5] = ((/* implicit */signed char) (unsigned short)17554);
                            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((arr_12 [i_0] [21LL] [i_4] [i_5]), (((/* implicit */unsigned short) var_0))))))) ^ (((unsigned long long int) min((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                            var_21 = ((/* implicit */int) (+(329098245U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = var_8;
}
