/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28628
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) (signed char)127)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_0)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1096199994)) ? (1096199994) : (-1096199995)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)144)) ? (1096199985) : (((/* implicit */int) (_Bool)1)))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(-1096199995)))) & ((~(var_4)))));
                                var_11 = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) 3247806393U)) ? (var_4) : (var_4)))));
                }
                arr_16 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_8)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 9; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) var_0);
                arr_23 [i_5] [i_5] = ((/* implicit */long long int) (+(((max((((/* implicit */int) (unsigned short)2)), (1096199997))) - (((/* implicit */int) (unsigned char)0))))));
                arr_24 [i_5] [i_6] [(unsigned char)12] = ((/* implicit */short) ((unsigned char) ((short) (+(((/* implicit */int) (unsigned short)7589))))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) var_3))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551615ULL)))));
            }
        } 
    } 
}
