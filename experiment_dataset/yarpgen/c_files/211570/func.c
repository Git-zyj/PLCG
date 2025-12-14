/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211570
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned long long int) -7262785530594327209LL);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */int) ((max((max((((/* implicit */unsigned long long int) arr_1 [i_1])), (7851341850323229229ULL))), (min((((/* implicit */unsigned long long int) arr_10 [(short)6] [i_4] [11U] [i_2] [i_1] [(short)6])), (10595402223386322386ULL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))));
                                arr_16 [(short)4] [(short)4] [i_2] [7U] [(short)0] [i_2] [i_2] = var_15;
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_0] [(short)7] = ((/* implicit */signed char) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(_Bool)1] [i_1] [0LL]))) / (10595402223386322390ULL))), (((7851341850323229225ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29397))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(signed char)4] [5ULL] [1] [(short)7] [(signed char)0] [(signed char)4])))));
                    var_17 = arr_9 [i_2];
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (unsigned int i_6 = 1; i_6 < 15; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) -1);
                    arr_26 [i_6] [(unsigned char)12] [i_6] [i_7] = ((/* implicit */short) max((var_8), (2029155907471922614ULL)));
                }
            } 
        } 
    } 
}
