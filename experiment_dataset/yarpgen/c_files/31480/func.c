/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31480
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_1 [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_1 - 2]) <= (((/* implicit */long long int) ((/* implicit */int) (short)23))))))) : (((((/* implicit */_Bool) var_8)) ? (4745651945450133835ULL) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 2]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_2] [i_1] [i_0])) | (var_5)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [0LL] [i_1 - 1] [i_2] [i_3] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)76))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) & (arr_6 [i_0] [i_1 - 2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)153)) == (((/* implicit */int) (unsigned short)25653)))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_8 [(unsigned char)7] [(unsigned short)17] [(unsigned char)5] [(unsigned char)5] [7ULL])) : (((/* implicit */int) var_0)))) | (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 1])))))))));
                            var_20 ^= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)0)))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) ^ (9203907545252076591ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)61528)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_0])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_1 + 1]))))))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (short)6))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) -7081509785573619988LL)) ? (1ULL) : (((/* implicit */unsigned long long int) 25547966368909045LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (short)13043)) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_10 [18LL])) >= (((/* implicit */int) (short)17123)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))))))))));
                            arr_11 [i_0] [(unsigned char)19] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [11LL])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5121)) ? (((/* implicit */int) (short)8191)) : (((/* implicit */int) arr_10 [i_1]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2]))) - (34359736320LL)))))) > (((((/* implicit */_Bool) -14LL)) ? (1304194159538186648ULL) : (9242836528457475005ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_2);
}
