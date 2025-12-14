/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 == ((-576460752303423488 ? 475789951581890330 : 17970954122127661285))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (((((((((arr_4 [i_1] [i_1 - 2] [i_1]) & (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] [i_2] [i_3])))) ? (~-2416) : ((((arr_2 [i_0]) != (arr_0 [i_0] [i_0]))))))) ? 7589 : ((((max(0, 7569387898402564538))) ? (7569 * 26773) : (~475789951581890330)))));
                                var_18 = 34325;
                            }
                        }
                    }
                    var_19 = (min(475789951581890330, 7589));
                }
            }
        }
    }
    var_20 = ((58078 ? 1 : var_1));
    #pragma endscop
}
