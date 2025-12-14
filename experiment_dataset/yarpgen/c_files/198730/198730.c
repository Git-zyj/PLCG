/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((-1690808543 ? 9312089375158412150 : -3541299733129861149)) << (((((var_2 + 2147483647) << (((-8121166891998725343 + 8121166891998725361) - 18)))) - 2147483547))))) ? ((12937623513059231773 ? 33554431 : 1)) : ((min(var_7, ((max(8, -125))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_0] = (((min((arr_5 [i_2 + 3] [i_2] [i_2 + 1] [i_2]), (arr_5 [i_2 + 2] [i_2] [i_2 + 1] [i_2]))) >> (((arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2]) & 1))));
                    var_14 -= ((2320427278996280016 ? (1 <= 46) : (((arr_2 [i_1] [i_1] [i_2 + 3]) / (arr_4 [i_2] [i_1] [i_2 + 3])))));
                }
            }
        }
    }
    #pragma endscop
}
