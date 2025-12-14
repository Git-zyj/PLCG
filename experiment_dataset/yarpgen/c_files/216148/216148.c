/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((44 ? 24 : 1)) << ((((var_13 ? var_1 : var_7)) + 1575815041)))) + (((((!var_18) <= (var_19 ^ var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = 31;
                var_22 ^= var_19;
                var_23 ^= ((((!(((var_6 ? var_14 : var_16))))) || -234629486575629212));
                var_24 = (max(var_24, (((((-(((arr_3 [i_0]) ? -2750997937236206867 : 211)))) / 215)))));
                var_25 = ((((((((-234629486575629226 ? var_14 : 1))) ? ((((arr_0 [i_0]) ? -17841 : (arr_7 [i_0])))) : (((arr_0 [i_0]) ? var_15 : (arr_4 [1] [i_1])))))) || (((((arr_2 [i_0]) ? -234629486575629217 : 1)) <= (arr_3 [i_0])))));
            }
        }
    }
    #pragma endscop
}
