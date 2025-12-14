/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203653
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
    var_19 = ((/* implicit */unsigned short) (-(((2667888308U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32256)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = (+(((/* implicit */int) (short)(-32767 - 1))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) * ((-(((/* implicit */int) (_Bool)1))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((long long int) (~(8975432775857839240ULL))));
                                var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_3] [i_2 + 2] [(short)8] [i_3] [i_4] [(signed char)1] [(short)8])) | (((/* implicit */int) min((arr_12 [i_1] [i_2 + 2] [i_1] [i_2 + 2] [i_4] [3LL]), (arr_12 [i_0] [i_2 + 2] [9ULL] [i_4] [i_4] [i_4]))))));
                                var_22 = ((arr_4 [i_1] [i_1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_4] [i_1] [i_3] [i_2 - 1] [i_2] [i_1] [i_4])) <= (((/* implicit */int) (unsigned char)11))))) >= (((((/* implicit */int) arr_8 [11ULL])) | (((/* implicit */int) (unsigned char)7)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
