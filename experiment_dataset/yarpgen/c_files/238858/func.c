/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238858
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((max(((~(arr_1 [i_1]))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)196)), (-727237033)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1948513429U)))))));
                var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((846030829) < (((/* implicit */int) (unsigned char)196))))), ((unsigned char)250)))) ? (min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)59))))), (1948513428U))) : (((((/* implicit */_Bool) ((((-903151685) + (2147483647))) >> (((arr_2 [i_0]) + (5869854846485206857LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))) : (1948513445U)))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0 - 1]), ((unsigned char)206)))) ? (((903151696) % (((/* implicit */int) arr_0 [i_0] [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0 + 1])) == (((/* implicit */int) (unsigned char)196)))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    arr_7 [12ULL] [i_1] = ((/* implicit */unsigned char) arr_5 [(_Bool)1] [i_1] [i_2] [i_1]);
                    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((long long int) arr_0 [i_2] [i_0])), (((/* implicit */long long int) arr_5 [i_2] [i_2] [i_2 + 1] [i_2 + 1])))))));
                    var_17 = ((/* implicit */unsigned short) max((((16702965374881332925ULL) == (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [11U]))))) == (max((((/* implicit */int) (short)-29287)), (614794637)))))));
                    var_18 = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))) + (arr_2 [i_0 + 1])))));
                }
                for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */int) var_5)) >> ((((~(((/* implicit */int) (_Bool)0)))) + (7))))) & (arr_3 [i_0] [i_3] [i_0]))))));
                    arr_12 [i_3] [i_3] [(unsigned char)0] [i_3] |= ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) 3112461061U)) ? (var_0) : (var_8))) != (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)196))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    var_20 &= ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)57)), ((+(((var_1) % (((/* implicit */long long int) arr_3 [i_0] [i_4] [4LL]))))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)56))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((((((/* implicit */int) (signed char)-81)) + (109))) - (22)))))), (((((/* implicit */_Bool) -48334860)) ? (var_1) : (((/* implicit */long long int) arr_1 [(short)2]))))))));
                    var_22 = ((/* implicit */unsigned char) min((max((var_1), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)30452)) ? (((/* implicit */unsigned int) arr_16 [1U] [i_1] [i_4] [i_4])) : (var_10))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_4]))))))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((arr_4 [i_4] [i_4] [i_0 + 1] [5ULL]) / (arr_4 [i_4] [i_4] [i_0 - 1] [i_0]))))))));
                }
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((var_11) > (((/* implicit */unsigned long long int) 964932054)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (7072606308322411056LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max(((~(2023053931U))), (((/* implicit */unsigned int) var_3))))));
}
