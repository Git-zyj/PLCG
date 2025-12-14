/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246393
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
    var_19 = ((/* implicit */unsigned short) ((int) var_12));
    var_20 = (~(((/* implicit */int) ((signed char) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_14))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_7 [14LL] [i_1] [i_1] [13]))));
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 566430304)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) arr_7 [i_0] [i_1] [(_Bool)1] [21U]))))))) == (((((/* implicit */_Bool) max((arr_3 [i_0] [i_1] [i_3]), (var_8)))) ? (arr_2 [i_0] [12U]) : (min((((/* implicit */unsigned long long int) var_15)), (arr_2 [i_2] [i_1])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            {
                                arr_15 [(signed char)6] [i_0] [i_2] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_5]))))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((arr_9 [i_4]) ^ (((((((/* implicit */_Bool) (unsigned short)1132)) ? (15578302303071634291ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [7LL])))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [7] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))))))))));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-44)) ? (var_4) : (((/* implicit */unsigned long long int) arr_8 [i_0] [8ULL] [i_2] [22]))))) ? (((((/* implicit */unsigned long long int) var_0)) + (arr_12 [i_5] [i_1] [i_2] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1136)) - (((/* implicit */int) (unsigned short)1132))))))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_6) % (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0]))))) | (((arr_2 [i_0] [i_2]) & (((/* implicit */unsigned long long int) var_0)))))))));
                    arr_16 [20LL] [3ULL] [i_2] [i_0] = ((/* implicit */_Bool) ((var_13) ^ (((((/* implicit */int) arr_13 [2U] [i_2] [i_2] [i_0] [i_1] [i_0] [i_0])) | (arr_8 [i_0] [i_0] [(signed char)4] [i_0])))));
                }
                arr_17 [i_0] [i_0] = (-(((/* implicit */int) arr_13 [5] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])));
            }
        } 
    } 
}
