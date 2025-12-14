/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238240
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2] [i_1]))) & (arr_8 [i_1 + 2] [i_1] [i_1 + 1])))) ? (((long long int) (unsigned char)161)) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (short)-7996))) * ((~(((/* implicit */int) arr_2 [i_0])))))))));
                    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)7996)) ? (((/* implicit */int) var_2)) : (arr_7 [i_1] [i_1 + 1] [i_2] [i_2]))) % (((((/* implicit */_Bool) (short)8014)) ? (var_11) : (((/* implicit */int) (unsigned short)6834))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (arr_8 [i_1 + 2] [i_1 + 3] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-8014)))))) ? (((((/* implicit */_Bool) min((arr_5 [i_1] [i_1 - 1] [i_1]), (((/* implicit */unsigned short) (short)7975))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((0) < (((/* implicit */int) arr_3 [i_0] [i_0])))))) : (((unsigned long long int) (short)0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7975)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) : (((unsigned int) var_2)))))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */unsigned short) (signed char)34);
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(-550747948)))), ((+(((4294967283U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30310)))))))));
}
