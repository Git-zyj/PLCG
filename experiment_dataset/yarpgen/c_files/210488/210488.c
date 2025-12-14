/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = ((((min((var_11 + var_5), var_17))) ? ((var_16 ? (((min(var_15, var_10)))) : (-684222230513875897 / var_1))) : var_0));
    var_20 -= (((((-3842545945652553761 ? 24424 : 4294967295))) ? -6553336070038137095 : ((((min(30023, 18)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_21 -= var_8;
        var_22 -= ((var_6 >= (((~((-230115913661099438 ? 23205 : 25)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_23 = (max(var_23, ((min(28, ((((arr_0 [i_1]) < (~var_10)))))))));
        arr_4 [i_1] = (((~((65535 ? 0 : 1627250423)))));
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_24 = (max(var_24, ((((((~(min(21746, (arr_6 [i_2] [i_2])))))) & (min((arr_5 [i_2]), -var_2)))))));
        arr_7 [i_2 - 1] |= var_0;
    }
    var_25 = ((((min(var_13, var_14))) + 21839));
    #pragma endscop
}
