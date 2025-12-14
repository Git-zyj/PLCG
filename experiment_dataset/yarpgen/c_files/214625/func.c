/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214625
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) var_9);
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4 - 3] [i_4 + 1] = ((/* implicit */short) min(((((~(var_12))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_14)))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) var_9)))))));
                                var_19 ^= ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                    arr_14 [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) var_15))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((min((var_10), (((/* implicit */int) var_0)))) / (((((/* implicit */int) var_8)) | (((/* implicit */int) var_6)))))), ((-(((/* implicit */int) var_13))))));
    var_21 -= max((((((var_5) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) / (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_16)))))));
}
