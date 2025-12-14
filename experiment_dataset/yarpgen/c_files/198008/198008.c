/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_7 || ((max(-115, var_3))))) ? ((-((8458699299381676282 ? var_6 : var_14)))) : ((min(9290174780101599079, 100663296))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [9] = ((var_18 % (((arr_2 [i_0]) ? ((((arr_2 [4]) >> 0))) : (max(-1939646658615047318, (arr_1 [i_0])))))));
        arr_5 [i_0] &= (max((max(1, ((1186250141 ? var_11 : 9290174780101599079)))), (1 * -3197582132192820610)));
        var_21 = ((!((min((arr_1 [i_0]), var_15)))));
    }
    #pragma endscop
}
