/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((3018454962735479590 ? 1750623115408776529 : 14728524567746627599)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = ((-7519500662732222841 / (max((((-6969612160235866372 ? var_1 : (arr_2 [i_0] [i_0] [i_1])))), (arr_6 [i_0] [i_1] [i_2] [i_2])))));
                    var_12 = var_4;
                }
            }
        }
    }
    var_13 &= 64;
    var_14 = var_2;
    #pragma endscop
}
