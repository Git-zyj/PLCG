/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196646
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) arr_0 [i_0]);
                var_19 = (unsigned short)19489;
                var_20 |= ((/* implicit */_Bool) ((int) (+(arr_0 [i_1 - 2]))));
                var_21 = ((/* implicit */unsigned int) max((min(((~(((/* implicit */int) var_10)))), (arr_5 [i_1 - 1] [i_1 - 2] [i_1]))), (((/* implicit */int) arr_2 [i_0 + 1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            {
                var_22 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -323380628012378888LL)), (min((arr_8 [i_2 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (-218659117))))))));
                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) arr_11 [i_2] [i_2] [i_2 + 1]))))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_3]))) : (((((/* implicit */_Bool) ((unsigned short) 150694710760259487ULL))) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_3 + 2])) : (((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_3 + 1]))))));
                var_24 = ((/* implicit */signed char) min((((long long int) arr_8 [i_3 + 2])), (((/* implicit */long long int) min((arr_12 [i_3 + 2] [i_2 + 2]), (((/* implicit */short) arr_11 [i_2] [i_2] [(unsigned char)14])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
    {
        for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
        {
            {
                var_25 -= ((/* implicit */unsigned int) ((arr_16 [i_4]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                arr_17 [i_4] = ((/* implicit */int) ((long long int) -1LL));
                arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) min(((+(7ULL))), (max((((((/* implicit */_Bool) 5494318121353580293LL)) ? (3636788121955864574ULL) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) 727748533U))))));
                var_26 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 727748533U)) ? (((/* implicit */unsigned int) -579422903)) : (727748539U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (((int) 727748533U)))), (((/* implicit */int) arr_10 [i_4 - 1]))));
            }
        } 
    } 
    var_27 += var_14;
    /* LoopNest 2 */
    for (long long int i_6 = 2; i_6 < 9; i_6 += 2) 
    {
        for (long long int i_7 = 2; i_7 < 11; i_7 += 3) 
        {
            {
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) var_5)))), (((((/* implicit */_Bool) 727748533U)) && (((/* implicit */_Bool) (unsigned char)252)))))))));
                arr_23 [i_7 - 1] [i_6] [i_6] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) arr_0 [i_6 - 1])) != (arr_1 [i_7 + 1] [i_6 + 1]))));
                arr_24 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_3 [i_6 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_14 [10LL] [i_7])))) : (((((/* implicit */long long int) 3567218762U)) | (var_16))))), (((/* implicit */long long int) min((min((((/* implicit */unsigned int) var_12)), (4294967286U))), ((~(727748533U))))))));
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) min((((var_0) * (arr_16 [i_7 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_6 + 3])) ? (((/* implicit */int) arr_6 [i_6 + 3] [i_6 - 1])) : (((/* implicit */int) arr_6 [i_6 - 1] [i_6 + 3]))))))))));
                /* LoopSeq 2 */
                for (long long int i_8 = 2; i_8 < 11; i_8 += 1) 
                {
                    var_30 += ((/* implicit */int) ((long long int) 9223372036854775795LL));
                    var_31 |= ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_7 + 1] [(unsigned char)8]))) : (var_11)))), (((/* implicit */unsigned long long int) ((0LL) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))));
                }
                /* vectorizable */
                for (signed char i_9 = 1; i_9 < 11; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 3) 
                    {
                        for (long long int i_11 = 2; i_11 < 11; i_11 += 2) 
                        {
                            {
                                var_32 -= ((/* implicit */int) ((arr_28 [i_7 - 2] [(signed char)6] [i_7] [i_7 + 1]) == (arr_28 [i_7 - 2] [i_7] [(_Bool)1] [i_7 - 2])));
                                var_33 = ((/* implicit */int) arr_8 [i_9 - 1]);
                            }
                        } 
                    } 
                    arr_37 [i_7] [i_7] [i_7] [7LL] = ((/* implicit */long long int) ((unsigned long long int) arr_31 [i_7] [i_7] [i_7 - 2] [i_7]));
                }
            }
        } 
    } 
}
