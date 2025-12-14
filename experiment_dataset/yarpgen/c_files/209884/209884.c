/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((~51), (((((169 ? var_0 : var_5))) ? -1977139680118147495 : (max(6929747627031402306, var_6))))));
    var_14 = ((10029 ? (!10011) : (max(((var_11 ? 29810 : -1188831482)), var_12))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((79 != -10029) != ((~(arr_0 [i_0])))));
        arr_4 [i_0] [i_0] = ((~(((((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : 89))) || (arr_0 [i_0]))))));
        arr_5 [i_0] = ((((((~(arr_0 [i_0])))) | var_0)));
    }
    var_15 = (((29806 <= 59545) == 203));
    var_16 &= ((-(((!var_8) - (var_5 - 180)))));
    #pragma endscop
}
