/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227604
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
    var_15 = ((/* implicit */signed char) (~((~(var_11)))));
    var_16 = (!(((/* implicit */_Bool) (~((+(627983746)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 - 1])))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = (-((-(arr_4 [i_0] [i_0 - 1] [(_Bool)1]))));
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_4] = (~((-(((/* implicit */int) (unsigned short)52068)))));
                                var_20 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)54231))))));
                                var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)1240))))))))));
                                arr_16 [i_0] [i_4] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) var_14))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 *= (-(((/* implicit */int) (!(var_12)))));
}
