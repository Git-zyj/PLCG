/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205269
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */int) (_Bool)0)) & (arr_3 [i_0] [i_1 + 1]))) + ((~(((/* implicit */int) arr_0 [i_0])))))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [(signed char)6])) ? (((/* implicit */int) (unsigned short)57062)) : (((/* implicit */int) arr_0 [i_1]))))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-5935)) : (((/* implicit */int) (unsigned short)34108))))))) : (12775025875031264371ULL))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_22 = arr_10 [i_0] [i_1 - 1] [i_0] [i_3] [i_4];
                                arr_11 [i_0] [i_1] [i_0] [14U] [(unsigned short)15] [5ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_19)))) & (((long long int) (unsigned short)34108))))) ? (-1349835809) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1 + 2] [i_4 - 1] [i_4 - 2])) ? (arr_7 [i_4] [i_1] [i_1 - 1] [i_4 + 2] [i_4 + 2]) : (arr_7 [i_3] [i_1] [i_1 - 3] [i_4 + 2] [i_4])))));
                                arr_12 [i_4] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) -1322491715);
                                var_23 ^= var_1;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 2) 
    {
        for (unsigned short i_6 = 3; i_6 < 23; i_6 += 2) 
        {
            for (signed char i_7 = 1; i_7 < 21; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) (+(((unsigned int) arr_17 [i_7 - 1] [i_6 - 3]))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (signed char i_9 = 2; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) 0U))));
                                var_26 = ((/* implicit */short) (~(((((/* implicit */int) (signed char)125)) ^ (((/* implicit */int) var_19))))));
                                arr_25 [i_9] [i_5] [i_7 + 2] [i_6] [i_5] = ((/* implicit */int) arr_21 [i_5] [i_8] [(unsigned short)5] [i_8] [i_9]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) 2551974558889783975ULL))));
                }
            } 
        } 
    } 
    var_28 -= ((/* implicit */signed char) (-(((((min((((/* implicit */int) var_13)), (var_2))) + (2147483647))) >> ((((~(-1349835809))) - (1349835805)))))));
}
