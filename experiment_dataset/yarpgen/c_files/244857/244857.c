/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((241 ? 8735064780528326533 : 3959)))) ? (((var_4 ? var_3 : var_5))) : (min(var_2, (var_8 * 1)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (var_14 - 16579140536323371708);
        arr_3 [i_0] = (max((57 && 250), 736185013));
        var_17 += ((-6878532159815078094 * (((min(127, (arr_1 [8])))))));
    }
    var_18 |= var_15;
    var_19 ^= var_4;
    var_20 ^= var_5;
    #pragma endscop
}
