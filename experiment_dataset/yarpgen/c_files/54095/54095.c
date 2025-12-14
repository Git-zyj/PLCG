/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, 2091173544119266730));
                    var_20 = 0;
                    var_21 = (max(var_21, ((max((min((max(11729, -64)), (arr_7 [i_2] [i_1] [i_0]))), ((min((min(154, var_17)), (!var_7)))))))));
                    var_22 = (12755157743946408863 + -1919663449);
                }
            }
        }
    }
    #pragma endscop
}
