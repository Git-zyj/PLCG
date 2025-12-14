/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((1672613868 ? var_16 : ((min(1, 1295022310)))))) ? ((-(max(var_13, 1)))) : ((~((201 ? -28274 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((-53 ? 88 : -117)) < ((~(arr_1 [i_0] [i_1]))))));
                var_18 = (max(((65535 << (112 - 99))), ((((28274 | 177) != ((56 ? 2147483647 : 31)))))));
                var_19 = ((~((3224480248 | ((43173 ? 2185841832 : 21914))))));
                arr_7 [i_1] [i_0] = (((((1 ? -1 : (arr_0 [i_0] [i_1]))) - ((((arr_2 [i_0]) > -117))))) != ((min(28292, 1))));

                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    var_20 = 1;
                    var_21 = (((((!4294967295) * 0)) / 1));
                    arr_10 [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
