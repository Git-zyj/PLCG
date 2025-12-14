/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (((((((((~(arr_3 [i_1] [i_2]))) + 2147483647)) >> (2013265920 - 2013265919)))) ? ((18446744073709551615 ? (((1 ? 1 : 1))) : -6)) : (((~((-2013265903 ? 1 : -2013265920)))))));
                    var_13 = ((max((((-(arr_1 [i_1 + 1])))), (min(-3387479093050165479, 1)))));
                    arr_8 [i_1] [i_2 - 1] [i_1] [i_1] = (arr_0 [i_0]);
                }
            }
        }
    }
    var_14 |= (min(((((((var_8 ? 3546269765 : var_0))) ? var_1 : 1))), (((((1 ? -6807930608377020387 : 0))) ? 1 : ((4361127022388153423 ? 1 : 2605594779649819191))))));
    #pragma endscop
}
