/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 17638471717008918606));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (((((((arr_1 [i_0]) <= (arr_2 [14] [i_0] [i_1]))) ? -2614977185547703853 : (!var_12)))) ? (!var_5) : ((10768802702145599099 ? 0 : (65535 > var_8))));
                arr_5 [3] = (min(((((min(var_3, (arr_1 [15])))) ? 17926780985635047886 : var_4)), 2614977185547703836));
                arr_6 [i_0] [5] = ((!(((((((arr_0 [i_0] [i_0]) ? -2147483638 : var_5))) ? (!var_5) : -7070605996489147619)))));
            }
        }
    }
    #pragma endscop
}
