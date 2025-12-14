/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_9 ? 2970356667703580769 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (~-559344535207057582);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] [i_3] = var_8;
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((((-(arr_0 [7] [i_3])))) ? ((max((arr_4 [i_0]), var_7))) : (max(var_5, (arr_4 [4])))))) ? (!559344535207057587) : 559344535207057574));
                        }
                    }
                }
            }
        }
    }
    var_12 &= (!var_4);
    var_13 &= (((var_4 ? (min(2935158550869720237, 907331019)) : (((-1700 ? 2557850135 : -7495))))) % ((((((min(-7507, -49)))) % ((-114 ? var_5 : 109))))));
    #pragma endscop
}
