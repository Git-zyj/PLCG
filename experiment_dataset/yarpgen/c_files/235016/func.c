/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235016
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((((/* implicit */int) var_13)) << (((((/* implicit */int) var_2)) - (21197)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)127)))))))) : (((/* implicit */int) var_0))));
                arr_5 [i_1] = (+((~(((/* implicit */int) var_18)))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) var_18);
                            var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)32763))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((unsigned short) ((long long int) var_11)));
            }
        } 
    } 
    var_23 = (short)32763;
}
