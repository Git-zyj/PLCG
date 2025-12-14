/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235103
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = (((!(((((/* implicit */int) arr_2 [i_0] [i_0])) == (((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (((((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) var_14))))) : (min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (var_10))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) / (var_2))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_13)) | ((((_Bool)1) ? (var_18) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            {
                var_22 = (-((~(((var_0) ? (((/* implicit */unsigned long long int) var_13)) : (var_1))))));
                var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) var_4)), (((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1)))))) * (max((((/* implicit */unsigned int) var_8)), (var_13)))))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((3500061577U) != (3500061580U))))));
                arr_8 [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((arr_5 [i_1]) >> (((/* implicit */int) ((_Bool) var_3)))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (124702069U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_2])))))) : (var_9)))));
            }
        } 
    } 
}
