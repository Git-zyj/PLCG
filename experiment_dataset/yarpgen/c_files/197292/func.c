/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197292
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */long long int) ((unsigned short) var_8));
    var_11 = ((/* implicit */unsigned char) ((short) var_8));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_12 = arr_2 [i_0];
        var_13 = ((/* implicit */unsigned int) ((unsigned short) (~(-2143821725))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        arr_7 [3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_5 [i_1 - 1])))) ? (((((/* implicit */_Bool) var_2)) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 - 1]))) : ((+(6886876196907533594ULL)))));
        var_14 = min((((/* implicit */int) (unsigned char)236)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) -1920239744)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1])))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                {
                    var_15 ^= ((long long int) 2143821711);
                    var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_1 - 1])) ? (var_1) : (var_1))), (((/* implicit */long long int) var_8))));
                }
            } 
        } 
    }
}
