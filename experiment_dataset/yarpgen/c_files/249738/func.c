/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249738
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27533)) ? (13880593480627587944ULL) : (((/* implicit */unsigned long long int) 4137501469U))))) && (((/* implicit */_Bool) max((var_4), (var_8))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = 12874695847499459153ULL;
                                var_14 += ((/* implicit */short) arr_4 [i_1 - 2] [i_1 - 1]);
                                var_15 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned long long int) arr_5 [14ULL] [i_1 + 1]))) ? (((arr_5 [i_2] [i_0]) + (12874695847499459153ULL))) : ((-(arr_1 [i_2]))))) | (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [11U] [5ULL] [i_2] [17] [i_0]))))), ((-(var_12)))))));
                            }
                            var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27520))) == (13880593480627587944ULL))) && (((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_2] [i_0] [i_0]))))) << (((1879048192U) - (1879048178U)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [15U] [11] [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    arr_14 [16U] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)3)) && (((/* implicit */_Bool) 4833903370701876360ULL))))))))));
                    var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) var_3)) ? (12874695847499459171ULL) : (arr_12 [16U] [i_1 - 1] [0ULL] [i_5]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_0] [i_1 + 1] [10] [i_5] [i_1 - 2])))))));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    var_19 = 5572048226210092463ULL;
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_0 [i_0]))));
                    var_21 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [6] [i_6] [i_6] [i_6]))) : (var_3)))));
                    arr_17 [i_1] [i_0] = (-(((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 2] [i_1 + 1])));
                }
            }
        } 
    } 
}
