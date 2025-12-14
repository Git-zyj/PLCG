/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((max(-29239, 7302709758345531506))) ? (11144034315364020127 == 20) : (max(var_13, 11144034315364020113)))), 123));
    var_20 &= ((((!(var_0 || var_0))) ? (!36752) : (((!(((var_13 ? var_15 : var_5))))))));
    var_21 = (max(((((7 == var_7) || -var_7))), (max((~var_0), (((var_10 + 2147483647) >> (var_10 + 92)))))));
    var_22 = (!1690511794);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_23 = (max((((!(arr_5 [i_1])))), (((var_7 ? 7302709758345531503 : 0)))));
                arr_7 [i_1] [i_1] = (max((((-36752 && (arr_4 [i_1])))), (max(11144034315364020137, ((((arr_2 [i_0] [i_1]) >= 7302709758345531502)))))));
                var_24 = (max(var_24, ((max(-27, (-32767 - 1))))));
            }
        }
    }
    #pragma endscop
}
