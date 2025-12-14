/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (-4961 <= var_0)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((((max(((min(723153433, 3571813868))), (max((arr_0 [i_0]), var_14))))) ? 123 : 3912230888)))));
        var_19 = (max(var_19, (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = (min(((min((arr_11 [i_0] [i_0] [i_1]), (arr_11 [i_0] [i_0] [i_1])))), (max((max((arr_9 [i_0]), (arr_3 [i_1]))), var_8))));
                        var_21 = (max(var_21, -141));
                        arr_14 [i_1] = var_14;
                    }
                    arr_15 [i_2] [i_1] [i_0] = 4217679553383351487;
                }
            }
        }
        var_22 = min((133 <= 123), 3362195483335730143);
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = (((!var_4) != ((-(arr_18 [i_4] [i_4])))));
        var_23 |= var_3;
    }
    #pragma endscop
}
