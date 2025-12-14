/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((min(((var_8 <= (((255 ? var_1 : -24185))))), 10419)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((((arr_1 [i_1 + 2]) >= var_6)) ? (max((arr_3 [i_1 + 3]), ((65535 >> (24181 - 24166))))) : ((-10423 | (arr_2 [i_1]))))))));
                var_17 = var_4;
            }
        }
    }
    var_18 ^= (((((((min(var_14, var_7))) ? var_4 : var_12))) || var_2));

    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_19 &= (min((arr_9 [i_2] [i_3]), (max(9223372036854775802, (min(var_14, var_1))))));
            var_20 -= ((((var_8 <= (((arr_7 [4]) ? var_2 : var_12))))) | (((~65535) ? (arr_8 [i_3]) : 48630)));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_21 = (((((~(arr_11 [i_4] [i_4])))) ? (((arr_9 [i_2] [i_4]) ? (arr_6 [i_2]) : (arr_11 [i_2] [i_4]))) : ((12888778605724879419 | (arr_6 [i_2])))));
            var_22 -= 24190;
        }
        var_23 = (min(var_23, var_14));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_24 = var_14;
        arr_16 [i_5] [i_5] = ((((((arr_14 [i_5]) ? (((max((arr_14 [i_5]), (arr_13 [i_5]))))) : (min(var_4, var_10))))) ? -10415 : (min((min(var_7, var_8)), (arr_14 [i_5])))));
        arr_17 [i_5] = ((!var_4) ^ (var_11 && 8631));
    }
    #pragma endscop
}
