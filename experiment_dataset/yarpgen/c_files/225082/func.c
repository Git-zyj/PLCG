/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225082
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
    var_15 = ((int) min(((+(-237891264))), (var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) 1202478612)) ? (-185450397) : (-889828043))) : (max((var_6), ((-2147483647 - 1)))))) + (2147483647))) << (((max((185450394), (min((var_13), (var_12))))) - (185450394))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_12 [i_3 - 3] [i_0] [10] [i_1] [i_0] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) -84370015)) ? (-185450389) : (1990455038))) : (((-185450395) * (0)))))) ? (min((max((2147483647), (-92105087))), (((arr_4 [i_0] [i_0]) / (arr_0 [i_1] [i_3 - 1]))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [5])) ? (((arr_10 [i_3] [i_1] [i_2] [i_2] [i_2] [i_3 - 2]) << ((((((((-2147483647 - 1)) - (-2147483635))) + (31))) - (18))))) : ((-(var_8))))));
                            arr_13 [i_3] [i_1] [i_3] = min((((2101842012) / (17272315))), ((+(arr_11 [11] [i_1] [11] [i_3 + 3]))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    for (int i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_17 = arr_11 [i_6] [i_1] [i_4] [i_1];
                                arr_21 [i_5] [i_5] [i_5] [i_5] [i_0] [18] = arr_5 [i_0] [i_1] [i_4];
                                var_18 = arr_19 [i_0] [i_1] [i_4] [15] [i_5 + 2] [13] [i_6];
                                var_19 = ((/* implicit */int) max((var_19), (max((((((/* implicit */_Bool) arr_14 [i_5 - 2] [i_5 + 2] [i_5 + 1] [i_5 - 2])) ? (((int) 889941718)) : (arr_18 [i_0] [i_0] [i_4] [i_0] [i_5 + 2] [i_6]))), (min((arr_17 [i_5 + 1] [i_5] [i_5 + 2] [i_5 - 2]), (min((var_13), (arr_4 [i_0] [i_1])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 18; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        for (int i_9 = 2; i_9 < 18; i_9 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), (var_3)));
                                var_21 = (+((-2147483647 - 1)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = max((var_4), ((-(((((/* implicit */_Bool) 447038131)) ? (var_4) : (var_3))))));
}
