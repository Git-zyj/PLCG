/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220454
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
    var_15 &= ((/* implicit */_Bool) var_10);
    var_16 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (arr_1 [i_0])))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1])))))));
                    var_18 = ((/* implicit */short) 8257536ULL);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) var_8);
                                arr_14 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) max((arr_6 [i_0] [i_1] [i_2] [i_4]), (((/* implicit */unsigned long long int) arr_7 [i_0 - 4] [i_3] [i_3]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_19 [i_6] [i_5] [i_2] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((short) (_Bool)0));
                                arr_20 [i_5] [i_5] = ((/* implicit */signed char) ((short) max((((/* implicit */unsigned long long int) (short)8296)), (11346438611254688984ULL))));
                                var_19 = (-(((((/* implicit */_Bool) 2017612633061982208LL)) ? (((/* implicit */int) arr_10 [i_0] [i_6 - 2] [i_5] [i_5])) : (((/* implicit */int) arr_10 [i_0] [i_6 - 2] [i_5] [i_5])))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_17 [i_0] [i_1] [i_0] [i_0] [i_6])), ((signed char)-109)))) || (((/* implicit */_Bool) (short)-8278))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_0] [i_7] [i_8] = ((/* implicit */short) ((((arr_25 [i_8] [i_1] [i_1] [i_1]) > (var_13))) ? (((/* implicit */int) ((short) (short)8303))) : (((/* implicit */int) var_2))));
                                var_21 ^= ((/* implicit */_Bool) arr_1 [i_0 + 2]);
                                var_22 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)2014))));
                                arr_27 [i_0] [i_0] [i_1] [i_1] [i_2] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((arr_4 [i_0]) && (((/* implicit */_Bool) 0LL))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24356)))))));
                                arr_28 [i_0] [i_8] [i_2] [i_7] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8303)) ? (((/* implicit */int) (short)29342)) : (((/* implicit */int) (unsigned char)244)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
