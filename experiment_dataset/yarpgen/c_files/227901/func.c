/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227901
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))) + (arr_4 [i_0])))) : (((unsigned long long int) arr_7 [9U] [9U] [i_1] [9U]))))) && (((/* implicit */_Bool) var_8))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        var_10 += max((((((/* implicit */unsigned int) arr_5 [i_0] [i_2 - 1] [(_Bool)1])) & (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_2] [i_2 + 1] [i_2 - 2]) : (-1)))));
                        var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_7 [i_2 - 1] [i_2] [i_2 - 3] [i_2 - 3]))))) ? (((/* implicit */int) max((var_4), (((/* implicit */signed char) arr_7 [i_2 + 3] [i_2] [i_2 + 2] [i_2 - 3]))))) : ((-(((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 3]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            var_12 += ((/* implicit */unsigned int) arr_6 [i_0] [i_0]);
                            var_13 = ((/* implicit */int) var_8);
                            var_14 += ((/* implicit */unsigned long long int) var_6);
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                    {
                        var_15 += ((/* implicit */short) (+(((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) arr_18 [i_2 - 2] [i_2] [(unsigned short)0] [i_2 - 1] [i_2 + 1])) & (((((/* implicit */_Bool) arr_14 [i_2] [i_2] [(signed char)0] [i_5] [0U] [i_6])) ? (448U) : (2090143621U)))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5] [i_2 - 1] [i_2 - 3])) ? (((/* implicit */unsigned int) arr_5 [i_5] [i_2 - 1] [i_2 - 3])) : (var_2))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_2 - 2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 3] [i_2 - 2] [i_2 + 1] [i_2 + 1]))) : (2245479781U))))));
                            var_18 += ((/* implicit */short) ((((var_5) == (2874230919U))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))));
                            var_19 ^= ((/* implicit */short) arr_3 [i_5] [i_5]);
                            var_20 += ((/* implicit */signed char) ((((((/* implicit */_Bool) 2090143617U)) || (((/* implicit */_Bool) arr_1 [i_1])))) && ((!(((/* implicit */_Bool) arr_23 [i_7] [i_0] [i_2 + 2] [i_0] [i_0]))))));
                        }
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_2] [(signed char)2] [i_0] [i_5]))) / (2509274442U)))) * (727740467062289136ULL)));
                    }
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) min(((((-2147483647 - 1)) + (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) 2090143623U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)56115)))))))));
    var_23 = var_0;
    var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((short) var_5))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_5)) : (var_7)))))) ? (min((((((/* implicit */_Bool) var_4)) ? (1785692854U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
