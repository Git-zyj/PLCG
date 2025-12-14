/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((((max(186, var_0))) ? (14395816083445393628 < var_13) : ((var_7 ? var_4 : 26810))))), ((~((23365 ? var_12 : 2097151))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 += (((((6 ? ((max((arr_2 [i_0] [i_0 - 1]), (arr_0 [i_0] [i_0])))) : 82))) || 711));
        var_16 = ((191 ? (((((2771186443 ? 18327 : 46))) ? 4611686018427387903 : 2147483647)) : (((~(arr_1 [i_0 - 1]))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_17 &= (58276 + 6760696943294519365);
        var_18 = 28284;
    }
    var_19 = var_6;
    var_20 = (((((((min(var_3, var_5))) ? -4095 : (1 / 14559921034056359088)))) || (((((min(var_1, var_9))) ? (!-2097152) : ((2127326435461254271 ? 15447 : 1)))))));
    var_21 = ((((((((var_0 ? -99 : 47217))) ? var_2 : ((1 ? var_4 : 1))))) ? ((~((var_3 ? var_8 : 2147483644)))) : ((-var_9 ? 0 : (((var_11 ? 248 : var_5)))))));
    #pragma endscop
}
