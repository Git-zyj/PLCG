/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207133
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */int) arr_5 [i_0]))))) << (((((/* implicit */int) arr_3 [(_Bool)1])) + (63)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_1])))))))));
                            var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) (signed char)-88))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_10)) : (var_7))))) & (((arr_9 [i_2 + 2] [i_2 + 2] [4ULL]) << (((var_4) - (10548087314634864825ULL)))))));
                            var_13 = ((/* implicit */unsigned long long int) arr_6 [i_2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 14; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned long long int) arr_6 [i_4 + 2])))));
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned short) var_8)))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6515445948403369584ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))))) | (max((((/* implicit */unsigned long long int) ((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (var_2)))));
}
