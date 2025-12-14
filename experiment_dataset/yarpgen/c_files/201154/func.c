/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201154
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)7)), ((+(arr_5 [i_0] [i_1])))));
                    arr_8 [i_0] = (signed char)114;
                    var_20 = ((/* implicit */short) max((((/* implicit */long long int) (-2147483647 - 1))), ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) -1117977073))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_0] = ((/* implicit */signed char) min((max((max((0ULL), (0ULL))), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_2] [i_3] [i_4])))), (((/* implicit */unsigned long long int) var_9))));
                                var_21 = ((/* implicit */short) ((signed char) max((((((/* implicit */_Bool) var_15)) ? (arr_13 [i_4] [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) ((unsigned int) 5ULL))))));
                                arr_15 [i_0] = ((/* implicit */short) min((max((((((/* implicit */_Bool) (short)-28450)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)172)))), (((/* implicit */int) (short)10898)))), (((/* implicit */int) (unsigned char)222))));
                                arr_16 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(3896806543U))) % (((/* implicit */unsigned int) (+(((/* implicit */int) var_16)))))))) && (((/* implicit */_Bool) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((unsigned long long int) 514036654U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((var_11), (((/* implicit */unsigned long long int) var_6))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : ((~(var_15)))))));
    var_23 = ((/* implicit */unsigned short) (+(var_9)));
    var_24 = ((/* implicit */int) var_9);
}
