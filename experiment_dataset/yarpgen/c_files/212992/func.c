/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212992
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
    var_11 = max((-1451667024), (-1451667024));
    var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [(signed char)8] &= ((/* implicit */_Bool) min(((~(1188681269))), (((/* implicit */int) (short)15777))));
                arr_6 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (-1451667024))), (((/* implicit */int) ((_Bool) (-(var_1)))))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_13 |= ((/* implicit */_Bool) arr_0 [i_0]);
                                var_14 += max((((/* implicit */unsigned int) ((_Bool) (short)17289))), (((((/* implicit */_Bool) arr_4 [13] [i_2] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_3 [i_2] [i_2]))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [12] [(unsigned char)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) arr_13 [(unsigned short)4] [i_1] [3U] [3U] [i_1 - 1])), (0U)))))) ? (((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) >> (((/* implicit */int) arr_14 [i_0] [i_1])))) : (-1)));
            }
        } 
    } 
}
