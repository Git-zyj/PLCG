/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198731
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
    var_11 ^= ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (signed char)28);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7402))) : (var_0))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((signed char) ((unsigned char) -2308143934254909379LL)));
                }
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            {
                                var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_5] [i_0 - 1] [i_0 - 1]))) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_5]))));
                                arr_20 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */signed char) max((max((arr_9 [i_3] [i_1 - 1]), (((/* implicit */long long int) arr_8 [i_0] [i_3] [i_5])))), (max((arr_9 [i_0 + 3] [i_0 + 3]), (arr_9 [i_0 + 1] [i_0 - 1])))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [i_0] [6U] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))) & (((long long int) ((((/* implicit */long long int) 1339638105U)) / (arr_9 [i_0] [i_0]))))));
                    arr_22 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned char) (-(arr_6 [i_3] [i_3] [i_3]))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 3] [i_1 + 3]))) : (arr_4 [i_0 + 1])))));
                }
                for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    arr_26 [i_0] [i_0] = ((/* implicit */long long int) (signed char)18);
                    var_14 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_15 [11U] [11U] [i_6] [11U] [i_6])) ? ((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_1 - 2] [i_6] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((((/* implicit */int) ((unsigned short) 9489643353062885828ULL))) <= (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_12 [(unsigned char)12])))) ? (arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 3]) : (((/* implicit */long long int) (+(arr_24 [i_0] [i_1] [i_6]))))))) : (min((((/* implicit */unsigned long long int) 3773963938U)), (((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_6])) - (6151802999416020183ULL))))))))));
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) 0LL);
                }
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_18 [i_0] [12U] [i_0 + 3] [i_0] [1LL])) || (((/* implicit */_Bool) (unsigned char)54)))))))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned short) var_4);
}
