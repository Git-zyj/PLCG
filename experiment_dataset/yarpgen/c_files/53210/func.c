/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53210
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) 290242266995205879ULL);
                arr_4 [i_0 + 1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((arr_0 [i_1]) ^ (((/* implicit */long long int) var_7))))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 2]))) : (18156501806714345737ULL)))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_7 [i_0 + 2])) / (((/* implicit */int) arr_7 [i_0 - 1]))))));
                                var_13 &= ((/* implicit */int) min((((((/* implicit */_Bool) arr_8 [i_1])) ? (((unsigned long long int) arr_8 [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_7)) ? ((~(290242266995205861ULL))) : (min((var_3), (5667372247362128637ULL)))))));
                                arr_11 [i_3] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) -1LL)), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (290242266995205879ULL))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_4 + 2])) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_4 - 2])) : (-1237397579))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5214750838552109088LL)) && (((/* implicit */_Bool) arr_0 [(_Bool)1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_1))) == (((/* implicit */int) var_2)))))));
}
