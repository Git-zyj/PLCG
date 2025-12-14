/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((+(((-588916357 + 2147483647) << (1 - 1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_14 = arr_0 [i_0] [14];
                    arr_8 [i_0 - 2] [i_0 - 1] = ((((((arr_0 [i_2] [i_2]) | var_11))) ? (15184543931156111518 >= 7696) : (((-7697 + 2147483647) << (arr_6 [i_0] [14])))));
                    arr_9 [i_1] [i_1] [i_0 + 1] = (((!var_7) ? var_8 : (~var_2)));
                    var_15 = (max(var_15, ((((((15184543931156111524 ? var_11 : (arr_5 [i_0])))) ? ((((255 == (arr_4 [i_0] [i_1 - 2]))))) : (arr_2 [i_1 + 1] [13] [i_1 + 1]))))));
                }
                var_16 = ((15184543931156111518 >> (((((arr_5 [i_0 - 1]) >> (-7696 + 7727))) - 5951720073))));
                arr_10 [i_0] [i_0] = arr_6 [i_0 + 1] [i_0 + 1];
                var_17 *= ((~(arr_6 [i_1 - 2] [i_0 - 2])));
            }
        }
    }
    #pragma endscop
}
