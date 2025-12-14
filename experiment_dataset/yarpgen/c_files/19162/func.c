/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19162
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1539)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_1))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) max((var_1), ((short)-1540)))), (var_5))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0 - 2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (short)1539)), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_3 [i_0 - 2]))) : (arr_2 [i_0 + 1])))));
                arr_5 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) min((((long long int) ((((/* implicit */_Bool) 3143353583U)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_1 [i_0])))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) <= (((arr_0 [i_0] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) (unsigned char)63)), (var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4362978392508291435ULL)) ? (max((1151613712U), (((/* implicit */unsigned int) (signed char)54)))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)1), ((unsigned short)65535)))))))) : (((((/* implicit */_Bool) (+(var_3)))) ? (max((((/* implicit */unsigned long long int) var_13)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (unsigned short)1))))))))));
}
