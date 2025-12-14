/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_15 = (!56362);
        var_16 = ((~(((max(2849725497, 2147483625)) >> 1))));
        var_17 &= -32756;
        var_18 = (((247 || 17923954186391630887) ? (2849725522 == 1644) : ((var_2 ? ((2849725517 ? 1445241802 : var_12)) : ((min(var_9, 49622)))))));
        var_19 = (min(var_19, 2849725521));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 24;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_20 &= 570499300;
                                var_21 = (max(((((max(-6291557128853102999, 245))) ? var_2 : (((-2638409747060103058 ? 186 : 1379221833))))), -7));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_22 = ((783651709 && (arr_15 [i_1] [i_1 + 1] [i_1] [i_1])));
                                var_23 = (((((((-(arr_5 [i_2]))) << (((min(var_4, 49604)) - 49593))))) ? (var_4 < var_10) : -12008885376160918434));
                                var_24 -= (((((1 >> (163 - 150)))) ? (((((max(4294967292, 15893))) ? (~51774) : 246))) : (max((arr_6 [i_1] [i_1 - 2] [9]), ((1445241775 ? 2849725495 : 4294967294))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
