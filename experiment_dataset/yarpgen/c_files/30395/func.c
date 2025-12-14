/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30395
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
    var_10 = ((/* implicit */unsigned long long int) var_2);
    var_11 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_8)) ? (var_1) : (var_4))), (((/* implicit */long long int) var_8)))) < (((/* implicit */long long int) var_7))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_12 -= ((/* implicit */short) ((((/* implicit */long long int) (-(arr_2 [i_0 + 2] [i_0 + 1])))) > (((((/* implicit */_Bool) 6227784458463600930LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) 0U)) : (arr_0 [7ULL] [7ULL])))))));
        arr_3 [i_0] &= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) 524284LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) : (7610263982296456120ULL))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((min((var_1), (((/* implicit */long long int) 903706282)))) * (((/* implicit */long long int) min((arr_2 [i_1] [i_1]), (arr_2 [(unsigned short)18] [i_1]))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 19; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [14LL] [i_4] [i_4 - 1])) ? (arr_9 [i_4 + 1] [i_4] [i_4 - 2]) : (arr_9 [(short)11] [(short)11] [i_4 - 2]))) % ((~(arr_9 [i_4] [i_4 - 3] [i_4 - 2])))));
                                arr_17 [i_5] [i_4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_11 [i_1] [i_4] [i_4 - 1] [i_4 - 1])) ? (arr_11 [i_1] [i_1] [i_4 - 2] [i_4 - 2]) : (-6227784458463600930LL)))));
                                arr_18 [i_1] [i_2] [i_1] [i_4 - 2] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (var_4) : (-524276LL)))) ? (((12592836509342342034ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))) : (((/* implicit */unsigned long long int) ((-524263LL) ^ (-6227784458463600940LL))))))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_1])) > (arr_6 [i_1])))), (min((((/* implicit */int) (unsigned char)239)), (1666284518)))));
                }
            } 
        } 
        var_15 = var_6;
    }
}
