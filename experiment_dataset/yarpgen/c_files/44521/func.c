/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44521
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */_Bool) min((var_10), ((_Bool)1)));
                            arr_9 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_3])), (((arr_0 [i_2]) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_0])) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_11 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) var_6)))) / (((/* implicit */int) (_Bool)1))));
                                arr_12 [i_3] [i_2] [i_2] [i_3] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) min((min((max((var_6), (((/* implicit */short) var_9)))), (((/* implicit */short) min((var_1), (arr_0 [i_0])))))), (((/* implicit */short) min(((_Bool)1), (var_4))))));
                            }
                            for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                var_13 -= ((/* implicit */_Bool) (short)2886);
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            }
                            var_14 = ((/* implicit */short) ((((/* implicit */int) (short)-1)) != (((/* implicit */int) (short)-12489))));
                            arr_16 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_13 [i_2] [i_2] [i_2]))))));
                        }
                    } 
                } 
                arr_17 [i_1] [(short)19] = ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_2))))) ? ((~(((var_7) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) max((((/* implicit */short) (!((_Bool)1)))), (((short) (short)-3535)))))));
    var_16 = ((/* implicit */_Bool) var_6);
}
