/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31607
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
    var_13 = ((/* implicit */short) (~(min((((((/* implicit */_Bool) 3278956568U)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_8))))));
    var_14 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-32744)) : (((/* implicit */int) (unsigned char)236))))), (arr_3 [i_0])))));
                var_16 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) max((arr_3 [i_0]), (1854747885U)))))), (((/* implicit */long long int) min((var_6), (((/* implicit */short) ((arr_1 [i_1] [i_1]) >= (arr_1 [i_0] [i_0])))))))));
                var_17 = ((/* implicit */int) min((min((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) (unsigned short)7601)), (4093359607719931725LL))))), ((+(min((arr_2 [21ULL]), (((/* implicit */long long int) 4073446016U))))))));
                var_18 = ((/* implicit */_Bool) ((((arr_2 [i_1]) != (((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_2))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1]))))) : (arr_2 [i_1])));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((((((unsigned int) var_4)) / (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)131))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)155)))))));
    var_20 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)175))))) ? ((+(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)18)), ((unsigned short)43007))))));
}
