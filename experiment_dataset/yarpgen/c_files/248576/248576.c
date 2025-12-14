/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((+(((var_0 || 65516) ? var_1 : (!2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((max(0, 16)))));
                var_12 = (((4294967291 || ((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_1] [i_1] [i_0])))))) || (arr_0 [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 -= (max((min(4966, ((52060 ? -713793903 : (arr_10 [i_0] [i_0] [i_2]))))), ((~(!52060)))));
                            arr_12 [i_0] [4] = ((1 ? (((((arr_5 [i_2] [i_0] [i_2] [i_3 - 1]) && (arr_5 [i_0] [i_0] [i_0] [i_3 - 1]))))) : (((((255 ? (arr_2 [i_0]) : (arr_4 [i_3] [1])))) ? (((arr_9 [18] [i_1] [18] [i_0] [10] [18]) ? (arr_8 [i_3 + 1] [i_1] [i_1]) : 52060)) : ((((!(arr_8 [i_2] [20] [20])))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
