/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25754
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [2ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65518)), (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned char) (~(arr_2 [i_0] [4ULL]))))) : (((/* implicit */int) var_12))));
        var_20 -= ((/* implicit */short) 2635165789U);
        var_21 |= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) ((unsigned short) (unsigned char)225))) - (197))))), (((/* implicit */int) ((unsigned char) var_18)))));
        var_22 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)127))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_0]))) ^ (1316207787U)));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((unsigned int) ((short) arr_2 [(unsigned char)3] [i_1])))));
            var_25 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_1]);
        }
    }
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_13 [i_4] [(unsigned short)10] [i_3 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(979054818U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) & (((((/* implicit */_Bool) var_14)) ? (arr_14 [i_2] [i_5] [13ULL] [(unsigned short)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
                            var_27 = ((/* implicit */unsigned long long int) (~(1316207773U)));
                            var_28 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? ((((!(((/* implicit */_Bool) 1316207773U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_4] [i_3])) ? (33554431U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_4] [(signed char)7])))))) : ((~(9144953481703468711ULL))))) : ((+(arr_14 [i_3] [i_3 - 2] [i_3 - 1] [i_3 - 1])))));
                            arr_17 [i_4] [i_3] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((18359714978869279341ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [(unsigned char)7])))))) | (((/* implicit */int) (short)-32753))))) ? (((/* implicit */int) arr_8 [0U] [i_5])) : (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) (signed char)127)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)96))))) : (((/* implicit */int) (unsigned short)65532))));
                                arr_24 [i_6] [i_3 + 4] [i_6] [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2978759491U)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6422)))))) ? (((18446744073709551598ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) : (15728640U)))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) : (arr_9 [i_3] [i_7]))))))));
                                arr_25 [i_2] [i_2] [i_2] [i_6] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)43890)) ? (15101663842044080250ULL) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65528)) ? (arr_22 [(unsigned char)6] [i_2] [i_6] [6ULL] [i_2]) : (3376614736U)))) / (arr_14 [i_2] [i_3] [(short)1] [(signed char)4])))));
                            }
                        } 
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) (~(arr_22 [i_2] [i_2] [6U] [i_2] [(signed char)1])));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */int) ((((/* implicit */int) (signed char)125)) < (((/* implicit */int) (unsigned char)16))))) >> (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_6))))))) : (((/* implicit */int) (short)-15004))));
}
