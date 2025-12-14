/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 += (((arr_4 [4] [i_0] [i_2 - 3] [i_2 - 2]) ? (arr_5 [i_1 - 1] [i_2] [i_2 - 2] [i_2 + 2]) : (!812474728811086201)));
                    var_11 = ((!((((arr_2 [i_2 - 1]) % (arr_2 [i_2 - 1]))))));
                    var_12 -= ((+(((arr_4 [12] [i_2 - 3] [i_2 + 1] [i_2 - 3]) + (var_0 & 1)))));
                    var_13 = ((3821807314 ? 9107954106913781954 : 16101325112724526483));
                    arr_6 [i_2 - 1] [i_0] [i_0] [i_0] = 76;
                }
            }
        }
    }
    var_14 = (~var_2);
    var_15 = var_0;
    #pragma endscop
}
