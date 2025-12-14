/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30329
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
    var_14 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = arr_1 [i_0];
                var_16 *= ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned short)10])))));
                var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_2 [i_0] [i_1 + 2])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)125))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    arr_13 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_12 [i_4] [i_3] [i_3] [i_2])));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))) < (arr_12 [i_2] [(unsigned char)2] [i_3] [i_4])))) : (((/* implicit */int) arr_10 [i_2]))));
                }
            } 
        } 
    }
}
