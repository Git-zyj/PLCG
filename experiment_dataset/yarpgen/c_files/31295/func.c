/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31295
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
    var_19 = ((unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) ((long long int) ((var_16) % (((/* implicit */long long int) arr_3 [i_0 - 2])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) (~(((arr_10 [i_0] [i_3 - 2] [i_2] [i_3]) & (arr_10 [i_0] [i_3 - 3] [i_0] [(unsigned char)2])))));
                            arr_11 [i_3] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) * (((((/* implicit */_Bool) (unsigned short)62443)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                            arr_12 [(unsigned short)6] [i_1] [i_2] [i_3 - 2] = ((/* implicit */unsigned int) ((min(((!(((/* implicit */_Bool) (unsigned char)16)))), ((!(((/* implicit */_Bool) (unsigned short)41255)))))) ? (((arr_10 [i_0 + 2] [(unsigned char)13] [i_0 + 1] [i_0]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_4 [i_0])) : (var_18)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_2])))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
