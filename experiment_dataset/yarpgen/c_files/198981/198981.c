/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 0));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_0 [i_0]) % (arr_0 [i_0])))) ? (arr_2 [i_0] [i_0]) : (284204018 * 1639859243)));
        var_20 += (max(((var_15 >> (min(0, 3763399497)))), ((((((!(arr_2 [17] [17])))) >= (((arr_2 [11] [11]) - (arr_0 [i_0]))))))));
    }
    var_21 = ((var_17 != ((min((max(var_15, 11)), 0)))));
    var_22 = (max(var_22, 8));
    #pragma endscop
}
