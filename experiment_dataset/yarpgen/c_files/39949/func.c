/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39949
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
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 399584628U)) ? (399584609U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (3895382672U)))));
    var_21 = ((/* implicit */short) ((((_Bool) (unsigned short)33514)) ? (var_5) : (((/* implicit */long long int) var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_18)))))));
        var_23 = ((/* implicit */int) var_2);
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) << (((/* implicit */int) arr_3 [i_1])))))));
        var_25 = ((/* implicit */unsigned int) var_15);
        var_26 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_3 [i_1]) ? (((arr_3 [i_1]) ? (((/* implicit */unsigned int) arr_4 [i_1] [i_1])) : (399584653U))) : (((/* implicit */unsigned int) var_11))))), (((((/* implicit */_Bool) ((-8752169984707333877LL) / (((/* implicit */long long int) 399584609U))))) ? (((8691481574579450349LL) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 399584628U)) ? (((/* implicit */int) arr_3 [i_1])) : (arr_4 [i_1] [i_1]))))))));
        arr_5 [i_1] &= ((/* implicit */signed char) max((var_5), (((/* implicit */long long int) max((arr_4 [i_1] [(signed char)12]), (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_1])), ((signed char)4)))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    var_27 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) arr_8 [i_4 - 2] [i_2])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_2 [i_2 + 1])))) & (((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (((/* implicit */int) arr_11 [i_2] [i_2 + 3] [i_2 + 1] [i_2 + 3]))))))));
                    var_28 = (~(((/* implicit */int) (unsigned short)42284)));
                    var_29 = ((/* implicit */unsigned long long int) 8752169984707333876LL);
                    arr_13 [i_2 + 2] [i_2] = ((/* implicit */short) min((((399584645U) - (((/* implicit */unsigned int) arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 2])))), (((/* implicit */unsigned int) arr_11 [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4 - 2]))));
                    arr_14 [i_2] [i_4 + 1] [i_4] [i_4] = (-((+(((/* implicit */int) arr_9 [i_3])))));
                }
                var_30 = arr_11 [i_2 + 2] [i_2 - 1] [i_2] [i_2 + 2];
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_2 [i_2 - 1]))))));
                            var_31 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_11 [i_2 + 3] [i_2] [i_2 + 2] [i_2 + 3])) ? (((/* implicit */int) arr_11 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 1])) : (((/* implicit */int) arr_11 [i_2 + 2] [i_2] [i_2 - 1] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19796)))))));
                            var_32 = (+(((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)8))) : ((+(0LL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
