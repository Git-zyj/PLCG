/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239239
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (((((/* implicit */_Bool) min(((signed char)113), (arr_1 [i_0])))) ? (((arr_3 [i_0] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_1]))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (short)13846)) : (((/* implicit */int) var_7)))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_14 [12ULL] [i_2 + 2] [i_2 + 2] [(unsigned char)8] [i_2 + 1] [i_2 + 2])))));
                                arr_17 [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 2]))) : (arr_8 [i_2 + 1] [i_4 - 1] [i_4 - 1]))), (((/* implicit */unsigned long long int) ((arr_2 [i_2 - 1] [i_2 + 2]) || (((/* implicit */_Bool) arr_8 [i_2 + 2] [i_4 + 2] [i_4])))))));
                                arr_18 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] [i_4] &= ((/* implicit */unsigned char) max((-1392446975590403418LL), (((/* implicit */long long int) (short)-13846))));
                                arr_19 [i_3] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (short)-13847)) : (((/* implicit */int) (short)-13842))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_23 [i_5])) ? (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_14 [i_5] [i_6] [i_7] [i_6] [i_7] [i_6])) ? (((/* implicit */int) (short)13846)) : (((/* implicit */int) arr_10 [i_5] [i_6])))))) > (((/* implicit */int) ((((/* implicit */_Bool) 6918534557472734469LL)) && (((/* implicit */_Bool) (short)(-32767 - 1))))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (arr_3 [i_5] [i_6]) : (arr_3 [i_5] [i_6])))) == (26388279066624LL)));
                    var_18 += ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) 1164221327U);
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((4294967295U) >> (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_6))))))))));
}
