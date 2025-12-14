/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236328
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
    for (int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 ^= ((int) ((872933730U) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) -829637497)) ? (829637517) : (348644190))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned char) var_12);
                            var_19 -= ((/* implicit */unsigned char) min((max((829637497), (434412781))), (var_8)));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned int) var_3))));
            }
        } 
    } 
    var_21 -= ((/* implicit */int) var_5);
    var_22 = ((/* implicit */unsigned char) max((min((2759331802U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16))))))), (max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
    var_23 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 434412763)) ? (((/* implicit */int) (unsigned char)179)) : (var_12)))))) ? (var_14) : (((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned int) var_2))))) ? (((int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
}
