/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33486
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
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_0 - 1] [i_0] [i_0] [i_0] [i_1 - 2] [i_2])) : ((-(var_11)))))) ? ((+(((int) 932513450)))) : (var_0)))));
                                var_15 = ((/* implicit */unsigned short) min(((~(max((var_2), (var_2))))), (var_13)));
                                var_16 |= ((/* implicit */int) var_3);
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) arr_4 [i_0] [i_0 + 1] [i_0])));
                    arr_16 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 + 3] [i_2])) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_1]) : (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_2])))) ? (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_2]) : (((((/* implicit */_Bool) var_6)) ? (var_11) : (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1 + 3] [i_1 - 2] [i_1])))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1131771897)) ? (((unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_1 - 2] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            {
                arr_25 [i_5] = min((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((int) (unsigned short)65390)) : (((/* implicit */int) (unsigned short)12)))), (var_6));
                var_18 = ((/* implicit */unsigned short) var_1);
                arr_26 [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((var_10), (var_12)))))) - (((/* implicit */int) var_3))));
                arr_27 [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned short) ((int) ((((/* implicit */unsigned int) var_9)) <= (var_4)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((_Bool) (((+(((/* implicit */int) (unsigned short)39834)))) ^ (((/* implicit */int) ((_Bool) var_8))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (((!(((/* implicit */_Bool) ((unsigned short) var_10))))) ? (((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned int) var_5)), (var_4))) : (max((var_4), (((/* implicit */unsigned int) var_0)))))) : (((/* implicit */unsigned int) min((((var_0) + (((/* implicit */int) var_7)))), (((/* implicit */int) var_7))))))))));
}
