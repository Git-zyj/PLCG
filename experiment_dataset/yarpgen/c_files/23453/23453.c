/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 3632623622200358415;
    var_11 = (min(((1 ? 3632623622200358415 : 14814120451509193200)), 14814120451509193233));
    var_12 = ((((((((var_9 ? var_9 : var_9))) ? 0 : var_7))) ? (((((14814120451509193207 ? 4294967294 : 1085879942)) << ((((1 << (var_1 + 32755))) - 65528))))) : 6049051510038076994));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((+((((arr_4 [i_0] [i_1] [i_0]) < (((236 ? 0 : 9))))))));
                var_13 = ((arr_2 [i_1 - 2] [9]) || ((min((1 / var_5), ((6418554262253403377 ? (arr_4 [i_0] [i_1] [i_1]) : var_0))))));
                var_14 = (max(var_14, var_0));
            }
        }
    }
    var_15 -= (~((1 ? 536868864 : var_4)));
    #pragma endscop
}
