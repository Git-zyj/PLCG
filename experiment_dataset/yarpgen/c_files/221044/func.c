/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221044
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
    var_10 = (+(((/* implicit */int) var_8)));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */int) (!(((((/* implicit */int) min(((short)-18758), (((/* implicit */short) (signed char)-24))))) != (((/* implicit */int) arr_3 [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((arr_10 [i_0] [i_1] [i_2] [19U] [i_4] [11]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))))))) : (max((((/* implicit */unsigned int) arr_12 [i_0] [i_3 + 1] [i_1] [i_2 + 1] [i_0 + 2] [i_4] [i_1])), (arr_9 [i_3] [i_3 - 1] [4ULL] [i_2 + 2]))))))));
                                var_12 -= ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_12 [i_0 + 2] [i_4] [i_3 - 3] [i_0 + 2] [i_0 - 1] [i_3 - 2] [i_3 - 1])))) == (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_0 [i_3] [(unsigned short)6])))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_8 [i_2]) : (arr_8 [i_2]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 2011058556)), (var_0))))));
                                var_13 = ((/* implicit */long long int) 11114381440681279275ULL);
                                arr_15 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((7332362633028272335ULL) ^ (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_2] [i_3 - 2]))))) ? (((((/* implicit */_Bool) (short)32767)) ? (var_5) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 7332362633028272340ULL))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)32767)) && ((_Bool)0))) && (((/* implicit */_Bool) ((signed char) (short)32767)))))) : (min(((+(-294509329))), (arr_13 [i_0 + 2] [i_1] [i_2] [i_3] [i_1] [17U])))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_1] [i_2 + 1] [i_0 + 2] [i_2] [i_1] [i_0 + 2])) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_1] [(_Bool)1] [i_2 + 1] [i_2 + 1] [(short)21] [i_0 + 2])) : (((/* implicit */int) arr_12 [i_2 + 1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0 + 2])))), (((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2] [i_2 + 1] [i_0 - 1] [i_2 - 1] [i_2 + 1] [i_0 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_6);
    var_16 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((((_Bool)1) ? (var_3) : (((/* implicit */long long int) var_7)))))))));
}
