/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4294967295;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (((1940776518 == 6997556596773298237) ? (((var_5 ? ((max(22336, 1183052455))) : (var_9 - 366346948)))) : 3295647202776295890));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = 13659049089909650193;
                                var_20 = ((((42999 ? 7898092849178607067 : 12609)) >= (((((103 ? 4420727728750423872 : 99))) ? ((913590881 ? 0 : 33883)) : -1940776518))));
                            }
                        }
                    }
                    var_21 &= (min(-237, (((((((arr_3 [i_0] [i_0]) >> (3470166276933413909 - 3470166276933413867)))) || (!1373382442389279481))))));
                    arr_15 [i_1] = (arr_12 [i_0] [i_0] [i_2] [i_0] [1]);
                }
            }
        }
    }
    #pragma endscop
}
