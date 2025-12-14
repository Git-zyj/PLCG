/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37782
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_0])) ? (((/* implicit */int) arr_11 [i_3] [i_3] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_1] [(short)14] [i_1])))), ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(unsigned short)11]))))));
                                var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 1998782110U)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5))) & (1998782110U)))))) ? (min((var_0), (((/* implicit */unsigned int) arr_9 [i_2] [i_1])))) : (((((/* implicit */_Bool) ((unsigned int) arr_0 [i_3]))) ? (((2296185186U) >> (((/* implicit */int) (_Bool)0)))) : (max((((/* implicit */unsigned int) var_16)), (var_9)))))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 2296185185U)))))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) < (2296185185U))), ((_Bool)1)))))));
            }
        } 
    } 
    var_20 = max((((/* implicit */unsigned int) (_Bool)0)), (var_9));
}
