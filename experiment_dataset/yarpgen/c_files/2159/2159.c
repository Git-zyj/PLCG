/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((-4215719734456386575 ? 0 : (!3351569948)));
                    var_11 = (!(((-((min(10546, 28053)))))));
                    var_12 ^= (max((-20817 != -10560), (min(462747726, 0))));
                }
            }
        }
    }
    var_13 = (max(var_13, 3832219569));
    #pragma endscop
}
