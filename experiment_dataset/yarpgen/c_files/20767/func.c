/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20767
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [(unsigned char)3] [i_3] [i_4 - 2] = ((/* implicit */signed char) ((int) (~(10649250160099743149ULL))));
                                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_11 [(short)2] [(short)2] [i_0] [i_0] [(short)2] [(signed char)4] [i_4 - 2])) ? (((/* implicit */int) arr_11 [i_0] [(signed char)1] [i_0] [(signed char)2] [i_3] [i_4] [i_4 - 2])) : (var_12))), ((-(((/* implicit */int) (_Bool)1))))));
                                arr_14 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_7 [i_0] [(signed char)6] [i_1] [i_0]), (((/* implicit */long long int) arr_10 [i_0] [4] [i_2] [i_2] [(short)4] [i_3] [i_4]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0 - 1]))))), (min((((/* implicit */unsigned int) arr_9 [i_0])), (arr_3 [i_1 - 3] [i_2] [i_3])))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(max((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0])), (arr_8 [i_0 - 1])))))) / (arr_0 [i_0])));
                arr_16 [i_0] = ((/* implicit */unsigned long long int) var_14);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            {
                arr_23 [i_5] [16LL] = max(((((+(arr_22 [i_5] [i_6]))) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_19 [i_5] [i_6] [8U])) : (((/* implicit */int) var_14)))) + (7))))), (((/* implicit */unsigned int) arr_19 [i_5] [i_6] [i_6])));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        {
                            arr_30 [i_5] [i_5] [(unsigned short)17] [i_6] [(unsigned short)0] [i_8] = (~(((/* implicit */int) (short)-12669)));
                            var_20 = ((/* implicit */unsigned int) (~((~(var_5)))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (unsigned short)1003)) : (((/* implicit */int) (short)28938))))) / (((((/* implicit */_Bool) 681659292U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) : (9223372036854775807LL)))));
                            arr_31 [i_5] [i_7] [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) arr_21 [(signed char)13] [i_7]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_5);
    var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
}
