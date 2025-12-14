/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = (min((var_15 / -32744), 17385));
                    arr_8 [i_0] [i_0] [i_0] = ((((arr_2 [i_2 + 1]) >= ((min(-17391, 32743))))));
                }
                arr_9 [i_0] [i_1] = ((((min(var_16, (arr_1 [i_0] [i_1])))) ? (((arr_1 [i_0] [i_1]) ? var_1 : 1)) : (!10)));
                arr_10 [i_0] = 1;
            }
        }
    }
    var_17 = ((-(-3790784789034895251 >= var_5)));
    var_18 = var_4;
    var_19 = ((!(1 | 1)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_17 [i_3] = (!1);
                arr_18 [i_3] = (min(((((max(var_0, 32720))) ? (((min(var_5, 1)))) : ((31511 ? var_9 : 8600409069260950203)))), ((((arr_12 [i_4]) ? (arr_12 [i_3]) : (arr_15 [i_3]))))));
            }
        }
    }
    #pragma endscop
}
