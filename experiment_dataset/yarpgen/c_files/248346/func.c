/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248346
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
    for (short i_0 = 1; i_0 < 6; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_0 [i_0 - 1])))) ? (8332051198373520187LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)40191)), (18446744073709551599ULL)))) ? ((~(((/* implicit */int) (short)17322)))) : (((((((/* implicit */int) (signed char)-73)) + (2147483647))) << (((((((/* implicit */int) (signed char)-77)) + (102))) - (25)))))))))))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (-8609107149081216918LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3)))));
        var_19 = ((/* implicit */int) arr_0 [i_0 + 4]);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_5 [(_Bool)1] [i_0] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) min(((signed char)-114), ((signed char)88)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 43ULL))))) : (((/* implicit */int) (signed char)39)))));
            var_20 -= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) | (((((/* implicit */_Bool) (short)-17322)) ? (arr_0 [1]) : (arr_0 [i_0]))))) | (((/* implicit */unsigned int) 506559522))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(4611686018427383808ULL)))) ? (((long long int) ((((/* implicit */_Bool) -6498365144515026773LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (18014261070528512LL)))) : (((/* implicit */long long int) ((int) (short)32764)))));
                            arr_13 [i_0 + 2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 2] [i_4 - 1] [i_0] [i_4 - 1] [i_0])))))) : (((long long int) ((((/* implicit */_Bool) (unsigned short)32460)) || (((/* implicit */_Bool) (signed char)22)))))));
                            arr_14 [i_0] [(unsigned char)8] [i_2] [9ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_2 [i_0] [i_0])) <= (173960087U)))), (arr_0 [i_0 - 1])));
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_5 = 1; i_5 < 6; i_5 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((unsigned short) (+(((int) arr_8 [i_5 - 1] [i_5] [i_5] [i_5])))));
        var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [7U])))))))) ? (((((/* implicit */_Bool) ((long long int) arr_8 [i_5] [i_5] [i_5] [i_5]))) ? ((-(((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) arr_16 [i_5 + 2] [i_5 + 2])))) : (arr_10 [i_5 + 1] [i_5] [i_5 + 1] [i_5] [i_5]));
    }
    var_24 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (var_5)))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_6)))))));
    var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (short)4988))));
}
