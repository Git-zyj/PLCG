/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50780
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)203)) >> (((/* implicit */int) (_Bool)0))));
    var_19 = (+(((/* implicit */int) var_9)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3120003473U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) : (-1452108809714038910LL)))) < (arr_4 [i_0] [i_0 + 3])));
                var_20 -= ((/* implicit */signed char) var_16);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) -1886239152)))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_0])) / (((/* implicit */int) arr_9 [23] [i_1] [i_1]))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_4 [i_0] [i_2])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) 4351187741673306569ULL));
                        var_22 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [22])) && (((/* implicit */_Bool) var_11))))) > ((~(arr_8 [i_0] [i_1] [i_3])))));
                    }
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_0] [i_0]))));
                        arr_20 [i_0] = ((/* implicit */int) ((arr_4 [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                        arr_21 [i_0 + 2] [i_0 + 2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (1125846170930198903ULL)));
                    }
                    for (long long int i_5 = 2; i_5 < 24; i_5 += 1) 
                    {
                        var_23 &= ((/* implicit */unsigned long long int) (+(1989460111)));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_0 [i_0])));
                        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
                    }
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) 2147483647);
}
