/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 ^= ((32481 != ((33081 ? ((min(var_0, var_5))) : -62))));
                    var_11 = (min(var_11, ((((2046 ? 1206144073460706441 : 33062))))));
                    var_12 = (((((2 ? var_9 : (arr_2 [i_0 + 1])))) ? (min(33085, var_6)) : 37115));
                }
            }
        }
    }
    var_13 = ((((((((33062 ? 64512 : 32474))) ? 37130 : var_3))) ? (max(((21457 ? 21377 : var_3)), ((min(3355713737, var_7))))) : ((((~60) ? var_1 : ((var_7 ? 1035 : 32485)))))));
    var_14 = var_0;
    #pragma endscop
}
