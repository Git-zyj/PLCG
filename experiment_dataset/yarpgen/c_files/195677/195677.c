/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = min(((((!(arr_2 [i_0]))) ? (((((arr_1 [i_0]) + 9223372036854775807)) << (7 - 6))) : (~127))), (((arr_1 [i_0]) + (((511 >> (21399 - 21377)))))));
        arr_3 [i_0] = ((((((arr_0 [i_0]) / (516467274142531675 % -7)))) ? 1 : ((-(min(102, (arr_1 [i_0])))))));
        var_16 = (((((max(249, 8306859715972360641)))) ? (((!2865560835) >> (!255))) : 255));
        arr_4 [i_0] = 17430;
    }
    var_17 = ((-(((((min(104, 1))) <= (52754 >= var_3))))));
    #pragma endscop
}
