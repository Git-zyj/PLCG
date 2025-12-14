/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234148
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((arr_3 [11ULL] [i_0 - 1]) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (88))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (var_5)))) && (((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0]))))) : (((/* implicit */int) ((max((var_0), (((/* implicit */unsigned long long int) arr_4 [17LL] [17LL] [i_0])))) >= (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_1] [11ULL]), (((/* implicit */long long int) (unsigned char)129))))))))));
                var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 + 2] [i_0 + 2]))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 2] [i_0 + 2])) ? (arr_4 [i_0 + 2] [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_0 [i_0 - 1] [1ULL]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((unsigned long long int) var_3))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            arr_15 [i_2] [i_3] [(unsigned char)17] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_4 + 2] [i_5])))));
                            var_17 ^= ((/* implicit */unsigned char) var_6);
                            arr_16 [i_3] = ((/* implicit */unsigned int) ((((unsigned long long int) var_3)) / (144115188075855856ULL)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) arr_8 [i_3] [i_2]);
            }
        } 
    } 
}
