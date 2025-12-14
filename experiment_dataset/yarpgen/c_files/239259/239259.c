/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] = ((~(~299190413)));
            var_17 = (-9223372036854775794 & 3995776870);
        }
        var_18 *= ((((max(((min(852999558, (arr_3 [i_0])))), (((arr_4 [i_0]) / 299190431))))) ? (min(2728803124, 1030792151040)) : (arr_0 [1])));
        var_19 = ((min((max(3974516677021343745, (arr_3 [i_0])), (arr_4 [i_0])))));
    }
    var_20 = var_14;
    var_21 = (max(var_21, (((6356235913048701163 <= (var_3 + var_6))))));
    #pragma endscop
}
