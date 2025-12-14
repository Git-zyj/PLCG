/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((34 ? (min((~15633821991195521946), (!var_12))) : var_12));
    var_15 = (max(var_15, (((!((((~var_3) ? (!36) : ((var_4 ? 0 : var_1))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 *= ((((min((arr_0 [i_0] [i_0]), (arr_0 [i_1] [i_0])))) ? (max((((arr_0 [i_0] [i_1]) ? 0 : (arr_1 [0] [8]))), (arr_2 [i_1] [15] [i_0]))) : var_9));
                var_17 = (((((255 ? 51 : 10935411623002232539))) ? (((min((arr_3 [i_0] [i_0] [i_1]), (arr_0 [i_0] [i_1]))))) : (arr_1 [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
