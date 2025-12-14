/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((~var_4) * -var_19))) ? ((var_8 ? var_10 : var_12)) : (((((-2534270842035291608 ? 4745255735237350671 : 4398046511103))) ? (max(1143956550, var_18)) : ((min(var_13, var_5)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min(1016, 9768980783486016943)) <= (-2534270842035291595 % var_7))) ? (min((min(0, 9768980783486016947)), (~var_19))) : 2534270842035291608);
        arr_3 [i_0] = (+(((arr_1 [i_0]) ? 9930181809327971663 : (arr_1 [i_0]))));
    }
    var_21 ^= (min((min(var_19, var_1)), (((var_7 >> (var_10 - 83))))));
    #pragma endscop
}
