/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210286
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1]))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_8 [i_1])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)47077))));
                            arr_10 [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) max((1763474348054544920LL), (4316541852688302829LL)));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-22600))) / (4316541852688302825LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((2349395900U) - (837266896U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_8)))))))) : (min((arr_11 [(signed char)12] [(signed char)12] [1LL] [i_3]), (((/* implicit */long long int) arr_6 [(signed char)8] [i_1]))))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (723286029585627067ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1])) - (((/* implicit */int) min((((/* implicit */short) var_8)), ((short)-19907)))))))));
                                var_14 = var_7;
                                var_15 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_10))))) : (((/* implicit */int) arr_7 [i_1] [i_1] [2ULL] [i_1]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)22599)), (4316541852688302829LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_3)));
}
