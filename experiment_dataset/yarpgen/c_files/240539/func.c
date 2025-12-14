/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240539
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) min((((/* implicit */short) var_9)), (var_5))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (arr_2 [i_0])))), (max((((/* implicit */unsigned long long int) var_0)), (arr_5 [i_0] [i_0] [i_1])))))));
                var_16 = ((/* implicit */short) max((min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_3 [i_1]))), (((unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_5 [(_Bool)1] [10LL] [i_1]) : (((/* implicit */unsigned long long int) arr_4 [i_1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_7)), (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_13))))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((unsigned char) var_12))) : (max((var_2), (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned int) max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) var_4))))) : (max((((var_13) + (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) var_5))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        for (unsigned int i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                {
                    arr_15 [i_3 - 1] [i_3] [i_4] = ((/* implicit */short) arr_0 [i_2] [1]);
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_16 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_4] [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))) * ((-((~(((/* implicit */int) arr_1 [3LL]))))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_4))));
                                var_22 = ((/* implicit */signed char) max((var_22), ((signed char)118)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
