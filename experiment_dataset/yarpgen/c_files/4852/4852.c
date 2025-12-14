/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(-76165314, 43169);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] &= var_9;
        arr_4 [i_0] [i_0] = ((!(~var_7)));
        var_16 = 1;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [10] &= (min((14072 || 10696), 51463));
        arr_9 [i_1] = ((-((var_10 * (arr_6 [i_1] [i_1])))));
        arr_10 [i_1] = (((((min(-26, var_10))) ? (!51437) : ((-(arr_6 [i_1] [i_1]))))));
        arr_11 [i_1] = arr_0 [i_1];
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_20 [i_1] [i_1] [i_3] [i_4] = (min((arr_12 [i_1] [i_2] [i_4]), ((1 - (arr_12 [i_1] [i_2] [i_3])))));
                        arr_21 [i_1] [i_2] [i_2] [i_2] = (((!21714) ? (arr_19 [i_1] [i_4] [i_4] [i_4] [i_4]) : 17031));
                    }
                }
            }
        }
    }
    #pragma endscop
}
