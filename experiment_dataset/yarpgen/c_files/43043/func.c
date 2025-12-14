/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43043
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
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) (unsigned short)0);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */int) ((unsigned char) max((var_8), ((unsigned short)65532))));
                                var_16 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */int) (unsigned char)24)) >> (((((/* implicit */int) (unsigned char)200)) - (197))))) > (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (arr_13 [i_0 + 1] [i_1] [i_0 + 1] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_0 [i_0 + 1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))) : ((+(min((((/* implicit */unsigned int) (unsigned short)0)), (4294967295U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 3; i_7 < 18; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 2) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? (arr_1 [i_0] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)0)))))));
                                var_20 = ((/* implicit */short) min((max((arr_23 [i_0] [i_1] [i_2] [i_7] [i_0] [i_8 + 1]), (arr_23 [i_0] [i_1] [i_1] [i_2] [i_1] [i_8 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)37)) ? ((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0 - 2])))) : (((/* implicit */int) ((short) 473281959U))))))));
                                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_6 [i_7 + 2] [i_7 + 2] [i_2] [i_0 - 1]))) ? (((/* implicit */int) arr_6 [i_7 - 1] [i_7 - 1] [i_2] [i_0 - 2])) : (((/* implicit */int) arr_6 [i_7 + 4] [i_1] [(short)7] [i_0 - 2]))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (arr_23 [i_0] [i_0] [i_8 + 1] [i_8] [i_8 + 1] [i_0])));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) 2039131219))));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */unsigned char) ((short) (unsigned char)232));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)236)) ? (var_2) : (((/* implicit */int) (_Bool)0))));
}
