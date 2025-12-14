/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2346
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
    var_20 = ((((/* implicit */_Bool) ((4824193818542453772LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_2 [i_1] [i_0]);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((arr_1 [13U]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87)))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -9185879206017304960LL)))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_2 [i_1] [i_0 - 2])) < (2174856341329265941ULL))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) (-(arr_3 [i_1])));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [(unsigned short)6] [(unsigned short)6] [i_4] [i_4])) ? (((/* implicit */int) min(((unsigned char)255), ((unsigned char)0)))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_3] [11U])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_0] [i_4])) : (((/* implicit */int) (signed char)-81))))))) ? ((+(((arr_8 [i_1] [i_0] [i_0]) ? (arr_3 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_4]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_0 + 1] [i_1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(unsigned short)12] [i_1] [i_2] [i_1] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)54971)) ? (arr_4 [i_1] [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13789))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 *= ((/* implicit */short) var_10);
}
