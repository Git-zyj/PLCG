/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224853
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
    var_20 &= ((/* implicit */unsigned int) (+(524287)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((_Bool) (+(471247301))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */int) ((arr_3 [i_0] [i_1]) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3776627627U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (arr_9 [i_0] [i_1])));
                                arr_17 [i_0] [i_0] [11U] [i_3] [i_4] [i_0] [i_4] = ((/* implicit */unsigned int) ((int) arr_4 [i_0] [i_0]));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 ^= ((/* implicit */_Bool) -524286);
    }
}
