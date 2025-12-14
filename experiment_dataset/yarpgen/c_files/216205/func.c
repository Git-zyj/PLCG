/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216205
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
    var_13 = var_4;
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */int) var_7)), (var_6))) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((long long int) var_3)))) : (max((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) var_1))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_13 [i_2] [i_1] &= ((/* implicit */unsigned int) ((6917529027641081856ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (short i_4 = 2; i_4 < 13; i_4 += 4) 
                            {
                                var_15 ^= ((/* implicit */unsigned long long int) arr_0 [(_Bool)1]);
                                var_16 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-26315)) && (((/* implicit */_Bool) 15173587999209856013ULL))))) > (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1)))))));
                                var_17 = ((/* implicit */signed char) arr_10 [i_2] [(signed char)7] [i_0] [i_2] [i_2]);
                                var_18 &= ((/* implicit */long long int) ((arr_4 [i_0] [i_2] [i_4 + 4]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(_Bool)1] [14U]))))))));
                            }
                            for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                            {
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26328))) < (((((((/* implicit */int) (unsigned short)65031)) >= (var_6))) ? (arr_17 [i_0] [i_1] [i_1] [i_2] [i_3] [i_5] [i_5]) : (arr_12 [i_0] [i_1] [i_0] [i_0] [i_5] [i_3])))));
                                var_20 = ((/* implicit */signed char) ((max((min((arr_6 [i_0] [i_1] [i_0] [i_3]), (((/* implicit */unsigned long long int) (signed char)-1)))), (arr_6 [15LL] [i_3 + 1] [i_0] [i_3]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 620247790200297504ULL)) && (((/* implicit */_Bool) (short)26314))))))));
                            }
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((long long int) ((var_6) * (((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) <= (arr_6 [i_0] [i_1] [i_0] [1U])))))));
            }
        } 
    } 
}
