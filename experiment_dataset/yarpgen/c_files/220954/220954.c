/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (min((11595452559269483229 <= var_5), 201));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = (~var_6);
                    var_15 = (max(var_15, (((((min((arr_2 [i_0 - 1] [18]), (arr_0 [i_1 - 2])))) >= ((32386 * (arr_0 [i_1 + 1]))))))));
                }
                arr_8 [i_0] = ((~(~217)));
                arr_9 [i_0] [i_0] = (min((arr_1 [i_0 - 1] [i_1]), (min(47, 3179265082464359018))));
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
