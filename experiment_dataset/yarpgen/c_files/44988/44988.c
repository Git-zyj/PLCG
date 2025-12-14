/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_4));
    var_13 -= ((((((((min(var_8, 15394599636464795420))) || -2378)))) != var_4));
    var_14 = ((((((236932730 ? 0 : 236932730)) - 768038298))) ? (((239 != ((0 ? 1693 : 4467570830351532032))))) : ((var_1 * (~32708))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((((max(-4467570830351532040, 30865))) ? var_8 : (((arr_0 [i_0] [i_0]) + -24777)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((((-(min(64, var_3)))) / (((max((24324 <= var_11), ((!(arr_1 [i_2])))))))));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((!((((232 * var_2) - ((((arr_5 [i_0] [i_1] [i_2] [i_2]) > var_10))))))));
                    var_15 += ((~(((arr_1 [i_1]) + var_0))));
                    var_16 = 5;
                }
            }
        }
    }
    #pragma endscop
}
