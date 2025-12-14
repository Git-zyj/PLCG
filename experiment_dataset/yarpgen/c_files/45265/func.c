/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45265
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
    var_10 = max((var_2), (var_1));
    var_11 = (_Bool)1;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -76381090)) ? (-1279607760) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [0U] [i_2] [8] [0U] &= (_Bool)1;
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_2 [i_1 + 1] [i_1])))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_4 = 2; i_4 < 13; i_4 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    var_12 = ((arr_4 [i_0] [i_1 + 1] [3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                    var_13 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (0)));
                }
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_1] [i_4] [i_6] [i_7] = (+(max((((/* implicit */int) var_3)), (arr_21 [i_7] [i_0] [i_1 + 1] [i_1 + 1] [i_4 - 2]))));
                            arr_23 [i_0] [i_7] [i_4 - 1] [i_6] [i_7] = ((/* implicit */int) 2464065613U);
                        }
                    } 
                } 
                var_14 = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((1367591933) / (var_2))))) : (((((/* implicit */_Bool) (-(-311139551)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (var_1))) : (var_1))));
                var_15 += ((/* implicit */unsigned int) (_Bool)1);
            }
            var_16 &= ((/* implicit */int) (_Bool)1);
        }
        arr_24 [i_0] = ((((arr_14 [i_0] [i_0] [i_0] [i_0]) || (arr_14 [i_0] [15U] [i_0] [i_0]))) ? (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) (_Bool)1)))) : (((arr_14 [i_0] [i_0] [2U] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
    }
}
