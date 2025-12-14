/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208469
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
    var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65516))) : (12649223179914390818ULL)))) ? (var_10) : (((/* implicit */unsigned long long int) var_17))))) ? (var_5) : (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0 - 1]))))) ? (((((/* implicit */_Bool) var_13)) ? (5797520893795160805ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 2]))) : (var_2)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (12649223179914390818ULL)))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_0))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 2] [i_2])) ? (5797520893795160799ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [(unsigned short)0])) ? (-1353163759) : (var_19)));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1])) ? (((((/* implicit */_Bool) arr_0 [9])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) arr_1 [i_3]))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65522))));
                }
                arr_13 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (unsigned char)110)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))));
                arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3887111171981884046ULL)) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)12)) ? (2189204695U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_0 - 2] [i_0])) : (((/* implicit */int) (unsigned short)0))))));
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1] [i_1] [(signed char)15])) ? (((/* implicit */int) (unsigned short)32844)) : (((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0 + 2] [i_0] [i_1])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)60635)) ? (((/* implicit */int) arr_11 [i_0 + 2] [9] [i_1] [i_0])) : (((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2] [i_0] [i_0])))))));
            }
        } 
    } 
}
