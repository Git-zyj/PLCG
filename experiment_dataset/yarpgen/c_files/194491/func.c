/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194491
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
    var_14 = var_6;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_0] [(_Bool)0] [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */int) min((var_5), (arr_4 [i_1 - 1] [i_1] [i_0])))) : (((/* implicit */int) (!((_Bool)1))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 *= ((min((arr_1 [i_1 - 1]), (arr_1 [i_1 - 1]))) && (((/* implicit */_Bool) ((((arr_0 [i_0] [(_Bool)1]) && (arr_7 [i_3] [i_2] [i_1] [(_Bool)1] [i_0] [i_0]))) ? ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_13))))))));
                            var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_7 [i_1] [i_1] [i_1] [i_2 - 1] [i_0] [(_Bool)1]), (arr_7 [i_0] [i_0] [i_2] [i_2 - 1] [(_Bool)1] [i_2]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)1) && (arr_9 [i_0] [i_0] [i_1 - 1]))))));
                    var_19 = ((/* implicit */_Bool) (+((-(((((/* implicit */int) var_8)) + (((/* implicit */int) (_Bool)1))))))));
                    var_20 = (_Bool)1;
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (arr_4 [i_0] [i_1] [i_6])));
                                var_22 = ((/* implicit */_Bool) max(((-(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))), (((max((arr_16 [i_0] [i_4] [i_1] [(_Bool)1] [i_5] [i_5]), (arr_15 [i_0]))) ? ((-(((/* implicit */int) arr_8 [i_0] [(_Bool)1] [(_Bool)1] [i_5])))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_1] [(_Bool)1] [i_5] [i_6])) <= (((/* implicit */int) arr_16 [i_0] [i_4] [i_4] [(_Bool)1] [i_6] [i_5])))))))));
                                var_23 |= (!(((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_24 = min(((_Bool)0), ((_Bool)1));
}
