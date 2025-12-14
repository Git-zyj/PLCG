/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((-(((!(((258052964712076709 ? 20210 : 1)))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 ^= (max((arr_5 [i_2] [i_2]), ((((max(9223372036854775808, (arr_2 [i_0]))) != 2358)))));
                            var_16 = (max(var_16, (((((~(min((arr_0 [i_0]), (arr_10 [i_1]))))) >> (-2375 + 2387))))));
                            var_17 = (max(var_17, (min(((((1 ? 8309273567234747909 : 1504428763505107667)) * ((10106625655614188625 ? (arr_2 [i_2]) : 2080768)))), ((2067639537768270013 << (6497089613168663548 - 6497089613168663487)))))));
                        }
                    }
                }
            }
        }
    }
    var_18 &= (max(10106625655614188625, ((-(max(1504428763505107667, 16942315310204443949))))));
    var_19 = (max(var_19, 0));
    #pragma endscop
}
