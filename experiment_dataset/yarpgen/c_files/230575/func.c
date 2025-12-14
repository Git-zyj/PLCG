/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230575
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_20 = (short)23376;
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-2176))))) ? ((-(((/* implicit */int) (short)-2176)))) : (((/* implicit */int) (short)13509))));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-(((/* implicit */int) (short)-23379)))))));
            }
        } 
    } 
    var_23 = (short)2176;
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    arr_13 [(short)1] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((-(((/* implicit */int) (short)-26448)))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32763)))))))));
                    arr_14 [i_3] [i_3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)2044))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (short i_6 = 4; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */short) (+((+(((/* implicit */int) (short)-1))))));
                                arr_21 [i_2] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) (short)-25964)) : (((/* implicit */int) (short)17761))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) min((var_25), ((short)-13500)));
                                arr_28 [i_3] [i_3] [i_4] [i_7] [i_8] = (short)-13496;
                                var_26 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)10747)))) ? (((/* implicit */int) (short)25969)) : (((/* implicit */int) (short)25963))));
                                var_27 = (short)-13519;
                                var_28 += (short)-8192;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
