/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((max(22, -7753053592061874872)) << ((((var_18 << (127 - 76))) - 1963569437533536217)))), ((((213 | var_12) <= (var_9 || 2516990927))))));
    var_21 *= min((max((min(32070, 9223372036854775807)), (max(-499755644877521646, -48)))), ((((15755919623251582192 << 19) > (0 & 2516990944)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [7] [7] |= (((min(((max((arr_0 [i_0]), (arr_0 [i_0])))), (var_12 / -40))) ^ ((((-6323889617455007420 - 156) && ((((arr_0 [15]) * var_14))))))));
        var_22 &= ((((max(((((arr_1 [i_0]) ^ (arr_0 [i_0])))), (min(7, (arr_1 [i_0])))))) || (((((((arr_1 [i_0]) + 2147483647)) << (((var_2 + 3166787215162340953) - 13)))) > (((-127 - 1) | (arr_0 [1])))))));
    }
    var_23 = (((((min(var_0, var_4)) << ((((var_6 << (var_5 + 138))) - 15666824909124796365)))) ^ ((min((max(109, var_11)), (var_9 | var_7))))));
    #pragma endscop
}
