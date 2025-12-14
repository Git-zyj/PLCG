/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (((min((arr_5 [i_0 - 2] [i_2]), (((var_1 == (arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2])))))) >> (((min(var_3, (arr_3 [i_0] [i_1] [i_0]))) + 1518553411))));
                    var_14 = (((((!(arr_2 [i_1] [i_1] [i_1])) ? (!1698387635) : (((arr_6 [i_0] [i_1] [3]) ? (arr_3 [i_0] [i_0] [i_0]) : var_1))))));
                    var_15 = ((((((arr_0 [i_0 - 3]) ? -5146 : ((-(arr_4 [i_2] [i_1] [i_2] [i_2])))))) ? (((!(arr_1 [i_0 - 2])))) : (-1698387636 && -47)));
                }
            }
        }
    }
    var_16 = (((((((max(var_0, -1698387636))) ? -var_0 : (min(2249570818618693716, -10129))))) && var_9));
    var_17 = var_13;

    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        var_18 |= (((((arr_3 [i_3 + 3] [i_3 + 1] [i_3 - 3]) ? (arr_3 [i_3 + 1] [i_3 + 2] [i_3]) : -5147)) != ((-(arr_3 [i_3] [i_3 - 3] [1])))));
        var_19 *= ((!(arr_3 [i_3 - 2] [i_3 - 2] [i_3])));
        var_20 = (min(var_20, 1389532367));
    }
    var_21 = (((min(var_11, -var_5)) == var_6));
    #pragma endscop
}
