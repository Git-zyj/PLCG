/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5002
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
    var_20 = ((/* implicit */long long int) var_17);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((2305843009213693951ULL), (((/* implicit */unsigned long long int) (unsigned short)0))));
                                var_22 = min((((/* implicit */unsigned int) arr_0 [i_0 - 1])), (min((((/* implicit */unsigned int) var_12)), (((unsigned int) (unsigned short)7540)))));
                                var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)12354)), (var_6)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)12365))));
                }
            } 
        } 
    } 
}
