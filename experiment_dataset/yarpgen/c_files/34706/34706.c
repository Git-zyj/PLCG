/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(-13948, -4))) ? ((-((var_1 ? var_0 : 11616)))) : ((max((!-562949953421312), (~16383))))));
    var_12 = -11623;

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_13 = ((((max((32766 <= 9223372036854775807), (max((arr_1 [i_0]), (arr_0 [i_0] [8])))))) ? ((11622 ? -11622 : ((-11620 ? (arr_1 [i_0]) : -1670040518)))) : ((((var_4 ? -562949953421312 : 1))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_14 = (((((-(arr_4 [i_0 - 4] [i_0 - 4])))) - (max((max(620344796, -7843437017544113332)), ((max((arr_5 [i_1]), 24818)))))));
            arr_6 [i_1] [i_1] [i_1] = (((-1570960872860907599 ? 124 : 1922942490428372922)));
        }
    }
    #pragma endscop
}
