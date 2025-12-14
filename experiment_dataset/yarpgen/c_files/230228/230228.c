/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((!(arr_1 [i_0]))));
        var_17 = (max((~65535), (arr_0 [i_0])));
        var_18 *= 112435386;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] &= (max((arr_5 [i_1]), ((((((6880474186811866137 >> (((arr_0 [i_1]) - 8626393023293925803))))) || var_11)))));
        var_19 = (min(var_19, 11566269886897685490));
        var_20 = (min(var_20, var_7));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_21 *= (((((1328932094 ? (arr_8 [i_2]) : var_7))) ? (((((arr_0 [i_2]) ? 6880474186811866127 : (arr_6 [i_2] [i_2]))) * (arr_8 [i_2]))) : (((231 - (-127 - 1))))));
        var_22 = (((((((((arr_0 [i_2]) ? (arr_10 [i_2]) : var_14))) && (((var_16 ? var_1 : 6209)))))) - (!6880474186811866145)));
        var_23 = ((((-(!var_10))) ^ ((((arr_9 [i_2]) || (~var_6))))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = -6209;
        arr_14 [i_3] = ((!(((arr_9 [i_3]) == (arr_5 [i_3])))));
        arr_15 [i_3] = max(((max((!60559), 0))), ((var_13 + (arr_6 [i_3] [i_3]))));
    }
    var_24 += (((~(max(var_7, var_5)))));
    var_25 = (max(var_25, 8));
    #pragma endscop
}
