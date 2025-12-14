/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197347
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (((((/* implicit */long long int) (-(((/* implicit */int) (short)-21302))))) / (((((/* implicit */_Bool) (short)-9301)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_16))) >> (((((18446744073709551606ULL) - (((/* implicit */unsigned long long int) -1LL)))) - (18446744073709551554ULL))))) << (((max((((/* implicit */unsigned long long int) -2882457302673205970LL)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (arr_2 [13LL] [i_0] [i_0]))))) - (15564286771036345583ULL))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((-(var_1))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -11LL)) ? (24LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                arr_7 [i_0] [i_0] = -2882457302673205968LL;
                var_18 = ((/* implicit */_Bool) ((var_0) ? (((long long int) max((arr_2 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) -1LL))))) : (min((((((/* implicit */_Bool) var_14)) ? (-2882457302673205970LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (-1LL)))));
                var_19 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_12))))))) <= (((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) (short)-29327)) ? (7LL) : (-23LL))) - (7LL)))))))) : (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_12))))))) <= (((((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) (short)-29327)) ? (7LL) : (-23LL))) - (7LL))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((min((var_11), (((_Bool) var_7)))) ? ((+(min((-7185754026175924171LL), (((/* implicit */long long int) var_13)))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    var_21 = ((/* implicit */_Bool) var_7);
}
