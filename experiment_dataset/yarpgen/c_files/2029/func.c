/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2029
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_20 ^= ((((/* implicit */_Bool) arr_1 [13ULL] [i_0])) ? (((((/* implicit */_Bool) 1904764868)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32763))) : (((((/* implicit */_Bool) -1904764874)) ? (arr_3 [i_0]) : (arr_3 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [0]))));
        var_21 += ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 9033086398192097760LL)) : (5545136206227639960ULL))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_22 |= ((/* implicit */short) (unsigned char)35);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned int) var_2);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) (_Bool)1);
                            var_25 ^= ((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)1] [i_2]);
                            var_26 += ((/* implicit */signed char) ((unsigned int) (-(1904764874))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    var_27 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) var_15)))))) * (arr_5 [i_0]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_2] [i_1] [i_2])), ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) -1904764856)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) : ((-(9033086398192097760LL))))))));
                    arr_19 [4] [(_Bool)1] [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) arr_1 [i_2] [i_0])) - (arr_10 [i_0] [i_1] [i_2] [i_5]))) : (((/* implicit */int) arr_4 [i_0] [(signed char)7] [(short)2]))))) ? ((-(((((/* implicit */_Bool) (short)7591)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2485883653U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32763)))))));
                    var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)48322))));
                }
            }
        }
        arr_20 [i_0] [i_0] = ((/* implicit */short) (((-(11443315105676974995ULL))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0)))))));
    }
    for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_6] [i_6]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-12))))) : (((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-32744)))))));
        var_29 -= ((/* implicit */_Bool) ((1904764860) | (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        var_30 = ((/* implicit */signed char) max((((/* implicit */int) max((arr_7 [i_7] [i_7] [i_7]), (arr_7 [11] [0U] [i_7])))), ((-(((/* implicit */int) arr_1 [i_7] [i_7]))))));
        arr_26 [i_7] = ((/* implicit */long long int) (+(var_4)));
    }
    var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && ((!(var_12)))));
}
