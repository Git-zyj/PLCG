/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218757
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
    var_12 = ((/* implicit */short) 0LL);
    var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (signed char)111))))))) ? (((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) min((((/* implicit */short) (signed char)-78)), ((short)13096)))) : ((+(((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-97)) || (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4345668706142393117ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (18446744073709551607ULL)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_10);
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)-79)), (11257046460935164888ULL)));
                                arr_16 [i_1] [i_2 - 2] [i_3] [i_4] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_6 [i_5]) / (((/* implicit */int) (signed char)45))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_1])), (var_10)))))) ? (((((/* implicit */int) ((((/* implicit */int) (signed char)-78)) >= (((/* implicit */int) (signed char)(-127 - 1)))))) * (((/* implicit */int) arr_12 [i_1] [i_2] [8U] [i_2])))) : (((/* implicit */int) arr_9 [i_5]))));
                                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-65)) % (((/* implicit */int) (unsigned char)193))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)14] [i_3])) ? (arr_15 [i_5] [i_5] [i_4] [i_3] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_10 [i_1]))))) ? (max((((/* implicit */unsigned long long int) (signed char)64)), (arr_15 [i_1] [i_5] [(signed char)5] [i_4] [(signed char)5] [(signed char)5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (int i_7 = 2; i_7 < 14; i_7 += 3) 
                        {
                            {
                                arr_21 [i_1] [i_6] [i_7] [i_6] [(short)5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_3) : (((/* implicit */int) arr_14 [i_7 - 1] [i_2 - 3] [i_2 + 2] [i_2 - 2] [i_2 - 3] [i_1]))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_1] [i_2] [i_1] [i_6] [i_7 + 2])) % (((/* implicit */int) arr_13 [(signed char)0] [i_2 + 1] [i_3] [i_2 + 1] [i_1]))))) ? (max((((/* implicit */unsigned int) ((var_3) ^ (((/* implicit */int) (signed char)15))))), (min((((/* implicit */unsigned int) arr_19 [i_2] [(unsigned short)4])), (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))))))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_2 + 1] [i_1] [(unsigned char)3] = ((/* implicit */long long int) min((((/* implicit */short) max(((signed char)-64), ((signed char)72)))), (arr_5 [i_1] [i_1])));
                    arr_23 [(short)12] [(short)12] = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */unsigned int) 212037758)) / (4257810976U)))) ^ (min((7091103719202117515LL), (((/* implicit */long long int) 520639336)))))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-81)))));
                }
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */int) (signed char)4)) * (((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [(unsigned char)3])) < (-2147483631)))))), (((/* implicit */int) (short)-32753))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(3983536577U)))) ? (((/* implicit */int) arr_18 [15LL] [15LL] [15LL] [(signed char)14] [11ULL])) : (((/* implicit */int) var_9))))) != (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)97)), (arr_12 [i_8] [i_2 - 4] [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [(unsigned char)2]))) : (((((/* implicit */_Bool) var_3)) ? (311430718U) : (((/* implicit */unsigned int) -1584344001))))))));
                }
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) (signed char)-100);
                            var_20 = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_14 [i_9] [i_9] [i_2 - 2] [i_1] [(short)4] [i_1])), (((((/* implicit */_Bool) (signed char)111)) ? (arr_6 [i_1]) : (((/* implicit */int) (unsigned char)111)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
