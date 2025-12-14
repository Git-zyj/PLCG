/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54588
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
    var_10 |= ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
    var_11 = ((/* implicit */int) (signed char)119);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [12ULL] [i_1] |= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_5))))));
                    var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)205)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (unsigned short)38333)) : ((~(((/* implicit */int) (unsigned short)11))))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    arr_9 [i_0] [12] [i_2] = ((/* implicit */unsigned short) var_2);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    arr_16 [(_Bool)1] [3U] = (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : ((~(((/* implicit */int) arr_12 [i_3])))))));
                    var_13 ^= ((/* implicit */unsigned short) (~(-6857148525729379117LL)));
                }
            } 
        } 
    } 
}
