/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_14));
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_20 = ((((min(var_8, (arr_1 [2])) >> (((arr_3 [2] [i_1 + 1]) + 2058509248))))));
                var_21 = ((((((((arr_1 [0]) || var_14)) ? (min((arr_1 [2]), (arr_1 [i_0]))) : (max(139, var_7))))) ? (min(240591524, 2147483647)) : ((min((!-1222067965), (var_0 || 4611686018426863616))))));
                var_22 = ((!((max((arr_3 [i_1 + 4] [i_1 + 1]), (arr_2 [i_1 + 3] [i_1 + 3]))))));
                var_23 = (((max((max(-7233912730335027307, 240591524)), ((min(138, (arr_0 [i_0] [i_1])))))) - (((53773 ? ((18446744073709551584 ? -2302 : -2147483635)) : ((250 ? 2147483615 : var_2)))))));
                var_24 = ((((max((var_13 >= -7233912730335027307), var_13))) ? ((((((arr_3 [i_0] [i_0]) % var_10))) + (arr_2 [i_1] [i_1 - 1]))) : (((var_11 ? -2147483615 : var_5)))));
            }
        }
    }
    #pragma endscop
}
