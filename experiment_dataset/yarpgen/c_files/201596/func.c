/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201596
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
    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)209))))))) || ((!(((/* implicit */_Bool) min((var_14), ((short)25477))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_1])), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_4 [i_1] [i_1])))) ? ((-(var_1))) : (((/* implicit */long long int) ((((int) (-2147483647 - 1))) / (((/* implicit */int) var_5)))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)209)) : (1581521304))))));
                    arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min(((-(((/* implicit */int) (!(var_10)))))), ((~(((/* implicit */int) arr_1 [i_0 + 1]))))));
                }
                for (long long int i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    var_17 = min((((/* implicit */long long int) (short)32767)), ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14015))) : (arr_4 [i_1] [i_1]))))));
                    var_18 = var_2;
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (long long int i_5 = 2; i_5 < 23; i_5 += 1) 
                        {
                            {
                                arr_19 [i_0] [(unsigned short)15] [i_3] [i_4] [i_1] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (short)23026)))), (((((/* implicit */int) (unsigned short)43092)) << (((/* implicit */int) arr_9 [(unsigned char)22] [i_3] [i_0] [i_0]))))))) ? (2147483647) : (((/* implicit */int) ((short) arr_18 [i_0] [i_1])))));
                                arr_20 [i_0] [i_0 + 2] [i_0] [(short)16] [i_4] &= ((/* implicit */int) min(((~(var_13))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_1])))))));
                            }
                        } 
                    } 
                }
                var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_17 [i_0] [i_0] [i_1 + 1] [1ULL] [i_0 - 1]) < (((/* implicit */int) var_5)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)14014))))) : (((/* implicit */int) (short)19040))))) ? (((/* implicit */int) ((signed char) (short)32747))) : (((/* implicit */int) ((short) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_1])) * (((/* implicit */int) arr_16 [i_0] [(_Bool)1]))))))));
            }
        } 
    } 
}
