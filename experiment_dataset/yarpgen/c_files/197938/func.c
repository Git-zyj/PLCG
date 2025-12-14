/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197938
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = arr_1 [2U] [i_1];
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_1]);
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (((unsigned int) arr_3 [i_3] [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) ((7125693841829464869ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))) ? (((/* implicit */int) ((3U) <= (var_4)))) : (var_18)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_18);
    var_23 = ((/* implicit */unsigned char) -300019296);
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_5)))) ? ((-(((/* implicit */int) var_14)))) : (min((((/* implicit */int) (unsigned char)64)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) var_8))))))));
    var_25 = ((/* implicit */unsigned long long int) (unsigned char)95);
}
