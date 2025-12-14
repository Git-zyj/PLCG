/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233313
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
    var_11 = ((/* implicit */unsigned int) var_8);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_3)))) & (((/* implicit */int) var_3))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) var_9))));
    var_13 = ((/* implicit */int) ((13864742352853875559ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_8) ? (13864742352853875559ULL) : (13864742352853875559ULL))) >= (((/* implicit */unsigned long long int) ((int) var_0)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_14 = ((/* implicit */_Bool) var_7);
                    arr_8 [i_0] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_5 [i_1 - 2] [i_0])))), (((((/* implicit */int) arr_5 [i_1 - 2] [i_0])) ^ (((/* implicit */int) arr_5 [i_1 - 2] [i_0]))))));
                    arr_9 [i_1 - 1] [i_1 - 1] [i_2] [i_0] = ((/* implicit */signed char) var_6);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */unsigned long long int) ((int) var_1))) : (arr_15 [i_1 - 3] [i_3] [i_3 - 2])))));
                                var_16 = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) 4582001720855676056ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (4582001720855676056ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)38374)))))))));
                                var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_6)) * (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3 - 2] [i_1 - 3]))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_22 [(short)6] [i_1 - 2] &= ((/* implicit */_Bool) min((min((13864742352853875559ULL), (((/* implicit */unsigned long long int) arr_12 [i_6 - 1] [i_6 - 1] [i_6 - 1])))), (((unsigned long long int) var_4))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned int) arr_17 [i_1 + 2] [i_6 - 1] [i_5]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_2))))) : (max((arr_6 [i_1 - 2] [i_6 - 1]), (((/* implicit */long long int) (unsigned short)28))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4582001720855676059ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)17))))) & (((22ULL) >> (((((/* implicit */int) var_4)) + (21069)))))))));
}
