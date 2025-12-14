/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240080
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)19067)) > (((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) arr_4 [2LL] [i_0] [i_0])) : (((/* implicit */int) var_8))))))) >> (((((/* implicit */int) ((unsigned short) (+(-6223418876287648519LL))))) - (64740)))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_3] [(short)2] [(short)15] [i_4] [i_4] = ((/* implicit */short) (unsigned short)63488);
                                var_20 = arr_7 [(short)4] [i_1 - 1] [(unsigned short)0] [i_3];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 6223418876287648506LL))));
}
