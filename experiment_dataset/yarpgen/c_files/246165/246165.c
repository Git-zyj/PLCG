/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((2229153534399360190 && -1327908953) ? (56 && -42) : (~var_1)))) || (--121)));
    var_12 = -67;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = (max((((min(-2147483638, var_9)))), (min((min(15019, 97554020310491893)), var_10))));
                            var_14 |= ((((max(20984, ((1775151397 ? 15211 : 1574027209))))) ^ (min(-914842004, 21))));
                        }
                    }
                }
                var_15 = ((((16006447760435922231 | -40) || 106)));
                var_16 = 116;
                arr_8 [i_0] &= (max(((-(var_7 * var_0))), ((max((((!(arr_3 [i_1] [i_1] [17])))), (arr_6 [17] [17] [17]))))));
            }
        }
    }
    #pragma endscop
}
