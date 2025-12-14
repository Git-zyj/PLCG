/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (max(((max(((1 ? 4294967295 : 1)), (-2618663075979900046 != var_7)))), ((~(var_12 ^ 4294967295)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((((((((min(133, (arr_7 [i_0] [i_1 - 1] [i_1 + 2] [i_2])))) + (arr_6 [i_0])))) ? ((min((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_1 + 3])))) : (((min((arr_5 [i_1]), (arr_7 [i_0] [i_0] [i_1] [i_2 - 2]))))))))));
                    var_20 = (((max((((-(arr_2 [i_0] [i_2])))), ((65527 ? -2618663075979900035 : 116)))) / 1));
                }
            }
        }
    }
    var_21 = ((((((0 < var_17) >> (var_4 - 29010)))) ? 4294967295 : var_12));
    var_22 ^= (min((((((1 ? 22953 : 40736)) >> ((((2618663075979900045 ? 36 : 438725638)) - 16))))), (max(4294967295, 3139033637))));
    #pragma endscop
}
