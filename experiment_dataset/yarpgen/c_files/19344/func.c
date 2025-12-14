/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19344
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
    var_10 = ((/* implicit */_Bool) min((((/* implicit */int) max(((((_Bool)1) && ((_Bool)1))), ((_Bool)1)))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
    var_11 = ((/* implicit */_Bool) min((var_11), (max(((_Bool)1), ((_Bool)1)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                        arr_12 [(_Bool)1] [i_0] [i_0] = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))));
                        var_12 = var_9;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))));
                            var_14 = ((/* implicit */_Bool) min((var_14), (var_9)));
                            arr_15 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [(_Bool)1] [i_0] [i_4] = ((_Bool) var_4);
                        }
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1)))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_16 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) min(((_Bool)1), ((_Bool)1)))))));
                arr_21 [i_6] [(_Bool)0] = ((/* implicit */_Bool) min((((/* implicit */int) max(((_Bool)1), (var_4)))), ((-(((/* implicit */int) (_Bool)1))))));
                var_17 = ((_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (_Bool)1))))));
                arr_22 [(_Bool)1] |= (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
