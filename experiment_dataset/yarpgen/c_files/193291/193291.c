/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_12 |= (max((arr_0 [i_1]), (arr_2 [i_0] [i_0] [i_1])));
                var_13 = (!66);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_14 = ((-(min(-1039998490, (max(1582865228524605145, (arr_13 [i_2] [i_3] [i_2] [i_3])))))));
                            var_15 = (!6800910409958933984);
                            var_16 = (arr_10 [i_2]);
                        }
                    }
                }
                var_17 = (((((4232483725 ? 535033309 : (arr_6 [i_3])))) == (arr_4 [i_3])));
            }
        }
    }
    #pragma endscop
}
