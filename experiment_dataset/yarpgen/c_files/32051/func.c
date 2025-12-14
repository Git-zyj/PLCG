/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32051
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
                    {
                        var_10 = ((/* implicit */short) (-(4014242663U)));
                        arr_10 [i_3] [i_1] = ((((/* implicit */_Bool) ((arr_8 [i_3] [i_2 - 1] [i_1] [i_0]) & (((/* implicit */unsigned int) -5))))) ? (((((/* implicit */int) var_5)) / (arr_7 [i_0] [i_1] [i_1]))) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (4)))));
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_2 + 2] = ((/* implicit */_Bool) ((unsigned int) arr_9 [i_0] [i_2 + 3] [i_0] [i_2] [i_2 + 3]));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) -6)) : (arr_2 [i_4] [i_1]))) + (((/* implicit */unsigned int) arr_7 [i_2 - 1] [i_2] [i_2 + 3]))));
                        arr_15 [i_0] [i_0] [i_0] [(signed char)1] &= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (var_7) : (arr_1 [i_4]))));
                        var_11 = ((/* implicit */short) (((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) 3647628259U))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_5 = 3; i_5 < 17; i_5 += 3) 
                    {
                        arr_18 [i_0] = ((/* implicit */unsigned int) (~(arr_0 [i_2 + 1])));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                    }
                    var_12 += ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_8 [i_2 + 3] [i_0] [i_0] [i_0])) : (arr_6 [i_0] [i_2])));
                    arr_20 [i_0] = ((/* implicit */unsigned long long int) ((short) arr_7 [i_2 - 1] [i_2 + 1] [i_2 - 1]));
                    var_13 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3904709871U)))) ? (((/* implicit */int) (short)21816)) : (((/* implicit */int) ((short) arr_2 [i_0] [(_Bool)1])))));
                }
                arr_21 [i_1] = ((/* implicit */short) ((2138628483) * ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) 3647628259U)) > (arr_17 [13] [i_1] [i_0] [12U] [i_1] [i_1]))))))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) max((arr_0 [10]), (((/* implicit */long long int) arr_8 [(_Bool)1] [i_1] [i_1] [(_Bool)1]))))) : (((arr_6 [i_0] [i_1]) / (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_1] [18ULL] [i_0]))))))) ? (1) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2895234909U)) % (var_7)))))))));
                arr_22 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_9 [i_0] [i_1] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 344809851))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1565124771)) > (var_6))))) : ((-(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)5286)))) : ((-(((/* implicit */int) arr_3 [i_0])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */int) ((unsigned char) var_2))) + (((/* implicit */int) var_0))))));
}
