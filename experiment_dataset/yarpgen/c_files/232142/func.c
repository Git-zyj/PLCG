/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232142
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
    var_19 = ((/* implicit */signed char) ((min((((((/* implicit */int) var_11)) / (var_10))), (min((var_1), (var_1))))) & ((-(((/* implicit */int) ((var_6) || (var_18))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_0] [(short)19] [14U] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)26), ((signed char)-26)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [11U]))))) : (max((2491195016079064427LL), (((/* implicit */long long int) arr_3 [12LL] [3ULL])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) (((~(((/* implicit */int) (signed char)-27)))) < (((/* implicit */int) (!(var_9))))))), (var_10)));
                            var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0 + 1] [i_3]), (((/* implicit */signed char) arr_3 [i_2] [i_2])))))) & (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])), (var_15))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (short)30938))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10263))) : (min((arr_0 [i_0 - 2] [(short)16]), (((/* implicit */long long int) var_14))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        for (long long int i_5 = 1; i_5 < 12; i_5 += 3) 
        {
            {
                var_23 *= ((/* implicit */unsigned int) max((((/* implicit */int) (short)-17604)), ((((~(((/* implicit */int) (signed char)-32)))) >> (((((var_15) << (((((/* implicit */int) arr_11 [9])) - (53604))))) - (7940980783219474429ULL)))))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_5 + 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_5 - 1] [i_5 + 1] [i_5 - 1])), (arr_11 [i_5 + 1])))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) var_13)))), (((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
            }
        } 
    } 
}
