/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192189
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) var_9);
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1394972141)) ? (((/* implicit */unsigned long long int) -1394972136)) : (18446744073709551615ULL)))) ? (max(((~(arr_4 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [(short)10]))))))) : (max((arr_5 [i_1]), (arr_5 [i_0]))))))));
                arr_7 [i_0] = (!((!(((/* implicit */_Bool) -1394972127)))));
                arr_8 [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned short)9])) ? (((/* implicit */unsigned int) 1394972141)) : (1286041191U)))) ? (((/* implicit */long long int) (~(-1394972127)))) : (arr_5 [i_1])))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_13)))), (((arr_6 [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 4; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-30983)) + (2147483647))) >> (((-1394972127) + (1394972130)))));
                            arr_13 [1ULL] [1ULL] [i_2 + 1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), ((unsigned short)25527)))) ? (max((18446744073709551612ULL), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (_Bool)0))))))) * (((/* implicit */unsigned long long int) max((arr_4 [i_1] [i_1] [i_3]), (((/* implicit */long long int) ((unsigned char) var_13))))))));
                            arr_14 [(short)14] [(short)14] [i_2] [i_2 - 1] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) arr_5 [(unsigned char)10])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)15))));
}
