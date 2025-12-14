/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229154
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */int) (+(((((((/* implicit */unsigned long long int) var_0)) & (arr_0 [i_0]))) >> (((((((/* implicit */_Bool) 1659239594)) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) arr_10 [i_0] [i_0] [4LL] [6LL] [i_3] [i_1])))) - (195)))))));
                                arr_14 [i_3] = min((((/* implicit */unsigned long long int) ((min((var_4), (arr_6 [i_1] [i_3]))) != (((/* implicit */unsigned long long int) min((1352283777642406100LL), (((/* implicit */long long int) arr_8 [i_0] [(short)16] [(short)7] [(short)7] [(_Bool)1] [i_0])))))))), ((~(var_4))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned long long int) var_0))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [(short)10] [i_0] [i_0])) || ((!(((/* implicit */_Bool) 1452051678U))))))), (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((((/* implicit */_Bool) 1352283777642406100LL)) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (193137171279015960ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), ((_Bool)1)))))))));
                                var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */unsigned int) (short)24808)), (var_2)))))), (((min((var_4), (((/* implicit */unsigned long long int) var_11)))) << (((var_2) - (3405321758U)))))));
                                var_15 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((((min((-1352283777642406080LL), (((/* implicit */long long int) (short)0)))) + (9223372036854775807LL))) << (((((min((813690718), (((/* implicit */int) (short)-9)))) + (46))) - (37))))) : (arr_3 [i_1] [i_1])));
                                var_16 = ((/* implicit */unsigned short) 1673772764);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 1; i_7 < 8; i_7 += 2) 
    {
        for (unsigned char i_8 = 1; i_8 < 11; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_9 = 3; i_9 < 8; i_9 += 4) 
                {
                    for (unsigned int i_10 = 4; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_17 = ((short) (!(((/* implicit */_Bool) arr_18 [(signed char)14] [i_7 + 3] [i_7] [7ULL] [i_9 + 3]))));
                            var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)28)), ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) : (var_0)))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10225912735894546704ULL)) ? (min((((/* implicit */unsigned long long int) 1029308245)), (18446744073709551615ULL))) : (min((arr_20 [i_8 - 1]), (((/* implicit */unsigned long long int) var_1))))));
                            var_20 = ((/* implicit */_Bool) (signed char)-47);
                            var_21 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)52)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) 813690734)), (arr_19 [i_7 + 2] [i_8 - 1]))))));
                        }
                    } 
                } 
                arr_29 [(unsigned char)1] [i_8] [3ULL] = ((/* implicit */unsigned char) min((((unsigned long long int) (+(var_4)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)61)), (arr_19 [i_8 + 1] [i_8]))))));
                arr_30 [i_7] [i_8] [i_8] = ((/* implicit */signed char) (+((+(9223372036850581504LL)))));
            }
        } 
    } 
    var_22 -= ((/* implicit */short) (unsigned short)1720);
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((((_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) var_11)))))) : (var_4)))))))));
}
