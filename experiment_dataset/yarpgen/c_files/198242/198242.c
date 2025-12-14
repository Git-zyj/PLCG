/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 15097120331555495071;
    var_19 = (((((26 & ((1 ? 1 : var_2))))) ? (((3349623742154056521 ? 3847094047778620569 : 15097120331555495071))) : 1829026405));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = ((-1829026405 ? ((1 ? var_12 : (((140 ? 408660757832190927 : 120))))) : ((32678 ? 3349623742154056541 : ((2318405451 ? 3095285365118293134 : 18446744073709551615))))));
                    arr_10 [i_0] [i_1] [i_0] [i_2] |= (max(-1829026397, 3349623742154056523));
                    arr_11 [i_0 + 2] [i_1] [i_1] [i_1] = (max(2325792987, (3349623742154056541 && 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] = 1;
                                var_21 = 3349623742154056536;
                                arr_20 [i_0 + 1] [i_1] [i_1] [i_1] [i_4] = ((3349623742154056530 ? 63 : 0));
                                var_22 -= ((1 ? 1 : 6936577357868507346));
                                var_23 = (max(var_23, (((27149 ? ((15097120331555495097 & (((1 ? 10732 : 3439348840))))) : 56776)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
