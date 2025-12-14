/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223203
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
    var_19 = ((/* implicit */unsigned char) ((long long int) var_0));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = (-(6923594284155731756LL));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_21 *= ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_4 [i_0])))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((unsigned short) ((unsigned char) var_12))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((unsigned int) var_11)))));
    var_24 = min((var_17), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)219))))));
}
