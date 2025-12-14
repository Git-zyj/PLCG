/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203504
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
    var_15 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */_Bool) -76490258)) ? (263344800U) : (263344808U));
                var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) >> (((-2924268612227527314LL) + (2924268612227527335LL)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_4))))), (arr_2 [i_1]))) : (arr_2 [i_0])));
                var_18 += ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4031622488U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)37524))))) <= (((((/* implicit */_Bool) 2452520580U)) ? (263344797U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ? (min((var_7), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned char)4)) : (arr_4 [i_0] [i_0])))));
                var_19 &= ((/* implicit */long long int) ((((((/* implicit */int) var_2)) >= (var_6))) ? (min((arr_6 [i_1]), (263344825U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_12)), (var_13)))))));
                var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) 263344808U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35322))) : (263344817U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
            }
        } 
    } 
    var_21 = (~(-901680864));
    /* LoopNest 3 */
    for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_3)))))) : (((((/* implicit */_Bool) min((var_7), (((/* implicit */int) arr_12 [i_2]))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_13 [i_2 + 3] [14ULL] [i_2 + 2] [i_2 + 3]))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (_Bool)1);
}
