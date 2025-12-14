/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((((2147475456 ? 16383 : 6626377148752684803))) ? (!2147475456) : ((0 ? 18446744073709551615 : 1))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_20 = (max(var_20, ((((((85 ? 0 : 3564415697))) ? ((10853929255163778611 ? 18446744073709551615 : 7978863809984534734)) : (((~((3387856802 ? 2147483642 : -8040124420927537847))))))))));
                        var_21 = (((((1740244494 ? 1352668418 : ((-51128448 ? 1932710826 : 255))))) ? ((((((16711680 ? 10853929255163778592 : 2362256469))) ? 255 : 2147475450))) : 1041258691478126350));
                    }
                }
            }
        }
    }
    var_22 = ((var_16 ? (((((18446744073709551615 ? -14 : 7))) ? ((187 ? 1 : 18446744073709551615)) : (((-14 ? 3532725737 : -11))))) : (((32767 ? var_10 : ((-1262194408 ? 14 : 0)))))));
    var_23 = (max(var_23, var_5));
    #pragma endscop
}
