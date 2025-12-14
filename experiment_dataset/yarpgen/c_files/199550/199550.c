/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_10 * var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 += (max((min(-2482439246251370881, (arr_3 [i_1] [i_0]))), ((((arr_4 [i_0]) > (arr_0 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = (arr_9 [i_0] [i_2]);
                            var_19 = (max(var_19, ((min(((2482439246251370881 ? (arr_1 [i_3]) : 2482439246251370882)), ((((arr_1 [i_0]) ^ (arr_1 [i_3])))))))));
                            var_20 = ((((4294967276 ? 2482439246251370883 : 4)) / ((min((arr_5 [i_0] [i_1] [i_3]), 3455167784)))));
                        }
                    }
                }
                arr_11 [i_0] = 2482439246251370882;
                var_21 = ((-(!39)));
            }
        }
    }
    var_22 = (max(var_22, 2482439246251370855));
    #pragma endscop
}
