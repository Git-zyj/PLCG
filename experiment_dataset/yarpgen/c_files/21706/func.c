/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21706
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
    var_11 = ((/* implicit */_Bool) 4294967274U);
    var_12 = ((/* implicit */unsigned char) ((long long int) 4294967285U));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(-8378174794610864010LL)))), (var_2)));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_0 + 1] [i_0 - 3] [i_1 + 2] [i_1]), (arr_6 [i_0] [i_0 - 2] [i_1 + 3] [i_1])))) ? (arr_6 [i_0] [i_0 - 1] [i_1 + 3] [i_1]) : (max((arr_6 [i_0] [i_0 - 3] [i_1 + 3] [i_1]), (arr_6 [i_0 - 3] [i_0 - 3] [i_1 + 2] [i_1])))));
                    var_15 -= ((unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(short)6] [i_1] [i_2 + 2] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_6 [(short)4] [i_1 + 3] [(unsigned short)8] [(short)4])))), (arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 2])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_3] [i_1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((arr_3 [i_3] [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) (~(arr_6 [i_3] [i_2 + 1] [i_1 - 1] [i_3])))) : ((((!(((/* implicit */_Bool) 4294967285U)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (((/* implicit */short) arr_7 [i_3]))))))))));
                                arr_13 [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 7438665322220393622LL)) ? (arr_10 [i_4] [3LL] [i_2 - 1] [i_2] [5LL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) ? (((((/* implicit */long long int) arr_11 [i_4] [i_4 - 1] [i_4] [i_4 + 1] [i_4] [7ULL])) / (((((/* implicit */_Bool) var_8)) ? (8609658229783015962LL) : (((/* implicit */long long int) 16U)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0] [10LL] [10LL] [i_0 + 1] [i_0])) ? (23U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6191))))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_18 [i_1] [2U] [i_2 + 2] [i_5] [i_6] = arr_6 [i_0] [(unsigned char)1] [(unsigned char)4] [i_1];
                                var_16 = ((/* implicit */signed char) (+(((((((/* implicit */unsigned long long int) arr_6 [i_1] [0ULL] [i_1 + 3] [i_1])) >= (var_7))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) >= (((/* implicit */int) (unsigned char)5))))) : (((/* implicit */int) ((signed char) var_1)))))));
                                var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_6 + 2] [i_6 - 1] [i_6] [i_6] [i_5 - 1] [2ULL])) ? (0U) : (arr_11 [i_6] [i_6 + 2] [i_6] [i_6] [i_6] [i_5 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((unsigned char) max((var_2), (((/* implicit */unsigned long long int) var_0)))));
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
}
