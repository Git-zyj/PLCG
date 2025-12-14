/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4294
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) << (((806056796) - (806056778)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) (signed char)127)) ? (8389357039644846815ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((806056796) | (((/* implicit */int) var_3)))) << (((((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) - (7020159376396467486ULL))))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_0 [8ULL]))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) ((short) arr_1 [i_0])))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((short) arr_1 [i_0]))), (((unsigned short) (signed char)-122))))) : ((+(arr_1 [i_0])))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) var_0);
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)-20902)), (6790949721834227911ULL)));
        var_22 ^= ((/* implicit */int) 5749906007016157683LL);
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) arr_3 [i_1 + 1]))))) ? (((((/* implicit */int) (unsigned short)27654)) | (((/* implicit */int) (_Bool)1)))) : (2007755647)))), (max((((/* implicit */unsigned long long int) arr_4 [i_1])), (var_8))))))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 13; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            {
                arr_12 [(short)6] [i_2 - 2] [i_2] = ((/* implicit */int) max((max((((1474883316U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65517))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24576)) >> (((((/* implicit */int) (short)-17277)) + (17283))))))));
                var_24 = ((/* implicit */int) ((arr_8 [i_2] [i_3] [i_3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-107)) + (2147483647))) << (((((((/* implicit */int) var_16)) + (14))) - (1))))))))))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_9), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) arr_4 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (3526960213631523976LL))))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) != (var_2)))), ((+(((/* implicit */int) var_5))))))) : (var_7)));
}
