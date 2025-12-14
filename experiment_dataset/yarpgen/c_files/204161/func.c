/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204161
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((var_6), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_11)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (var_12)))) ? ((~(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1] [(unsigned short)21] [(unsigned short)10])))))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) min((4611404543450677248LL), (((/* implicit */long long int) (signed char)127)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0 - 2]), (arr_0 [i_7])))) ? (((/* implicit */int) max((arr_0 [i_5]), (arr_0 [i_0 + 1])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
                                var_22 |= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_7]))))), ((-(-4611404543450677245LL)))));
                                arr_21 [(_Bool)1] [i_1] [0ULL] [i_1] [i_1] [i_0 + 3] = ((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_13))));
}
