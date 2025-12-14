/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36278
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [12ULL] &= ((/* implicit */unsigned long long int) var_15);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [(short)15]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */long long int) 4U)) : (min((((/* implicit */long long int) 6U)), (var_13)))))) ? (((/* implicit */int) (((+(var_14))) != (min((0ULL), (((/* implicit */unsigned long long int) (short)-32757))))))) : ((+(var_15)))));
                    var_21 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_15 [i_2])), (arr_11 [i_4] [10ULL]))) ^ (((((/* implicit */_Bool) (unsigned char)0)) ? (var_15) : (((/* implicit */int) (signed char)-15))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))) : (((((/* implicit */_Bool) 0LL)) ? (15058346776494108650ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32740)))))))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_3))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
}
