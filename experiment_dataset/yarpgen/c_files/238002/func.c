/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238002
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
    var_20 = var_10;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 -= var_15;
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) min((arr_1 [i_0] [i_0]), (var_18)))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [i_1] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((_Bool) arr_0 [(_Bool)1])))))));
                                var_23 = arr_5 [i_4] [i_3 - 1] [i_1];
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min(((~((~(((/* implicit */int) arr_5 [(_Bool)1] [i_2] [i_0])))))), ((+(((/* implicit */int) arr_1 [i_5] [i_3 - 1])))))))));
                                var_25 = var_3;
                                var_26 *= ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_11 [i_5] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5]))))));
                            }
                            arr_18 [i_1] [(_Bool)1] [i_2] [i_3 - 1] [(_Bool)1] [i_2] = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_3 - 1]))))));
                        }
                    } 
                } 
                var_27 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
}
