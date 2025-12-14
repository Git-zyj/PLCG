/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190264
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
    var_16 -= ((/* implicit */short) (+((-(((/* implicit */int) (unsigned short)65397))))));
    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)7)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */short) var_1)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))) : (var_9)))))) : (((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16089)) | (((/* implicit */int) (signed char)7)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6166))) == (max((var_7), (((/* implicit */unsigned int) arr_1 [i_1 + 1] [i_1 - 1]))))));
                    var_18 = ((/* implicit */long long int) var_1);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 3; i_3 < 22; i_3 += 2) 
    {
        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            for (long long int i_5 = 4; i_5 < 20; i_5 += 3) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) 4194303U)) ? ((+(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)223)))));
                    var_20 = ((/* implicit */unsigned short) 4294967295U);
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_8 [i_3 + 1]))));
                }
            } 
        } 
    } 
}
