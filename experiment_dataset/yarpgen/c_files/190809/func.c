/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190809
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (+(((((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0] [8] [(short)7])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)25794)))))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~(arr_0 [i_0])));
                var_12 = ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (short)25805)) : (((/* implicit */int) (short)2838)));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_13 += ((/* implicit */long long int) (((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_1])))) <= (((/* implicit */int) var_1))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8582)) / (((/* implicit */int) (signed char)(-127 - 1)))))), (4294967295U)))));
                                arr_15 [i_0] [i_1] [i_0] [7] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) var_1)), (arr_0 [i_0])))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) arr_9 [i_0]);
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(min((((2030138416) / (((/* implicit */int) (short)25787)))), (((/* implicit */int) arr_9 [i_1]))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((int) ((((/* implicit */_Bool) 17456172179406365592ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_11 [i_0] [i_1] [i_1] [i_1] [i_0])))) : (((((((/* implicit */_Bool) (short)-25805)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))) * (((((/* implicit */_Bool) 990571894303186020ULL)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) (short)21868))))))));
                    var_17 = arr_10 [i_0] [i_1];
                    arr_19 [i_0] = arr_13 [i_0] [i_1] [i_1] [i_1] [i_1];
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((990571894303186029ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        arr_24 [i_0] [i_0] = (~((+(17456172179406365586ULL))));
                        var_18 = ((/* implicit */_Bool) var_10);
                        var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25820))) : (var_0)))))) ? ((~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_8)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16149)) ^ (arr_0 [(_Bool)1])))) ? (((/* implicit */int) ((short) (unsigned short)52068))) : (((/* implicit */int) ((arr_13 [i_5] [i_5] [i_5] [(short)4] [i_5]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_5] [i_6]))))))))));
                    }
                    var_20 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_5] [i_5] [i_5])) ? (17456172179406365586ULL) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_5] [i_0] [i_5])))), (((/* implicit */unsigned long long int) var_10))));
                }
            }
        } 
    } 
    var_21 = min((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10)))) : (var_6))), (((/* implicit */int) var_8)));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3))));
}
