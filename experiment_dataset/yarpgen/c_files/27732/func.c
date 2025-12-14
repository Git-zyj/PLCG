/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27732
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 5678676039624378252LL)) ? (((/* implicit */unsigned long long int) ((((6077743688861606757LL) >> (((((/* implicit */int) var_11)) - (168))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_5))) - (15882588651805699184ULL)))))) : (var_5)));
    var_15 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_11)) | ((~(((/* implicit */int) (unsigned char)152))))))));
                arr_4 [i_0] [i_1] = max((max((((((-6077743688861606771LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_11)) - (169))))), (max((((/* implicit */long long int) arr_1 [i_1])), (6077743688861606770LL))))), (((/* implicit */long long int) ((_Bool) max((var_11), (((/* implicit */unsigned char) (_Bool)1)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) arr_1 [i_3]);
                            arr_12 [i_3] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) -6077743688861606791LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_3 [i_3] [i_2] [i_0]))) * (((/* implicit */long long int) ((/* implicit */int) var_9))))) * (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
