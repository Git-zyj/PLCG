/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30433
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_2] &= ((/* implicit */unsigned char) (short)-8848);
                        arr_11 [i_0] [i_2 + 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
                    }
                    /* vectorizable */
                    for (short i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        arr_16 [i_0] [(unsigned char)4] [i_2] [4ULL] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (unsigned char)240)))));
                        var_16 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)8847)) || (((/* implicit */_Bool) (short)8865)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8847)))))) : (arr_0 [i_0])));
                        var_17 = ((/* implicit */short) var_0);
                    }
                    arr_17 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)0))));
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) var_8);
    }
    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) /* same iter space */
    {
        var_19 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((-940667091532452180LL) & (((/* implicit */long long int) ((/* implicit */int) (short)-8838))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-31382))))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [1LL])) ? (((((/* implicit */_Bool) arr_19 [i_5 - 1])) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) <= (5280933540016717887LL))))))) : (((long long int) (unsigned char)249))));
        var_21 ^= (unsigned char)9;
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_8))));
}
