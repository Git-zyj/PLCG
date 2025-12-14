/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247976
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
    var_18 = ((/* implicit */int) min((var_18), ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 18446744073709551615ULL)))) == (((unsigned int) var_13)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((arr_6 [i_2] [i_2] [i_2] [i_0]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [7ULL] [7ULL])))))));
                    arr_7 [i_0 + 1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 - 2])) >> (((((/* implicit */int) arr_1 [i_0 - 2])) - (36787)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) (short)-1)))));
                                arr_15 [i_1] [11] [i_2] [i_3] [i_2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2568002166347544493ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))) : (2568002166347544503ULL))));
                                arr_16 [i_1] [i_1] [i_2] = ((/* implicit */int) var_13);
                                var_21 = ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned char)15))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) max((max((((((/* implicit */int) var_1)) + (((/* implicit */int) (unsigned short)27863)))), (((((/* implicit */_Bool) (unsigned short)37673)) ? (((/* implicit */int) (short)-807)) : (((/* implicit */int) var_12)))))), (((/* implicit */int) var_14))));
}
