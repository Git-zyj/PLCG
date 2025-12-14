/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225193
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_11 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_2] [i_1 + 1])), (1117435300U)))) ? (max(((-(var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2655242485785370344ULL)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned short)65025))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((var_8), (((/* implicit */unsigned short) var_0))))))) & (((((/* implicit */_Bool) 131072)) ? (((/* implicit */unsigned int) (~(131072)))) : (0U)))));
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */_Bool) (unsigned char)118)) ? (7412203934314791556ULL) : (0ULL))) : (((((/* implicit */_Bool) var_9)) ? (15791501587924181271ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((((((/* implicit */_Bool) (signed char)14)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_13 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (short)-10659)), (((((/* implicit */_Bool) (unsigned char)255)) ? (max((var_2), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3177531995U)) ? (((/* implicit */int) (short)-10659)) : (((/* implicit */int) (short)21304))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_0))))) ? (((unsigned long long int) 2086028897)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57065))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((9019642259456074972LL) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))))))))))));
    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((2086028897), (((/* implicit */int) (unsigned short)28655))))), (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_4)))))));
}
