/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_0 && var_8) == var_3)) || ((max((!var_10), (max(var_1, var_2)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (min(var_14, (((~((~(arr_2 [i_0]))))))));
        arr_3 [i_0] = (((arr_1 [5]) ? 2305843009213693952 : (arr_2 [i_0])));
    }
    var_15 = (min(var_15, (3021003396019438645 - 1)));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                var_16 = ((((max(1, 15))) ? (arr_6 [i_2] [i_1 + 1]) : ((((arr_1 [i_1 - 2]) == (arr_1 [i_1 + 1]))))));
                var_17 = ((!((!(((704031505 ? 4294967295 : 3150173464371128454)))))));
                var_18 = ((max(var_6, 68)));
                var_19 = ((((+(max((arr_4 [3]), var_7)))) | ((((!(arr_2 [i_1 + 2])))))));
            }
        }
    }
    #pragma endscop
}
