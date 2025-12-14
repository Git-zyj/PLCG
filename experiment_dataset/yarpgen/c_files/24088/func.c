/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24088
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
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    var_15 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (+(arr_2 [i_0]))))) ? ((~(((/* implicit */int) arr_1 [i_0] [i_1 - 1])))) : ((((!(((/* implicit */_Bool) 13419790062004443313ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [(signed char)13] [(unsigned char)6]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 136382712U)) || (((/* implicit */_Bool) var_5)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */short) (~(((unsigned int) max((((/* implicit */signed char) (_Bool)1)), (arr_6 [i_1 - 1] [i_3] [20] [20] [i_0 - 1]))))));
                            arr_8 [i_0 - 4] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)49152)) : (arr_3 [i_0])))))) ? (((((/* implicit */_Bool) (+(arr_3 [i_1])))) ? (arr_3 [i_0 - 4]) : ((+(arr_3 [i_0]))))) : (((arr_3 [i_0 - 1]) / (arr_3 [i_0 - 1])))));
                            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_3] [i_1] [(unsigned char)16]))));
                            var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_4 [i_1] [i_1 - 1] [i_2] [i_3]))))))), ((-(min((18446744073709551586ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
                        }
                    } 
                } 
                arr_9 [i_1] [2ULL] = ((/* implicit */signed char) -3083680908303306716LL);
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_18 [i_4]))));
                                var_21 = (~(662481711U));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) var_4);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_7);
}
