/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191318
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
    var_12 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_9)), (var_11)));
    var_13 = ((/* implicit */int) ((var_6) >> (((((((/* implicit */_Bool) min((var_6), (1792792338U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */unsigned long long int) var_11)), (13933251651727310731ULL))))) - (45478ULL)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_14 -= ((((/* implicit */_Bool) 2502174939U)) ? (((/* implicit */unsigned long long int) ((((_Bool) 2502174939U)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : ((-(((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_0] [i_0]))), (13933251651727310731ULL))));
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_10)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_16 += ((/* implicit */signed char) ((unsigned int) 2502174983U));
            var_17 -= ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1])) * (((/* implicit */int) (unsigned short)63))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) (unsigned char)93)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13933251651727310731ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1])))));
            arr_14 [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_3 - 1] [i_3]))) : (1792792331U)));
            arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)93))));
            arr_16 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
            arr_17 [i_3] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_3 - 1] [i_3] [i_3]))));
        }
        for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            arr_20 [i_1] [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned short) arr_4 [i_1]));
            var_18 = ((/* implicit */long long int) ((unsigned int) (unsigned short)3606));
            arr_21 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_11 [i_1])) >= (4294967295U)));
        }
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            var_20 += ((/* implicit */unsigned char) (!(((var_2) || (((/* implicit */_Bool) var_9))))));
            arr_24 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_1] [i_1]))) : (2534226326217960602ULL)));
        }
        var_21 = ((/* implicit */_Bool) max((var_21), (arr_7 [i_1] [i_1])));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)112)) ? (((/* implicit */unsigned long long int) 0U)) : (((((/* implicit */_Bool) 4513492421982240890ULL)) ? (4513492421982240885ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1])))))));
        arr_25 [13LL] = ((/* implicit */signed char) (_Bool)1);
    }
}
