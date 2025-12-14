/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25715
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
    var_19 = ((max((-1), (-1))) / (27));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (arr_2 [i_1])));
                var_21 = ((/* implicit */unsigned short) var_14);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31981))) : (var_12)))))) ? (min(((-(var_7))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) -1968102322)) != (var_7)))))) : (arr_7 [i_0] [i_0] [i_2] [i_3])));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1] [i_0])))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
