/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23176
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) (unsigned short)65298);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_16 = ((/* implicit */_Bool) (unsigned short)32888);
                    var_17 = ((/* implicit */short) (~((~(((/* implicit */int) arr_5 [(unsigned char)4]))))));
                    var_18 = ((/* implicit */int) ((short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_2]))))), (((unsigned short) arr_7 [i_0] [i_1] [i_2] [i_2])))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_10))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_1]), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_11 [(short)9] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_0] [(short)15] [20ULL] [(short)15]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32662)) ? (((/* implicit */int) (unsigned short)32653)) : (((/* implicit */int) (unsigned short)57344))));
                }
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_0])))))))));
                var_23 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)32647)) << (((((((var_1) ? (var_0) : (((/* implicit */unsigned long long int) arr_3 [i_0])))) << (((((unsigned long long int) var_8)) - (42832ULL))))) - (7270217173459533813ULL)))));
            }
        } 
    } 
    var_24 -= ((/* implicit */short) ((((/* implicit */int) min(((unsigned short)32882), (min((var_9), (((/* implicit */unsigned short) var_6))))))) ^ (((/* implicit */int) (short)-7924))));
    var_25 = ((/* implicit */unsigned char) (!(var_1)));
    /* LoopNest 2 */
    for (long long int i_4 = 2; i_4 < 9; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_26 &= ((var_12) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_4] [(_Bool)0] [(_Bool)0] [(short)0]))))));
                var_27 = ((/* implicit */unsigned long long int) max((((arr_9 [i_4 + 2] [i_4 - 2] [i_4] [i_4 + 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))))), (((/* implicit */long long int) ((unsigned char) (unsigned short)32890)))));
            }
        } 
    } 
}
