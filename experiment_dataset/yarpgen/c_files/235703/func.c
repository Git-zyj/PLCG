/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235703
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) ((32767U) >= (((/* implicit */unsigned int) 8190))))) > ((+(((/* implicit */int) var_0))))))), (min((((/* implicit */unsigned char) ((8183) >= (((/* implicit */int) var_1))))), (var_1)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
                {
                    var_11 += ((/* implicit */int) arr_0 [i_2] [i_0 - 2]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 2027624937U))) ? (((((/* implicit */_Bool) min((1370003251), (-8184)))) ? (((/* implicit */int) ((short) arr_7 [i_4]))) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 1])))) : ((-(((arr_9 [i_0] [i_0] [i_4]) / (((/* implicit */int) var_6))))))));
                                var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 33554176U)) ? (-8198) : (((/* implicit */int) (unsigned short)23584))));
                                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (unsigned char)101))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    var_15 += ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 3])))) != (((/* implicit */int) ((((-4209835787472993274LL) / (((/* implicit */long long int) 8186)))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_5] [i_5])) ? (8183) : (((/* implicit */int) (short)-24698))))))))));
                    arr_16 [i_5] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 - 2])) && (((/* implicit */_Bool) arr_7 [i_0 - 2]))))) >= ((+(arr_1 [i_1])))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_1] [i_1] [i_7] [i_8] [i_8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_6 [i_8] [i_8 - 1] [i_7 - 2])) ? (((/* implicit */int) arr_6 [i_8] [i_8 - 1] [i_7 - 2])) : (8173))), (1032192)));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1])))))));
                                var_16 = ((/* implicit */int) (+(((0ULL) << (((/* implicit */int) var_1))))));
                            }
                        } 
                    } 
                    arr_26 [i_1] [i_0 - 2] [i_1] [i_6] |= ((/* implicit */long long int) ((unsigned char) min((-1LL), (((/* implicit */long long int) arr_0 [i_0 + 2] [i_0 + 4])))));
                }
                var_17 = ((unsigned char) min((arr_20 [i_0 - 2]), (((/* implicit */long long int) arr_2 [i_0 - 2]))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_6);
}
