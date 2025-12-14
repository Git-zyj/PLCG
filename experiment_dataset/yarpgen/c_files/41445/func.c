/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41445
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
    var_16 = ((signed char) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_9)))) ? (var_8) : (((/* implicit */int) (short)-10218))));
    var_17 = (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)138)), ((short)-20432)))) ? (((int) (+(((/* implicit */int) arr_8 [i_2] [i_3]))))) : (((/* implicit */int) (unsigned short)65529))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (4294967295U) : (2505963198U)));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)25674)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (9007199254740736LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0])))))) : (arr_9 [i_0] [i_0] [i_0] [10U])));
            }
        } 
    } 
}
