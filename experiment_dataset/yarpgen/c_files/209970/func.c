/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209970
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_9)), ((~(((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((((/* implicit */_Bool) var_1)) ? (2049439046U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_0))))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)53411)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15575))) < (arr_4 [i_3])))) : (((((/* implicit */_Bool) arr_5 [0U] [0U] [i_3] [i_3 - 2])) ? (arr_5 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) (_Bool)1))))))));
                        var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))) : (-3949151728486618195LL)))));
                        arr_11 [i_0 + 3] [i_0] [i_0] [(signed char)6] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), ((-(((/* implicit */int) var_4)))))))));
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_5 [i_0] [i_0 + 1] [i_2] [i_3 - 2]))))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_7 [i_0] [i_0] [4]))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((((((/* implicit */int) (unsigned char)87)) * (((/* implicit */int) (unsigned char)87)))) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [8])) : (((/* implicit */int) arr_2 [8LL])))))))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 3) 
        {
            arr_20 [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3260922538U))));
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)87)) ? (3820993172U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4])))));
        }
        arr_21 [4LL] [i_4] &= ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_16 [i_4])) + (((/* implicit */int) (unsigned char)169)))), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)37))))) == (((/* implicit */int) min(((unsigned char)84), ((unsigned char)171)))))))));
        arr_22 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_4] [i_4])) / (min((((((/* implicit */int) var_3)) * (((/* implicit */int) arr_17 [i_4] [i_4])))), (((((/* implicit */int) (unsigned char)67)) * (((/* implicit */int) var_4))))))));
    }
    var_17 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)84))));
}
