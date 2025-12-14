/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38003
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned short) var_11);
                                var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                                var_20 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 1572253302U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-5984))) : (9223372036854775807LL))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) min((((((/* implicit */_Bool) ((long long int) arr_14 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_0 [(short)10]) : (((/* implicit */unsigned int) var_1)))))), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_2] [i_0]))));
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */signed char) var_5);
}
