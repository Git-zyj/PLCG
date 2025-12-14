/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225928
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
    var_19 = ((/* implicit */int) max((((/* implicit */long long int) (short)(-32767 - 1))), ((~(var_8)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = max(((short)-22), (((/* implicit */short) ((((/* implicit */int) (unsigned char)202)) <= ((~(((/* implicit */int) (unsigned char)255))))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)27980)) ? (arr_0 [i_0]) : (arr_0 [i_1])))) | (((var_2) | (((/* implicit */long long int) var_4))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) 4294967295U);
    var_23 += ((/* implicit */unsigned int) (+(var_3)));
}
