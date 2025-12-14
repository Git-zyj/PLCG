/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222220
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) ((-1991814128) == (((/* implicit */int) (!(var_9))))));
                        var_14 += ((/* implicit */signed char) arr_12 [i_0] [i_1] [i_2] [i_1]);
                        arr_13 [i_0] [i_1] = ((/* implicit */int) (((~(((/* implicit */int) var_4)))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)3]))) == (var_2))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 3; i_4 < 17; i_4 += 2) 
        {
            for (signed char i_5 = 3; i_5 < 17; i_5 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) ^ ((-(var_0)))));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_3))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) -1991814128)) ? (((/* implicit */int) (unsigned char)102)) : (-1991814128))))) >> (((((((/* implicit */int) var_9)) >> (((var_8) - (1430070509))))) << (((min((var_11), (((/* implicit */unsigned long long int) 1991814128)))) - (1991814098ULL)))))));
}
