/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31046
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
    var_18 -= ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) (short)-27260))))))))) ? (((/* implicit */int) ((_Bool) (short)-27260))) : (((((((/* implicit */int) (unsigned short)22480)) >= (((/* implicit */int) (signed char)53)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)61)) && (((/* implicit */_Bool) (unsigned short)1920))))) : (((/* implicit */int) (signed char)-68)))));
    var_19 = ((/* implicit */unsigned int) max((((var_7) << (((max((((/* implicit */unsigned int) var_13)), (448897489U))) - (448897489U))))), ((((((~(((/* implicit */int) (unsigned short)30195)))) + (2147483647))) << (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_3 [(unsigned short)8] [i_1])))) ? (((/* implicit */int) arr_3 [(unsigned short)8] [(unsigned short)8])) : (((/* implicit */int) ((signed char) arr_3 [(unsigned char)12] [(unsigned char)12]))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)12)))), (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (var_10)));
                            arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) ((int) var_12)))) ^ (((arr_7 [i_0] [i_0 - 2] [i_1] [i_0]) | (((/* implicit */unsigned long long int) var_3))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_5 [i_0] [i_0])) >= (((((/* implicit */int) (signed char)53)) | (((/* implicit */int) (signed char)-53)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6696)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_2 [i_2]))))), (((unsigned long long int) arr_4 [i_3])))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (signed char)-30)) < (((/* implicit */int) (_Bool)1)))))))))));
                            var_22 *= ((/* implicit */signed char) ((min((((var_6) ^ (arr_6 [i_3] [i_3]))), (((/* implicit */long long int) max((var_2), (((/* implicit */int) (unsigned char)14))))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            var_23 = ((/* implicit */unsigned short) ((_Bool) ((arr_7 [i_3] [i_3] [i_1] [i_3]) ^ (((/* implicit */unsigned long long int) -6665870990589843265LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) > (((((/* implicit */_Bool) 3539767459U)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)36)))))))), ((~(min((var_6), (((/* implicit */long long int) (unsigned short)26354)))))))))));
}
