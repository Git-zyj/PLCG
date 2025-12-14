/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30912
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */int) var_2);
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (~(max((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */int) var_3)) >> (((arr_6 [i_0] [i_1] [i_1] [i_0]) + (690236469))))))))))));
                    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_0])), (((arr_6 [i_2] [i_2 + 2] [i_2] [i_2]) & (((/* implicit */int) var_5))))));
                    var_15 = ((/* implicit */unsigned char) min((max((max((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])), (var_11))), (((/* implicit */int) arr_2 [i_2 + 2])))), (((/* implicit */int) arr_0 [i_1]))));
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) arr_6 [(signed char)10] [i_0] [i_2 + 1] [i_0]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */short) var_3)), (min((max((var_1), (((/* implicit */short) var_8)))), (((/* implicit */short) ((((/* implicit */int) var_5)) < (var_9))))))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (short i_4 = 4; i_4 < 11; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_6 [i_3] [i_3] [i_3] [i_3]))) ? (((/* implicit */int) arr_17 [i_4 - 3] [i_4 + 1] [i_4])) : (max((((/* implicit */int) arr_0 [13])), (var_9))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min(((+(((/* implicit */int) arr_9 [i_3])))), (((/* implicit */int) arr_3 [i_3])))))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_4 + 1] [i_5] [i_4 + 1] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min(((+(arr_16 [i_3] [i_3] [i_4] [i_3]))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_19 [i_3] [i_4] [i_5] [i_6] [i_7] [i_7])), (arr_11 [i_5])))))))))));
                                arr_24 [i_5] [i_4] [(unsigned short)12] [i_4] = ((/* implicit */unsigned int) arr_22 [i_7] [i_4] [i_3]);
                                arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((-250457974) & (((/* implicit */int) arr_1 [i_3] [i_3]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_3] [i_4] [i_5] [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_3))))) : (min((((/* implicit */unsigned long long int) 1389206007)), (arr_16 [i_3] [i_3] [i_3] [i_3]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 867039979)) ? ((-2147483647 - 1)) : (1389206007)));
}
