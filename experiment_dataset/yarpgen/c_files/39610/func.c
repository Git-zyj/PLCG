/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39610
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((-1611377357779171084LL) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (min((min((var_2), (((/* implicit */unsigned long long int) (short)2590)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)-2586)) & (((/* implicit */int) (unsigned char)227)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_12 = min((min((((/* implicit */long long int) (~(((/* implicit */int) (short)-6057))))), (((((/* implicit */_Bool) (unsigned char)226)) ? (var_0) : (arr_1 [i_0]))))), (min((((((/* implicit */_Bool) (unsigned char)29)) ? (arr_1 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (unsigned char)29)))));
        var_13 += ((/* implicit */short) ((unsigned short) var_1));
        var_14 = ((/* implicit */unsigned int) min((arr_2 [i_0] [(unsigned short)13]), (max((var_3), (((/* implicit */int) arr_0 [i_0] [i_0 - 2]))))));
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned int) var_4);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            arr_7 [4LL] [i_2 - 2] [15ULL] = ((/* implicit */unsigned int) (short)-6038);
            var_16 = ((/* implicit */long long int) var_10);
        }
        var_17 = ((/* implicit */unsigned long long int) var_1);
        var_18 += ((/* implicit */signed char) (+(((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (arr_1 [i_1])))))));
        arr_8 [i_1 + 2] = ((/* implicit */short) min(((-(((/* implicit */int) (short)-2586)))), (((/* implicit */int) (short)2585))));
    }
    var_19 += ((/* implicit */unsigned int) var_5);
}
