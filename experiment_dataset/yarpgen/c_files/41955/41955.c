/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-1792 == ((min(4096, -1799)))))) ^ var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_21 &= (arr_0 [i_1 + 2] [i_1 + 2]);
                var_22 = arr_0 [i_0] [i_1];
                arr_5 [i_0] [i_1] &= ((8441326677655782894 <= (arr_2 [i_1 + 2] [i_1 + 1])));
                var_23 &= ((((((((var_7 ? 5358802932907917006 : (arr_0 [i_1] [i_0])))) && (((arr_4 [i_0]) || (arr_3 [17] [i_1])))))) << -18446744073709551615));
            }
        }
    }
    var_24 = (min(var_19, (((!(((var_19 ? -256 : var_7))))))));
    #pragma endscop
}
