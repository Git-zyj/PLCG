/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229429
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */long long int) arr_3 [14LL] [(signed char)12]);
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) (-(((/* implicit */int) max((min((var_12), ((signed char)125))), ((signed char)127))))));
                            var_16 = ((/* implicit */signed char) ((((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 2]))) + (-799909121328119907LL))) + (9223372036854775807LL))) >> ((((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))) + (111)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_17 = 9223372036854775807LL;
                                var_18 = ((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_1])) + (2147483647))) >> (((((/* implicit */int) max((arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 - 1]), (arr_7 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1])))) + (128)))));
                            }
                        } 
                    } 
                } 
                arr_15 [14LL] [i_1] [i_0] = ((signed char) 7437053561653011064LL);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) var_0)), (var_8)));
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        for (long long int i_8 = 1; i_8 < 22; i_8 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) ((var_8) >> (((-5344925078620336637LL) + (5344925078620336690LL)))));
                /* LoopNest 3 */
                for (long long int i_9 = 1; i_9 < 20; i_9 += 3) 
                {
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (long long int i_11 = 2; i_11 < 22; i_11 += 3) 
                        {
                            {
                                var_21 = min((((/* implicit */long long int) (~(((/* implicit */int) ((var_11) != (var_10))))))), (((((((/* implicit */_Bool) (signed char)-111)) && (((/* implicit */_Bool) var_4)))) ? (min((-799909121328119907LL), (((/* implicit */long long int) (signed char)-124)))) : (arr_26 [i_11] [i_8] [i_11 - 2] [i_9 - 1] [(signed char)15] [i_11]))));
                                var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) var_12))))), ((+(arr_20 [i_8 - 1] [i_9])))));
                                var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) (signed char)-111))));
                                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8 + 2] [i_11 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7] [i_7]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_22 [i_7] [i_8] [i_9]))))))))));
                                var_25 = ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                } 
                arr_28 [i_7] = ((((min((((long long int) arr_16 [(signed char)14])), (((/* implicit */long long int) (signed char)0)))) + (9223372036854775807LL))) >> (((((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (1398729317443154227LL))));
                var_26 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_8 + 1] [i_8 + 1]))))), (((((/* implicit */int) (signed char)-25)) | (((/* implicit */int) arr_18 [i_8 - 1] [i_8 - 1]))))));
            }
        } 
    } 
}
