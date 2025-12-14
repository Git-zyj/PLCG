/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194263
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
    var_20 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_0] [(unsigned char)1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) var_16)) <= (((/* implicit */unsigned long long int) var_12))));
                                var_21 = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((((((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */int) (unsigned short)23257)) : (((/* implicit */int) var_0)))) - (((/* implicit */int) arr_4 [i_0 - 1] [i_1 + 1])))) >> ((((-(((/* implicit */int) arr_6 [i_1])))) + (249)))))) : (((/* implicit */long long int) ((((((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */int) (unsigned short)23257)) : (((/* implicit */int) var_0)))) - (((/* implicit */int) arr_4 [i_0 - 1] [i_1 + 1])))) >> ((((((-(((/* implicit */int) arr_6 [i_1])))) + (249))) - (120))))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((arr_2 [i_0 + 3] [i_0 + 3] [i_4]) << (((var_12) - (280833336)))))) ? (((/* implicit */unsigned long long int) ((long long int) (signed char)125))) : (arr_3 [i_1 - 1] [i_0]))), (((/* implicit */unsigned long long int) var_11))));
                                arr_14 [i_1] [i_3] [i_2 + 2] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 2] [i_2] [i_1] [i_4])) > (((/* implicit */int) (signed char)-125))))) >= (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0 + 3])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4])) : (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0] [i_0] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4958)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned short) (signed char)122)))))))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [5U] [i_0] [i_1] [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_11 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)3])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_9);
    var_23 = ((/* implicit */int) 0U);
}
