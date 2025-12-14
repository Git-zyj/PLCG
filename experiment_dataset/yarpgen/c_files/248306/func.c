/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248306
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
    var_13 -= (!((_Bool)0));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */int) (!(var_1)))), (((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((max(((_Bool)0), (arr_1 [i_0]))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((_Bool) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) ((var_3) || (arr_8 [i_2])))), (((arr_8 [i_3]) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) arr_12 [i_3]))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                            {
                                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((((/* implicit */int) arr_19 [i_5] [(_Bool)1] [(_Bool)1] [i_6 + 1] [i_6 + 1])) >> (((/* implicit */int) arr_19 [i_5] [(_Bool)1] [i_4] [i_6 + 1] [i_4])))), (((/* implicit */int) arr_19 [i_2] [(_Bool)1] [i_4] [i_6 + 1] [i_6 + 1])))))));
                                var_15 *= ((/* implicit */_Bool) ((((/* implicit */int) (!(((_Bool) var_9))))) ^ (((/* implicit */int) (_Bool)0))));
                                arr_22 [i_2] [i_3] [(_Bool)1] [i_4] [i_3] [(_Bool)1] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (((((~(((/* implicit */int) var_5)))) & (((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1])))))) >> ((((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_17 [(_Bool)1])))))))));
                                arr_26 [i_4] [i_3] [i_4] [i_5] [i_3] = var_12;
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                var_17 ^= (_Bool)1;
                                var_18 -= max(((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_24 [i_4] [i_4] [i_8] [(_Bool)1] [(_Bool)1]))))))), (((_Bool) arr_21 [i_8] [(_Bool)1] [i_4] [i_3] [(_Bool)1] [i_2])));
                                var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))), (((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? ((+(((/* implicit */int) arr_16 [i_2] [i_3] [i_5] [i_3])))) : (((/* implicit */int) var_6))));
                            }
                            var_20 = ((/* implicit */_Bool) max((var_20), (max((((_Bool) (_Bool)0)), ((!(var_4)))))));
                        }
                    } 
                } 
                var_21 &= ((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [(_Bool)1])) <= (((/* implicit */int) var_9)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (var_1)));
}
