/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = (max(var_17, ((max((((arr_2 [i_0] [4]) >= (arr_2 [i_0] [6]))), (((arr_2 [i_0] [4]) >= (arr_4 [i_0] [i_1]))))))));
            var_18 = (min(var_18, ((((((~(arr_4 [i_1] [i_0])))) ? ((min((arr_5 [i_1] [7] [i_0]), (arr_5 [i_0] [i_1] [i_1])))) : 13)))));
            var_19 -= ((15354377549030606063 + (((3092366524678945552 ? 0 : 0)))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_20 -= ((~(min(242, 146251902))));
            var_21 -= ((+((min((!14171), (308924487 && var_16))))));
            var_22 -= (((min(15354377549030606063, ((min(13, 7))))) != ((((!((var_13 && (arr_2 [i_2] [i_2])))))))));
        }
        var_23 -= ((((min((arr_1 [i_0]), ((((arr_0 [4] [i_0]) || 243)))))) && -26061));
        var_24 = (max(var_24, var_0));
        var_25 = (max(var_25, ((((((max(var_0, (arr_2 [i_0] [4]))) ? (var_7 && 1) : (7493710994710218064 > var_15))))))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_26 = (arr_11 [10]);
        var_27 -= (((-1 % (13 > 1))) >> (0 / 576460735123554304));
        var_28 -= (arr_10 [1]);
    }

    for (int i_4 = 3; i_4 < 24;i_4 += 1)
    {
        var_29 -= var_3;
        var_30 -= var_12;
    }
    #pragma endscop
}
