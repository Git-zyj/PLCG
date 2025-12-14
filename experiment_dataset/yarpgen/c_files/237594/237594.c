/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = (!5093);
                    arr_9 [i_0] [i_1] [i_2] = (((arr_4 [i_1 - 3] [i_2] [i_2 - 1]) >= (arr_7 [i_1 - 3] [12])));
                    var_13 -= (arr_7 [i_1 - 2] [i_1]);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_14 = (((((8326745496440208295 == ((((!(arr_1 [17] [i_3])))))))) * ((min((min(var_4, var_5)), (!var_1))))));
                    arr_12 [i_3] [i_1 - 1] [i_3] = (((~32767) ? (((arr_10 [12] [i_1] [i_3] [i_3]) ^ ((0 ? 10119998577269343323 : var_2)))) : ((((min(0, -955123486))) ? ((0 ? var_1 : 11214794347738394216)) : (var_9 ^ var_3)))));
                    var_15 = (min((((!(arr_1 [i_1 - 2] [i_1 + 1])))), (max((var_9 & var_8), (0 && -2147483645)))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    arr_17 [i_0] [i_0] [i_1] [14] = -7231949725971157400;
                    var_16 = ((((var_2 % (arr_14 [i_0] [i_1] [14] [14]))) >> 1));
                    var_17 = ((7231949725971157391 ? 255 : 2998));
                }
                arr_18 [i_0] [5] [i_1 - 1] = ((((min((arr_6 [i_1 - 3] [i_1] [i_1] [i_1 + 1]), (arr_0 [i_1 - 2])))) > ((min(var_6, (arr_6 [i_1 - 3] [i_1 - 3] [i_1 - 1] [i_1 - 1]))))));
            }
        }
    }
    var_18 = ((((((var_10 && var_3) ? var_7 : var_9))) || ((!(!var_5)))));
    #pragma endscop
}
