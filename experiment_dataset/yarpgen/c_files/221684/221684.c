/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (var_9 & var_0);

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_11 *= (((((arr_6 [1]) ? 65509 : -105))) - (((~(arr_2 [i_3 + 1])))));
                        var_12 = (min(var_12, var_9));
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = ((var_6 && ((((arr_11 [i_0] [i_0] [i_0] [i_0 + 1]) && (arr_10 [i_0]))))));
        var_13 = (min(((645680409 == ((((arr_6 [i_0]) ? -105 : (arr_1 [i_0])))))), ((max(38, -4365421758891348897)))));
    }
    #pragma endscop
}
