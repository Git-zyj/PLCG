/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201060
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_5), (4503324749463552LL))), ((~(var_10)))))) ? ((-(((var_6) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20256))) : (var_4)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_1] [i_0] [i_0]);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0] [8LL]))))) ? (min((min((var_4), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))), (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_6))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (3223186289U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))))));
                arr_7 [i_0] [i_1] [i_0] = 3223186289U;
                var_19 = arr_3 [i_0] [i_1] [i_0];
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) 694374989131810518LL)) ? (((/* implicit */unsigned long long int) var_9)) : (1878809461571287594ULL))), (((/* implicit */unsigned long long int) var_5))))));
}
