/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((((59 ? 137438953472 : 197))) ? -68 : var_15));
    var_19 = (var_15 + -2840617542080145645);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (((((arr_3 [i_0] [i_1] [i_0]) && ((min(59, 32760))))) && ((max((((2840617542080145648 || (arr_0 [i_0])))), 1136564723569463840)))));
                arr_4 [i_0] [i_0] = ((((((arr_2 [i_0]) ? ((~(arr_1 [i_0]))) : 65))) ? (((59 ? (arr_1 [i_1]) : ((~(arr_1 [i_1])))))) : (arr_2 [i_0])));
                var_21 = 236;
            }
        }
    }
    #pragma endscop
}
