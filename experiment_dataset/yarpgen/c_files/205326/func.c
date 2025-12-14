/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205326
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
    var_17 = ((/* implicit */short) max((((var_8) & (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) 315329025)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (short)13661)))))) : (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)14))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    var_18 += ((unsigned char) ((arr_3 [i_2 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 + 2])))));
                    var_19 *= ((/* implicit */short) var_8);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (short)29))));
                                arr_21 [i_3] [(short)17] [i_5] [i_6] [i_3] [i_5] = 13922165920611565178ULL;
                                arr_22 [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((max((arr_10 [i_3]), (((/* implicit */unsigned long long int) arr_18 [i_5])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84)))));
                            }
                        } 
                    } 
                } 
                arr_23 [i_3] = ((/* implicit */unsigned char) arr_16 [i_3] [i_4] [i_4]);
                arr_24 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) max((((3316711846194882817ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35275))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) (short)-1)) : (arr_12 [i_3] [i_3]))))));
                var_21 = ((/* implicit */unsigned int) ((signed char) ((unsigned int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_4] [i_3]))))));
            }
        } 
    } 
}
