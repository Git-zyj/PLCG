/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241473
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
    var_11 |= ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)54371)) - ((((((-(((/* implicit */int) (unsigned char)247)))) + (2147483647))) << (((((-2384587845812940811LL) + (2384587845812940812LL))) - (1LL)))))));
                    var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_8)))) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)20385))) < (((((/* implicit */int) (signed char)115)) - (((/* implicit */int) var_2))))))))));
                    var_14 = ((/* implicit */_Bool) var_0);
                    var_15 = ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) (signed char)110))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 2])), (var_8))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (((arr_1 [i_1 - 2] [i_2 - 1]) + (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                    var_16 -= ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 1] [i_2] [i_2 + 1]))) % (((((/* implicit */_Bool) (short)27869)) ? (758524831839676578ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) > (((/* implicit */unsigned long long int) var_9)));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((-(2147483647))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (864449513200561142ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89)))))) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)64)) && (((/* implicit */_Bool) (short)29141)))))))));
    var_18 = ((/* implicit */unsigned int) var_3);
    var_19 = (unsigned short)25448;
}
