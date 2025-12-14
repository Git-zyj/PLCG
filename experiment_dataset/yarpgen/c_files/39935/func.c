/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39935
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (short)26381))));
                                var_12 *= ((/* implicit */unsigned long long int) ((int) (signed char)-78));
                                var_13 = ((/* implicit */long long int) min(((+(arr_10 [i_2 + 1] [i_4] [i_4] [i_4 - 2]))), (((/* implicit */unsigned long long int) (~(((int) var_0)))))));
                                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) var_8)) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) var_2))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
                {
                    for (unsigned short i_6 = 4; i_6 < 17; i_6 += 4) 
                    {
                        {
                            arr_21 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((signed char)77), ((signed char)79)))) ? ((~(((/* implicit */int) var_3)))) : (var_2))), ((~(min((var_6), (((/* implicit */int) var_3))))))));
                            var_15 = ((/* implicit */unsigned short) ((var_7) * ((~(max((4294967279U), (var_9)))))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [(_Bool)1] [i_0])) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) max((var_0), (var_8)))) : (((/* implicit */int) (short)-28435)))), (((/* implicit */int) arr_5 [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 4) 
                {
                    arr_27 [i_0] [i_1] [i_0] [i_7 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((long long int) arr_24 [i_1 + 2] [i_7 - 1])))));
                    arr_28 [i_1 + 2] [i_0] [i_7] = ((/* implicit */short) (~((~(arr_15 [i_1] [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 3])))));
                    var_16 ^= ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))));
                }
                for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    var_17 = ((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0]);
                    arr_33 [i_0] [(short)4] &= ((/* implicit */unsigned int) var_3);
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 3; i_10 < 15; i_10 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((signed char) 1051663741U));
                                arr_40 [i_0] [i_0] [i_8] [i_9] [(short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(var_5)))))) ? (((/* implicit */unsigned int) min((arr_3 [i_1 - 1] [i_1 - 1] [i_1]), (((/* implicit */int) arr_14 [i_1 + 1] [i_8] [i_8] [i_8 - 1] [i_8 + 1] [i_9 - 1]))))) : ((~(((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) var_6))))))));
                                var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */int) var_3)), ((~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_32 [6LL] [i_1] [i_8 - 1]))))))));
                                arr_41 [12LL] [12LL] [i_8 - 1] [i_1] [i_0] [12LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22533)) ? (2132462723) : (((/* implicit */int) ((signed char) arr_19 [i_10] [(short)0] [i_9 + 1] [(short)0] [i_1 + 2])))));
                                var_20 = ((/* implicit */long long int) ((short) max((arr_13 [i_9 - 1] [i_0] [i_0] [i_9 - 1] [i_10 + 2]), (var_0))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((/* implicit */short) (~(max((max((var_5), (var_5))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))))));
    var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((var_2), (((/* implicit */int) (signed char)-77))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)79))))) : (max((-632819414097148531LL), (((/* implicit */long long int) (short)-28420))))))));
}
