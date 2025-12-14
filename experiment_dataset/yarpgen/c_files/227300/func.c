/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227300
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) min(((~(arr_10 [i_0] [i_1] [i_2]))), (((/* implicit */int) var_7))));
                                var_20 = ((/* implicit */short) max(((signed char)-18), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)81), (((/* implicit */unsigned char) arr_2 [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_3] [i_3])) : (arr_5 [i_1] [i_3])))))))));
                            }
                        } 
                    } 
                } 
                var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_0] [i_0] [i_1])) ? (((unsigned long long int) max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned long long int) (signed char)42))))) : (((/* implicit */unsigned long long int) 0U))));
                var_22 = ((/* implicit */signed char) max(((+(((/* implicit */int) (unsigned char)186)))), (((/* implicit */int) arr_0 [i_0]))));
                var_23 = ((/* implicit */short) ((long long int) ((((/* implicit */int) (unsigned char)85)) & (((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)171)) * (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 2; i_7 < 19; i_7 += 4) 
            {
                {
                    arr_24 [i_5] = ((/* implicit */unsigned int) arr_23 [i_5] [i_5] [i_5] [i_5]);
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((long long int) arr_21 [i_5] [i_5])), (((/* implicit */long long int) max((arr_19 [i_7]), (((/* implicit */int) (unsigned char)227)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) 4294967287U)))))) : (((/* implicit */int) arr_26 [i_8] [i_9])))))));
                                var_26 = ((/* implicit */int) (short)-26234);
                                arr_29 [i_5] [i_6] [i_5] [i_8] [i_5] = ((/* implicit */unsigned long long int) arr_22 [i_7] [i_8] [i_7]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_5] [i_6]))));
                    var_28 = ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_15 [i_7])))) ^ (max((arr_18 [i_5] [i_5]), (((/* implicit */int) var_16))))))) ? (arr_22 [i_5] [i_5] [i_7]) : (((/* implicit */int) ((short) (+(arr_22 [i_5] [i_5] [i_7]))))));
                }
            } 
        } 
    } 
}
