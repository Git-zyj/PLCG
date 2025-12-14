/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205080
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-29536))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15))))), ((-(((/* implicit */int) (short)29548)))))))));
                arr_4 [14LL] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [5U] [5U] = ((/* implicit */long long int) ((2147483647) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) 2084475201)) : (var_9)))))))));
                            arr_12 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((3448139613U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_2);
}
