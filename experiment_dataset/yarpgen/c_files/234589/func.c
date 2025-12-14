/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234589
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) min(((+(var_3))), ((((~(arr_2 [i_0]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (var_5)))))))));
                    var_14 = ((/* implicit */_Bool) max((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-43)))), (((/* implicit */unsigned long long int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) >= (var_1))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (+(285648151)));
                                var_16 = ((/* implicit */unsigned char) arr_9 [(unsigned short)15] [i_1]);
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (signed char)82))))))) ? (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967293U)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1]))) : (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2472508200541162415ULL)) ? (arr_5 [i_0 - 2] [i_2] [i_3 - 1]) : (arr_4 [(unsigned short)14]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)7275)) ? (((/* implicit */int) (signed char)-37)) : (var_7)))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = 1U;
    var_19 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5] [i_6] [i_6] [i_7]))) ^ (arr_2 [i_7]))) : (((/* implicit */unsigned long long int) ((4294967294U) - (4294967286U))))))));
                    var_21 = ((((/* implicit */_Bool) arr_0 [8U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))) : (min((arr_5 [i_5] [(signed char)14] [i_5]), (((/* implicit */unsigned long long int) 20U)))));
                    var_22 = ((/* implicit */int) ((unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) arr_17 [(unsigned short)6] [i_6] [i_7])) : (((/* implicit */int) (signed char)-87)))) < ((~(248911477))))));
                }
            } 
        } 
    } 
}
