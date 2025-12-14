/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 ^= (min(((var_6 ? var_6 : (arr_3 [i_0]))), ((((max((arr_0 [i_1]), (arr_3 [i_0])))) ? (~var_7) : ((((arr_3 [i_0]) != (arr_1 [i_0]))))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_16 ^= (((((var_6 ? (((var_5 && (arr_5 [i_0] [i_1] [i_1] [i_2])))) : (~var_0)))) ? (arr_0 [i_0]) : ((6199087817216202591 / (var_6 != 9185792989462498052)))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((var_9 == (var_10 > -48)));
                    var_17 = 12745553677553533463;
                    arr_9 [i_0] [i_1] [i_2] = arr_4 [i_1];
                }
            }
        }
    }
    var_18 ^= var_9;
    #pragma endscop
}
