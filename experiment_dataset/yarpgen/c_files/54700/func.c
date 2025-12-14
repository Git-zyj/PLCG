/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54700
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_7 [i_2] [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) 4294967266U)) ? (((unsigned long long int) 3544925177U)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65472))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_10 [i_1] [9ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) << (((((/* implicit */int) arr_6 [(_Bool)1] [i_1 + 1] [0LL])) - (60703)))));
                        var_12 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_6) > (((/* implicit */int) arr_4 [i_3])))))));
                        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)63)) / (arr_5 [i_2] [i_1]))) >= (((/* implicit */int) arr_6 [i_2] [11] [i_2]))));
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)64))));
                        arr_14 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */short) var_0);
                        var_14 = ((((/* implicit */_Bool) (unsigned short)63)) ? (((var_0) + (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        var_15 -= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)61))));
                        var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_15 [i_0] [i_1 + 1] [i_2] [4ULL]))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5 + 1]))));
                        var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned short)65472)))))) : (var_1)));
                    }
                }
                var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65486))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65473))))) % (((/* implicit */int) (unsigned short)69))))) == (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)54)) + (var_6)))), (var_9))))))));
}
