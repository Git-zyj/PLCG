/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20247
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)41218))))))) ? ((~(arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) -1LL);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_15 [i_1] = var_15;
                    var_18 = ((/* implicit */unsigned char) var_11);
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (1LL)));
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 875079705U)) : (var_11))) : (((/* implicit */unsigned long long int) arr_7 [i_1])))))));
    }
    var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | ((~((~(var_13))))));
}
