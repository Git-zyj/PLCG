/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205385
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
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)111)) - (((/* implicit */int) (signed char)-93))))), (min((((/* implicit */unsigned long long int) var_2)), (var_11)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((var_7), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 2345259479426738956LL)) && (((/* implicit */_Bool) (signed char)-123)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))) - (((arr_1 [i_0]) ^ (arr_1 [i_0])))))));
                            arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)230))))) < (max((arr_1 [i_0 - 3]), (((/* implicit */unsigned int) arr_7 [i_3] [i_1 + 1] [i_0 + 3] [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) min((max(((unsigned char)26), ((unsigned char)26))), (((/* implicit */unsigned char) min((min(((signed char)-111), (((/* implicit */signed char) var_17)))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [(short)6] [i_4] [i_1 - 1] [2ULL])) && (((/* implicit */_Bool) (signed char)-123))))))))));
                            var_21 = ((max((min((27ULL), (((/* implicit */unsigned long long int) (signed char)-117)))), (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) (short)-30318)))))))) ^ (min((min((17113292897063240381ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_0] [(unsigned char)5] [(unsigned char)5] [i_5] [i_5])) <= (((/* implicit */int) (unsigned char)26))))))));
                            var_22 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) max((2143057739), (((/* implicit */int) (short)-30318))))) * (min((var_14), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)6)), (max((var_8), (((/* implicit */unsigned int) (short)13357)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
