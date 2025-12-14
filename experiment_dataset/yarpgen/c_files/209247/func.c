/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209247
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
    var_11 = ((/* implicit */short) -2772079027672530346LL);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_12 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 956263728U)))))) == (6120030068101003046LL)))) + (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)103))))))))));
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (+(3338703579U))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) (-(((/* implicit */int) ((min((((/* implicit */long long int) (short)-25521)), (6120030068101003040LL))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6120030068101003046LL)))))))))));
                    var_15 = ((/* implicit */short) 3338703567U);
                }
            } 
        } 
    } 
}
