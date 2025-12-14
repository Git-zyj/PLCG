/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_3] [i_2] [i_3] = (!(arr_8 [i_0] [i_1 + 2] [i_2] [i_3] [i_3]));
                            arr_10 [i_3] = (~(max((((3082175947761922256 >= (arr_4 [8])))), ((11908737276460816717 ? -1581052952 : 4854132976172792443)))));
                            var_13 &= (min((((arr_2 [i_1] [i_1 + 2]) ? (arr_2 [0] [i_1 + 1]) : var_7)), -7));
                        }
                    }
                }
                var_14 = (max(1587724797, 8));
            }
        }
    }
    #pragma endscop
}
