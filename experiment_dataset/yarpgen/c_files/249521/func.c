/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249521
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_12 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [4]))))) | (((/* implicit */unsigned int) arr_0 [i_0])))) << (((((((/* implicit */_Bool) (~(66758903U)))) ? (((var_4) >> (((arr_5 [i_0] [i_1] [i_0] [i_1]) - (7242760946172703674ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (1260012U)))))) : (((/* implicit */unsigned long long int) ((((((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [4]))))) | (((/* implicit */unsigned int) arr_0 [i_0])))) << (((((((((/* implicit */_Bool) (~(66758903U)))) ? (((var_4) >> (((((arr_5 [i_0] [i_1] [i_0] [i_1]) - (7242760946172703674ULL))) - (5846809333343720916ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (1260012U))) - (4293726968U))))));
                                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) (unsigned char)171))))) ? (arr_9 [i_0] [i_1] [i_1] [(short)16] [i_1] [i_3] [i_4]) : (max((((/* implicit */long long int) 4228208375U)), (-2507254275998487243LL))))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39446))))))));
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) (+(-2507254275998487272LL)));
                            }
                        } 
                    } 
                    var_14 &= ((/* implicit */short) arr_7 [i_2] [(_Bool)1] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) max((2147483644), (((/* implicit */int) (unsigned short)14450))))) ? (min((((/* implicit */unsigned long long int) var_3)), (15287361767735188809ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)170)))))))));
    var_16 &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((short) var_5)))))));
}
