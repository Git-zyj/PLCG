/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (((((var_7 > 24131) + (35 || 7))) << ((((var_7 ^ var_13) != (var_11 && 4398046511103))))));
                var_17 |= ((((((-114 + 2147483647) >> (-3358776462215171853 + 3358776462215171880)))) / (((8694704622112387471 / 18446744073709551615) - (((72 - (arr_5 [i_0] [i_1] [i_1]))))))));
                var_18 ^= ((((((((arr_4 [i_0] [1] [i_1]) & 255)) & (((arr_2 [18] [18]) | (-127 - 1)))))) && ((((4398046511103 + (arr_0 [i_0]))) > (var_2 & 4398046511103)))));
            }
        }
    }
    var_19 = (((((((var_14 >= -1) > (4398046511103 < var_0))))) >= (((var_2 <= 3) + ((18446739675663040513 >> (var_2 - 3037451199487349917)))))));
    #pragma endscop
}
