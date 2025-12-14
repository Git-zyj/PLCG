/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227281
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4]))) : (var_6))))))));
                                arr_10 [i_0 - 1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) (signed char)127);
                                arr_11 [i_0] [i_0] [i_1] [i_0 - 1] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_4] [i_0 + 1] [i_3 + 1] [i_0 + 1] [i_1])) ? ((+((-(((/* implicit */int) arr_7 [i_1 - 1] [i_1])))))) : (((((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_0] [i_1])), ((signed char)-104)))) | ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    var_14 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)0)), (var_7)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)3)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_1] [i_0])) : (((/* implicit */int) (unsigned char)255))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (143974450587500544LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_4);
    var_16 = ((/* implicit */int) max((var_16), (max((((/* implicit */int) (signed char)-1)), (var_5)))));
}
