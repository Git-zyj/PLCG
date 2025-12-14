/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41435
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
    var_14 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_15 = ((((((arr_3 [i_0] [(short)19] [i_1 + 2]) / (((/* implicit */int) (short)32754)))) / (((((/* implicit */int) var_4)) * (((/* implicit */int) (short)32758)))))) * ((-(((((/* implicit */_Bool) arr_2 [i_0])) ? (var_12) : (arr_3 [i_0] [i_1] [i_1 + 2]))))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) arr_2 [16])) - (79))))))) >> (((var_10) + (3567667223945978300LL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) arr_5 [i_2] [i_2]);
                    var_18 = ((/* implicit */unsigned char) (-(((((arr_6 [i_2]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) ? (min((arr_4 [i_3]), (((/* implicit */int) arr_10 [i_2 - 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_4])) >= (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) -6323354538274040108LL);
}
