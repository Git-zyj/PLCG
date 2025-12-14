/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = ((-(arr_3 [5] [5] [i_2])));
                    var_16 = (min(var_16, (((-((2305843008945258496 ? var_10 : (!791661033))))))));
                    var_17 = ((((var_7 + (1 + var_3)))) / 6973794806681632932);
                }
            }
        }
    }
    var_18 = (max(var_18, ((((((!(!1)))) != var_4)))));
    var_19 = 2147483632;
    var_20 = 2677261773;
    #pragma endscop
}
