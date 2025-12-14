/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -1386113217;
    var_12 = 122;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = (min(var_13, (((~(arr_4 [i_1]))))));
            var_14 = (((122 ? 4585568952488366606 : 945216823)));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_15 = 38212291;
                var_16 -= (var_9 - 122);
            }
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_17 = (max(var_17, 94));
            var_18 ^= var_4;
            var_19 = ((((127 | (min(134, (arr_1 [i_0])))))) < (arr_8 [i_3] [i_0] [i_0]));
        }
        var_20 ^= (min(-139, ((min(var_0, (min((arr_9 [i_0] [1] [0]), var_9)))))));
        var_21 = (min(var_21, (min((((min((arr_4 [6]), 21809)))), ((-2764884332161521591 - (var_7 / 227)))))));
    }
    var_22 = (((((-(~7556710462364692630)))) ? 1244260673 : (max((min(4065126331, 1353840386)), var_8))));
    #pragma endscop
}
