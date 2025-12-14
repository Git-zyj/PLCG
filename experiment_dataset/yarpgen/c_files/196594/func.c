/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196594
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((9223372036854775807LL) != (((/* implicit */long long int) (~(-1246525558))))));
                                var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((9), (-7)))) ? ((~(((/* implicit */int) (short)27453)))) : (var_7)))) ? (((/* implicit */long long int) min((-1246525558), (((/* implicit */int) (unsigned char)59))))) : (((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-6530))) : (arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_1])))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27876)) ? (((/* implicit */int) (unsigned char)255)) : (1048575)))) ? (((arr_9 [i_2] [i_1] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) (short)1265))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)109), (((/* implicit */unsigned char) var_8))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (-5528158237761750058LL) : (((/* implicit */long long int) 1246525548))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((((((arr_1 [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6]))))) ? (((/* implicit */unsigned long long int) ((arr_17 [i_5] [i_5] [i_5]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)11))))) : (((((/* implicit */_Bool) arr_22 [i_6])) ? (arr_7 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)39)) == (((/* implicit */int) var_10))))), ((~(((/* implicit */int) var_12)))))))));
                var_20 &= ((var_14) != (((((/* implicit */_Bool) max((((/* implicit */int) arr_19 [i_5])), (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_6] [i_5] [i_5]))))) : (max((((/* implicit */int) var_4)), (4190208))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        for (int i_8 = 3; i_8 < 15; i_8 += 4) 
        {
            {
                arr_27 [i_8] [i_8] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) max((arr_3 [i_8 - 1]), (var_2)))), (min((17520498949008634772ULL), (arr_6 [i_8]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_8] [i_7])) ? (-2) : (((/* implicit */int) arr_23 [i_7]))))) ? (((/* implicit */long long int) max((arr_3 [i_7]), (1048562)))) : ((~(arr_18 [i_7] [(short)3] [i_7] [i_7] [i_7]))))))));
                var_21 &= (_Bool)1;
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-6499298344232106638LL)))) ? (((/* implicit */int) (unsigned short)27869)) : (((((/* implicit */_Bool) max((-3225569591475667021LL), (((/* implicit */long long int) var_12))))) ? (((/* implicit */int) (unsigned short)27876)) : (((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))));
}
