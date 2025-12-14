/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30990
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
    var_11 = ((/* implicit */long long int) (~(var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */signed char) ((int) (~(((/* implicit */int) (short)32756)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) var_10);
                            var_13 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)92))));
                            var_14 = ((/* implicit */long long int) ((unsigned long long int) ((signed char) 14381531459398679313ULL)));
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_1))));
                        }
                        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            arr_19 [i_3] [i_3] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */signed char) arr_6 [i_5] [i_2] [i_1]);
                            arr_20 [i_3] = ((/* implicit */unsigned char) ((14381531459398679311ULL) | (((/* implicit */unsigned long long int) var_4))));
                            var_16 = ((/* implicit */unsigned int) arr_17 [i_1]);
                        }
                    }
                } 
            } 
            var_17 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_0]))));
            var_18 = ((/* implicit */unsigned int) 4065212614310872303ULL);
        }
        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 14381531459398679313ULL)) ? (4065212614310872302ULL) : (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_6]))));
            var_20 = ((/* implicit */unsigned long long int) ((signed char) arr_5 [i_0] [i_6]));
            var_21 ^= ((/* implicit */short) 14381531459398679339ULL);
            arr_23 [i_0] [i_6] = ((/* implicit */unsigned int) (+(14381531459398679332ULL)));
        }
        for (int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 1; i_8 < 9; i_8 += 3) 
            {
                var_22 *= ((/* implicit */unsigned long long int) ((short) arr_25 [i_8 + 1] [i_8] [i_0]));
                arr_31 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 14381531459398679330ULL)) ? (((/* implicit */long long int) var_4)) : (arr_2 [i_0])));
                var_23 = ((/* implicit */unsigned short) (~(14381531459398679332ULL)));
            }
            arr_32 [i_0] [i_0] = ((unsigned int) (!(((/* implicit */_Bool) var_2))));
        }
        var_24 = ((/* implicit */short) 14381531459398679357ULL);
    }
}
