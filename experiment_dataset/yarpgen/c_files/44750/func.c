/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44750
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
    var_19 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)120)) ^ (((/* implicit */int) (short)5491))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (((((long long int) var_12)) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) var_10)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((arr_7 [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4 + 2]) - (arr_7 [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4 - 2] [i_4 - 2] [i_4 - 1])));
                                var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_4 + 2])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4 + 2]))))) - (((/* implicit */long long int) ((/* implicit */int) ((short) arr_5 [i_4 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 -= ((((/* implicit */int) var_1)) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (-28670244) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_20 [i_5])))) ^ (max((((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (unsigned short)10908)) : (((/* implicit */int) arr_14 [i_5])))), (((/* implicit */int) ((signed char) var_4))))))))));
                /* LoopNest 3 */
                for (short i_7 = 2; i_7 < 24; i_7 += 2) 
                {
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            {
                                var_24 = var_2;
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((int) (unsigned short)0)))) ? ((~(((((/* implicit */_Bool) (signed char)-41)) ? (1048512) : (2122977651))))) : (((((/* implicit */_Bool) max((var_10), (arr_14 [i_6])))) ? (((/* implicit */int) arr_17 [i_7 + 1])) : (((/* implicit */int) arr_22 [i_7 - 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
