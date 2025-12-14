/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193054
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
    var_17 = var_1;
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(var_5))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (unsigned char)235)))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */short) var_13);
        var_20 ^= ((/* implicit */short) ((((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)235)) >> (0U))), (((/* implicit */int) var_2))))) | (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)21))))), (2617525499U)))));
        var_21 -= var_12;
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_22 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_8)) == (max((var_6), (((/* implicit */unsigned long long int) var_15))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((0) >> (((((/* implicit */int) var_13)) - (112)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (var_5)))) : (((/* implicit */int) (unsigned char)252))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_13))));
                        arr_12 [i_0] [i_0] [(signed char)8] [(unsigned char)5] |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (var_5)));
                        var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)1] [i_1 + 2]))) : (var_10)))) ? (((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1 - 2]))) : (94535337U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)23005))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 1; i_4 < 20; i_4 += 4) 
    {
        arr_17 [i_4] [14U] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) 10176521278926371769ULL)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) arr_13 [i_4]))))) <= (((((/* implicit */_Bool) (unsigned char)21)) ? (2617525495U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_16))) % (var_8))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1))))))));
        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)38)) >> (((2675308690U) - (2675308666U)))))) == (((arr_15 [i_4 - 1]) ^ (arr_16 [i_4])))));
    }
}
