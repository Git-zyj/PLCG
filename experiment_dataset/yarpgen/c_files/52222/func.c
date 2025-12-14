/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52222
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
    var_16 -= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (short)32751)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)17))))) : (min((((/* implicit */long long int) var_5)), (var_14))))));
    var_17 = ((/* implicit */unsigned int) var_1);
    var_18 = ((((/* implicit */_Bool) var_10)) ? (var_13) : (max((4258758724U), (((/* implicit */unsigned int) (short)32745)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), ((~((+(max((((/* implicit */unsigned int) (unsigned char)124)), (arr_3 [i_0] [i_0])))))))));
                    var_20 -= ((/* implicit */unsigned char) ((var_14) / (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    var_21 *= ((/* implicit */unsigned int) (short)-32747);
                    arr_10 [i_2] [i_2] [i_2] [(unsigned char)18] = ((/* implicit */int) ((((21LL) >> (((((/* implicit */int) (unsigned char)237)) - (175))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) 16LL)) ? (2122802673) : (((/* implicit */int) (unsigned char)24)))))))));
                }
            } 
        } 
    } 
}
