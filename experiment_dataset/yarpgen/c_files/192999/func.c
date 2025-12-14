/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192999
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((unsigned long long int) (unsigned char)152);
        var_21 = ((/* implicit */_Bool) ((long long int) arr_2 [i_0 + 1]));
        var_22 &= ((/* implicit */int) ((short) 1914510008));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) (short)20544);
                        arr_12 [i_3 - 1] [i_2] [i_3] [i_3] [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((signed char) (signed char)58));
                        var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_3 + 1] [i_1 - 1]))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                {
                    var_25 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned char)103)))));
                    var_26 = ((unsigned long long int) min((arr_14 [i_4] [i_4]), (((/* implicit */short) arr_15 [i_4]))));
                    arr_23 [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_5] [i_6]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) var_18);
}
