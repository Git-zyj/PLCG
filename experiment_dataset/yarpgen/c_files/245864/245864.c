/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min(1447274353, (var_0 <= 2847692943))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (((arr_3 [i_1] [i_1] [i_0]) ? ((((min(-618732408798447573, (arr_4 [20] [i_1])))) ? 12364 : ((max(255, (arr_4 [i_0] [22])))))) : ((((((arr_4 [i_1] [i_0]) << 0))) ? 22434 : (arr_1 [i_0])))));
                var_18 *= ((((max((arr_2 [i_0] [i_1]), ((~(arr_0 [i_0])))))) != (((22434 ? 82 : 1447274353)))));
                var_19 = ((((min((arr_3 [18] [18] [i_1]), (arr_0 [i_0])))) / ((max(15, 22451)))));
                arr_5 [i_0] [i_0] = 65534;
            }
        }
    }
    #pragma endscop
}
