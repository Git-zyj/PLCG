/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((!((((((1298264109 ? -2653395320842446058 : (arr_0 [i_0] [i_0])))) ? ((6718263020241762320 ? (arr_4 [i_0] [i_0] [i_0]) : 210)) : ((var_11 ? (arr_4 [i_0] [6] [6]) : (arr_4 [i_0 - 1] [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 2] = (min(((19354 ? (min(46175, -4997540709135939646)) : 19354)), (((~(((arr_9 [i_3] [i_1] [i_1] [i_0]) ? (arr_2 [i_1] [i_1] [i_1]) : var_9)))))));
                            var_18 = (max(((((max((arr_9 [i_0] [i_0] [i_0] [0]), (arr_3 [i_0 - 1] [i_2])))) ? (((19354 ? (arr_8 [i_0 - 1] [5] [i_2] [i_3] [i_3]) : (arr_8 [i_3] [i_2] [i_1] [i_0 - 1] [i_0 - 1])))) : (min((arr_8 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0]), 4294967275)))), ((21 ? (((4294967275 ? var_10 : var_13))) : (max(4294967285, 2147483647))))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((((min(var_17, var_8))) ? ((var_11 ? var_7 : var_3)) : ((var_7 ? var_14 : 96))))) ? ((11 ? -5184 : 24)) : (((((var_3 ? 46176 : var_17))) ? ((max(30, var_17))) : ((1 ? var_0 : var_7))))));
    #pragma endscop
}
