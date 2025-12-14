/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197965
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_0 [i_1 - 1])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1]))) : (1976867342U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 - 1]))))))))));
                    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(var_1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-64), ((signed char)-51))))) + (min((((/* implicit */unsigned long long int) var_8)), (arr_2 [i_0] [i_0] [i_0])))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((arr_1 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]))))) ? (((((((/* implicit */int) var_0)) - (((/* implicit */int) var_11)))) - (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
    {
        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 4) 
        {
            for (signed char i_5 = 2; i_5 < 19; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (_Bool)1)) > (arr_16 [i_3 + 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_6] [i_6] [i_5] [i_4] [i_3]))))) : (((/* implicit */int) (unsigned char)33)))) < (max((((/* implicit */int) max((var_11), (((/* implicit */short) (unsigned char)15))))), (((arr_14 [i_4 + 3] [i_4 + 2] [i_6]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_13 [i_6] [i_5]))))))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_7])) ? (arr_8 [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 + 1] [i_3 - 1])))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 4) 
                    {
                        for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_21 [i_4 + 2])) : ((((-(((/* implicit */int) var_3)))) & (((/* implicit */int) min((((/* implicit */short) var_16)), (var_4))))))));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(min((((((/* implicit */_Bool) arr_13 [i_5] [i_9])) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) arr_17 [i_3] [i_3] [i_5 + 1] [i_8 + 1] [i_5] [i_8])))), (((/* implicit */int) arr_10 [i_3 + 2])))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)7203)) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */int) (short)448)) - (((/* implicit */int) arr_22 [i_3 - 1] [i_3 - 2]))))))));
                }
            } 
        } 
    } 
}
