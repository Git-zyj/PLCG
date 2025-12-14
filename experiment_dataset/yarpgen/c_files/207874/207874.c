/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 -= ((((((var_15 / var_4) > ((((var_12 == (arr_2 [i_1])))))))) - (((4783449900815305224 && -20649) & (var_12 > 2398568977)))));
                var_17 = (min(var_17, ((((((((var_6 + 2147483647) << (((var_13 + 30658) - 17)))) - ((((arr_2 [1]) > (arr_2 [i_0])))))) != (((((var_11 > (arr_0 [i_1])))) & (54021 ^ var_6))))))));
                arr_5 [1] [i_1] = (((((((((arr_1 [i_0]) % (arr_2 [i_0])))) && (((arr_3 [13] [i_0] [1]) != var_6))))) | ((((((arr_0 [i_0]) == (arr_0 [i_0])))) * (917089960 > 3999548612)))));
            }
        }
    }
    var_18 = ((((((-2672297013193093487 >= 1) == (var_15 == var_4)))) << ((((var_9 != var_7) != (var_7 > var_8))))));
    #pragma endscop
}
