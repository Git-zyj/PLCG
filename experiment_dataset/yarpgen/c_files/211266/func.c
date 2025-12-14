/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211266
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = (-(-144115188075855872LL));
                    arr_7 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [11] [11] [(unsigned char)17] [i_2 + 2]))));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    }
    for (short i_3 = 1; i_3 < 19; i_3 += 3) 
    {
        var_13 ^= ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) -144115188075855858LL)) || (((/* implicit */_Bool) 144115188075855871LL))))), (((int) var_1))));
        arr_11 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_6))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_8))));
        var_15 = ((/* implicit */unsigned long long int) arr_9 [(short)12] [(short)12]);
    }
    var_16 = ((/* implicit */unsigned long long int) var_0);
}
