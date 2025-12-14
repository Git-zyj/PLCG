/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = ((min(6697257904044808777, 65535)));
                    var_13 = ((-(((var_6 > (arr_6 [23] [23] [i_0 - 3]))))));
                    var_14 += var_1;
                    arr_9 [i_0 + 1] [i_1] [i_1] [i_0 - 1] = ((((1 * (arr_1 [i_2] [6])))) * ((min(((-(arr_2 [i_0 - 2] [i_1]))), (arr_0 [i_0 - 1])))));
                    var_15 = ((((-1 ? 11749486169664742826 : 8629)) != ((((arr_4 [i_2] [i_0 - 2] [6]) << (arr_4 [i_0 + 1] [i_0 + 1] [i_2]))))));
                }
            }
        }
    }
    var_16 = (min(3490530422, 804436874));
    #pragma endscop
}
