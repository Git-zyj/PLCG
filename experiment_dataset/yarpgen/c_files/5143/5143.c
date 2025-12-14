/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((((((~18446744073709551603) != (~var_6)))) == ((max((1 != 30615), (30615 == 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (max((min(-30615, -4036)), (((!((max((arr_0 [14] [14]), var_9))))))));
                arr_4 [i_0] [i_0] = (((~30613) < 14704335863911752176));
                var_13 = (!-4009817505312827132);
            }
        }
    }
    #pragma endscop
}
