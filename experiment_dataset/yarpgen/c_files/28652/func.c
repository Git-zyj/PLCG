/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28652
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 &= ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [1ULL])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [10ULL]))))) : (max((((/* implicit */unsigned int) arr_0 [i_0])), (var_1))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
        var_18 = ((/* implicit */int) var_13);
    }
    for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 9)) ? (13321861985173388818ULL) : (var_5))), (max((((/* implicit */unsigned long long int) arr_3 [i_4])), (var_5)))))) ? (((/* implicit */unsigned long long int) (~(-2435544608785759877LL)))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) (short)1087)) : (((/* implicit */int) var_10))))), (var_7)))));
                        var_20 ^= ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_1] [i_2] [i_1])))));
                    }
                } 
            } 
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (arr_4 [i_1 - 2] [i_1 + 1]))))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2446887477838481403ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_1] [i_1] [i_1] [i_1]) - (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
        }
        arr_14 [(unsigned short)16] [1LL] = ((/* implicit */unsigned short) ((((var_16) % (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1 + 1])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1103)))));
    }
    var_23 -= ((/* implicit */unsigned short) var_4);
    var_24 = ((/* implicit */short) var_3);
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_1))))))) % (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((+(var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)21)) == (((/* implicit */int) var_11))))))))));
    var_26 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */int) (short)-1074)) - (((/* implicit */int) (short)-1097))))) ? ((+(((/* implicit */int) var_11)))) : (((((((/* implicit */unsigned long long int) var_13)) == (5124882088536162797ULL))) ? (((/* implicit */int) (short)1097)) : (((/* implicit */int) var_4))))));
}
