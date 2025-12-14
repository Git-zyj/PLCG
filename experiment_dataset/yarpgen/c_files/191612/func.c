/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191612
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
    var_20 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(arr_0 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) 675611812U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned int) var_2)) : (828421306U)))) : (((((/* implicit */_Bool) (short)6863)) ? (var_11) : (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) var_3))));
                var_23 += ((/* implicit */unsigned int) arr_5 [i_1 - 2] [i_1 - 2] [11]);
            }
            for (int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    var_24 |= ((/* implicit */int) var_1);
                    var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_2))) ? (arr_12 [15U] [15U] [i_3]) : (260638064)));
                    var_26 ^= 242065668;
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (max((arr_8 [i_0]), (((/* implicit */unsigned long long int) 1164571679)))))))));
                }
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_3])) : (0ULL))), (((/* implicit */unsigned long long int) var_9)))))));
            }
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        {
                            var_29 ^= ((/* implicit */signed char) 1164571691);
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) var_14))));
                        }
                    } 
                } 
            } 
            arr_22 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (+(var_7)))) ? (2415135895U) : (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) var_2))));
            var_31 = ((/* implicit */unsigned int) max((var_31), (((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_0])) ? (arr_20 [i_1] [i_1] [i_0] [i_1 - 2] [i_1] [i_1 - 1] [i_0]) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_19)) : (var_15))), (var_3))))))));
        }
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            var_32 += ((/* implicit */short) max((max((((/* implicit */int) arr_5 [i_0] [i_8] [i_8])), (var_15))), (((((/* implicit */_Bool) var_14)) ? (var_6) : (((/* implicit */int) var_9))))));
            var_33 = ((/* implicit */int) var_13);
            var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (!(var_9))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_0] [0U]), (var_18)))) == (var_11)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_18)) : (arr_19 [i_0] [10] [i_0] [i_0])))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_6 [0ULL] [(unsigned char)8]))))));
        }
    }
}
