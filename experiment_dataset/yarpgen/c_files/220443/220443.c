/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (arr_1 [i_1 + 2]);
                    arr_8 [i_2] [i_2] [i_1] [i_0] = 20814;
                    var_16 = (max((arr_1 [9]), ((min(-27456, 0)))));
                }
            }
        }
        arr_9 [i_0] = ((((((0 > (arr_4 [i_0])))) % ((52 % (arr_6 [i_0]))))));
        arr_10 [0] = ((((((((arr_4 [i_0]) <= (arr_7 [i_0]))) ? 97 : ((-(arr_1 [i_0])))))) ? 3758096384 : -15700768429963959441));
    }
    var_17 -= ((((((var_7 / var_4) / var_2))) / (5697330984415855810 / var_1)));
    var_18 = ((((var_13 ? ((max(var_8, var_12))) : (-121 + 10601861041648716822)))) ? (~var_14) : ((536870912 ? var_8 : var_11)));
    #pragma endscop
}
