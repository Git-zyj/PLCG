/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 &= (2998121730913108723 != 18585);
                arr_6 [i_0] [i_1] [1] = ((max(120, -394204194418178808)));
                var_21 = (max(var_21, ((max((max(var_13, var_4)), (((-8363643428232330963 ? 716397680 : 0))))))));
            }
        }
    }
    var_22 ^= var_13;
    #pragma endscop
}
