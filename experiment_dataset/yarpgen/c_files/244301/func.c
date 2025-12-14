/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244301
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */short) max((((/* implicit */int) ((arr_5 [i_1] [i_1] [(unsigned short)4]) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)29182)) : (((/* implicit */int) (unsigned short)36353)))))))), (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                    arr_8 [i_2] [i_1 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) max(((unsigned short)36354), (arr_4 [i_1])))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_1 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)36354))))))) % ((-(arr_1 [i_1 + 2])))));
                }
            } 
        } 
    } 
    var_11 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2126198296)) ? (var_4) : (((-204182522) | (((/* implicit */int) var_2))))));
    var_12 = ((/* implicit */short) var_0);
}
