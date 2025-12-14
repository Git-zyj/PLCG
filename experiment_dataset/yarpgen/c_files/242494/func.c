/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242494
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
    var_12 = ((/* implicit */_Bool) ((int) ((unsigned int) ((((/* implicit */int) (unsigned short)4212)) / (((/* implicit */int) (short)32566))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_0))))), (var_11)))) + (((/* implicit */int) (unsigned short)4224))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)0] [(unsigned char)0]))))), (((((/* implicit */_Bool) arr_3 [12] [12ULL])) ? (15272364268844456809ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1])))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61324)) || (((/* implicit */_Bool) ((arr_1 [i_2]) + (((/* implicit */unsigned long long int) arr_6 [i_0])))))))))));
                            arr_9 [7ULL] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((((/* implicit */int) arr_4 [3U] [3U] [i_2])) + (2147483647))) << (((arr_0 [i_1]) - (2357188693U)))))))) ? ((+(((/* implicit */int) ((_Bool) 262140U))))) : (((/* implicit */int) (short)8155))));
                            var_14 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2859755172221519139LL)))) + (arr_1 [i_0])))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(arr_0 [(unsigned char)13])))) ? (min((14930445659313920782ULL), (467672316382613408ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (4263326756U)))))) + (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(short)0])) ? (((/* implicit */long long int) arr_5 [i_0])) : ((-9223372036854775807LL - 1LL))))), (min((((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned short)5] [i_1])), (18446744073709551615ULL)))))));
                var_16 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) ((unsigned long long int) 2083135252U)))), (min((max((((/* implicit */unsigned long long int) -8360781223145586346LL)), (15272364268844456809ULL))), (((/* implicit */unsigned long long int) max((2042017792668143151LL), (((/* implicit */long long int) 369921041U)))))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (max((((/* implicit */long long int) arr_6 [i_5])), (arr_10 [i_0] [13LL] [0] [13LL]))) : (min((((/* implicit */long long int) arr_3 [i_1] [i_0])), (arr_11 [i_1])))))), (((((/* implicit */_Bool) (short)-2)) ? (((((/* implicit */_Bool) 17979071757326938215ULL)) ? (15272364268844456809ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4205))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_12 [i_4] [i_4])) : (((/* implicit */int) (short)-10108)))))))));
                            var_17 = ((/* implicit */short) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) max((min((arr_10 [i_5] [4LL] [i_1] [i_0]), (arr_11 [i_4]))), (((/* implicit */long long int) (unsigned char)200)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) max((5245774827404959689LL), (9223372036854775794LL)))) ? (((/* implicit */long long int) max((((unsigned int) arr_4 [i_0] [4] [i_0])), (((/* implicit */unsigned int) max((arr_6 [i_1]), (((/* implicit */int) (_Bool)0)))))))) : (arr_10 [i_0] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
}
