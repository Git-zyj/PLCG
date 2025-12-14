/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196988
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
    var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 9223372036854775803LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(var_12)))))), (((/* implicit */int) (signed char)-1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_1])) > (arr_5 [i_1 + 1] [i_1 + 3] [i_0])))) : (((((/* implicit */_Bool) 16383U)) ? (((/* implicit */int) (unsigned short)34)) : (((/* implicit */int) var_1)))))))));
                var_17 = ((/* implicit */long long int) var_7);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65507))))) - (((/* implicit */int) var_11)))) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            {
                var_19 = ((/* implicit */int) min((((18446744073709551615ULL) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_2] [i_2]))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_3]))))) && (((((/* implicit */_Bool) 15728640)) || (((/* implicit */_Bool) 281474909601792LL))))))));
                var_20 = ((/* implicit */unsigned long long int) var_4);
                arr_11 [i_2] [i_3] = ((/* implicit */unsigned char) arr_9 [i_2] [i_3]);
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */int) max((((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)31))))) - (var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned long long int) arr_4 [i_2] [i_3]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                {
                    arr_22 [i_6] [i_6] = ((/* implicit */signed char) arr_3 [i_4]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 9; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)13), (((/* implicit */unsigned short) arr_8 [i_6] [i_5]))))))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_25 [i_4] [i_4] [i_5] [i_6] [i_6] [i_7] [i_8])))))) & (((arr_19 [i_5]) ? (((/* implicit */long long int) arr_2 [i_4])) : (((((/* implicit */_Bool) (signed char)0)) ? (var_14) : (var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
