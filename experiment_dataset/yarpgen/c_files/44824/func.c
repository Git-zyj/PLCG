/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44824
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
    var_12 *= min((var_7), (((/* implicit */unsigned int) var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) max((min((((/* implicit */int) arr_6 [(unsigned char)0] [i_1] [i_2] [(unsigned char)0])), ((+(((/* implicit */int) (unsigned char)184)))))), ((+(((/* implicit */int) var_1))))));
                            var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) -1044974559)), (2586303714923988740LL)));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)5783)), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [0]))))));
            }
        } 
    } 
}
