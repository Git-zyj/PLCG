/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220025
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_2 + 2])) ? (arr_7 [i_0 - 1] [i_2 + 2]) : (arr_7 [i_0 - 1] [i_2 + 1])))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_2 + 1])) ? (((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_2 + 1])) : (var_8)))))))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */signed char) var_4);
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_0] [i_0 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) -1061386386)) : (9223372036854775807LL)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 3; i_5 < 13; i_5 += 4) 
    {
        for (signed char i_6 = 2; i_6 < 11; i_6 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) arr_4 [i_6] [i_6])) || (((/* implicit */_Bool) var_14)))), ((!(((/* implicit */_Bool) arr_7 [i_5 - 1] [i_5])))))) || (((/* implicit */_Bool) ((signed char) arr_19 [i_5 - 2])))));
                arr_23 [i_6] [i_6 - 1] [i_5 + 1] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned int) var_10))))) ? (arr_7 [i_5] [i_6 + 2]) : ((-(var_2))))));
                arr_24 [i_5 + 1] [i_5 - 2] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) 2147483647))))) || (((((/* implicit */_Bool) arr_14 [i_5 + 1] [i_5 - 3] [i_6 + 3] [i_6] [i_6 - 1])) && (((/* implicit */_Bool) arr_3 [i_6] [i_6]))))));
            }
        } 
    } 
}
