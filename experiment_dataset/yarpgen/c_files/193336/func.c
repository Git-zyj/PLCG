/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193336
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
    var_19 = ((/* implicit */_Bool) min((var_19), ((!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 |= ((/* implicit */_Bool) min(((-(((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))), (((/* implicit */int) (_Bool)1))));
            var_21 -= ((/* implicit */_Bool) max((min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1))));
            var_22 |= min(((_Bool)0), ((_Bool)1));
            var_23 = ((/* implicit */_Bool) min((var_23), (min((min(((_Bool)1), ((_Bool)1))), (min(((_Bool)1), ((_Bool)1)))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), (min((max(((_Bool)1), ((_Bool)1))), (min(((_Bool)1), ((_Bool)1)))))));
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_26 = min(((_Bool)1), ((_Bool)1));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_27 = min(((_Bool)1), (min(((_Bool)1), ((_Bool)1))));
                        var_28 *= ((/* implicit */_Bool) min((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))), (max((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), ((+(((/* implicit */int) (_Bool)1))))))));
                        arr_16 [i_6] [i_5] [(_Bool)1] [(_Bool)1] [i_2] [i_2] [(_Bool)1] = ((/* implicit */_Bool) max((max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))), (((/* implicit */int) max((max(((_Bool)1), ((_Bool)1))), (max(((_Bool)1), ((_Bool)1))))))));
                        var_29 = (_Bool)1;
                        arr_17 [(_Bool)1] [i_5] [(_Bool)1] [i_3] [i_0] [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (_Bool)1))))))));
                    }
                }
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (+(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                var_31 = ((/* implicit */_Bool) max((var_31), ((_Bool)0)));
            }
            var_32 = ((/* implicit */_Bool) min((var_32), (max((min(((_Bool)1), ((_Bool)1))), ((_Bool)1)))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_33 = (_Bool)0;
            var_34 -= (_Bool)0;
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_35 += ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                var_37 = ((/* implicit */_Bool) max((var_37), ((_Bool)0)));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_38 += ((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                var_39 -= ((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)0))))));
                arr_25 [i_0] [i_7] [i_9] = max((max(((_Bool)1), ((_Bool)1))), (max(((_Bool)1), ((_Bool)1))));
                var_40 = max((min(((_Bool)1), ((_Bool)1))), ((_Bool)1));
            }
        }
        arr_26 [i_0] [i_0] &= max(((_Bool)1), ((_Bool)1));
        var_41 = ((/* implicit */_Bool) min((var_41), (min(((_Bool)1), (min(((_Bool)1), ((_Bool)1)))))));
    }
}
