/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42192
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
    var_10 -= ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 = ((/* implicit */short) 15169559390073590316ULL);
                    var_12 |= min((((/* implicit */short) arr_6 [(_Bool)1] [i_2] [i_2])), (min((arr_1 [i_1]), (((/* implicit */short) arr_6 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_0] [i_4])) : (((/* implicit */int) ((_Bool) var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (arr_13 [i_0])))) ? (arr_13 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_4] [i_3] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [(short)4]))) : (((unsigned long long int) arr_6 [i_1] [(_Bool)1] [i_2]))))));
                                var_13 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_3]);
                                arr_16 [i_0] [i_3] [i_2] [i_0] [i_3] |= ((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */short) arr_9 [i_0] [(short)5] [i_0] [i_3] [13ULL])), (arr_8 [i_3] [i_3] [i_3] [i_3])))), (arr_11 [i_4] [i_0]))));
                                arr_17 [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (signed char)-120)), (arr_13 [i_3]))), (((/* implicit */unsigned long long int) arr_0 [(short)15]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_5] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0] [i_5]))));
                    var_14 = (signed char)127;
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_14 [i_0] [i_0] [i_1] [i_1] [i_6]))) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)1])), (4ULL)))))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_5 [i_0] [i_0]))));
                    var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_18 = ((/* implicit */_Bool) arr_12 [i_0] [16ULL] [(signed char)18] [i_1] [i_1] [(_Bool)1] [i_0]);
                }
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_19 [i_1])))) ? (((((/* implicit */_Bool) arr_19 [i_1])) ? (arr_19 [i_1]) : (var_1))) : (((((/* implicit */_Bool) arr_19 [i_0])) ? (arr_19 [i_0]) : (arr_19 [i_0])))));
                arr_25 [i_0] [i_0] = ((/* implicit */short) min((((min((18006719954530218990ULL), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_0])))) ^ (((arr_11 [i_0] [i_0]) % (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-67))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_10 [(_Bool)1] [i_0])))))))));
            }
        } 
    } 
}
