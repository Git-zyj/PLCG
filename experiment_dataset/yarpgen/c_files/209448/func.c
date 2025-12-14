/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209448
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max(((-(((/* implicit */int) max((arr_5 [i_0] [i_2]), ((_Bool)0)))))), (((/* implicit */int) min((((_Bool) var_8)), (((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_5 [i_0] [i_0]))))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] = max(((!(max(((_Bool)1), ((_Bool)1))))), (((_Bool) ((arr_6 [i_0] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_0 [i_4]))))) ? ((-(((/* implicit */int) var_11)))) : (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)0)))))), ((((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_1] [i_3] [(_Bool)1] [i_4] [i_4])) <= (((/* implicit */int) var_4)))))))));
                                var_14 = var_7;
                                var_15 = ((/* implicit */_Bool) ((max(((_Bool)1), (arr_9 [i_0] [i_1] [i_2] [i_3] [(_Bool)1]))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_0] &= (_Bool)0;
                    arr_17 [(_Bool)1] [i_0] [i_1] = ((/* implicit */_Bool) ((((arr_13 [i_2] [i_1] [i_1] [(_Bool)1] [i_0]) && (arr_13 [(_Bool)1] [i_1] [i_2] [i_2] [i_2]))) ? (((arr_13 [i_1] [i_1] [i_2] [(_Bool)1] [i_1]) ? (((/* implicit */int) arr_10 [i_0] [(_Bool)0] [(_Bool)0] [(_Bool)1] [i_2] [i_2] [i_2])) : (((/* implicit */int) (_Bool)0)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_16 = (_Bool)1;
    var_17 = ((/* implicit */_Bool) max((((var_5) ? (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (_Bool)1))))) : ((-(((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_3))))))));
    var_18 -= ((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) (_Bool)0)) : ((+((+(((/* implicit */int) var_10))))))));
    var_19 &= (_Bool)0;
}
