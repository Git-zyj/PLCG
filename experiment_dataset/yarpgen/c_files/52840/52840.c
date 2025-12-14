/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(255, ((max(-86, var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, var_4));
                    var_12 = 245;
                    arr_8 [i_0] = ((((((max(var_4, 890871764994870079))) || (!528482304))) || (arr_3 [1])));
                    var_13 = 51509;
                    var_14 ^= ((-((-4151082396526786385 ? -24 : 7))));
                }
            }
        }
    }
    #pragma endscop
}
