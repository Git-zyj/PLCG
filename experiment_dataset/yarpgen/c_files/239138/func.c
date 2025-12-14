/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239138
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    arr_9 [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)7168)) ? (((((/* implicit */_Bool) 3861689957603803387LL)) ? (arr_5 [i_1] [i_2 + 1] [i_2 - 1]) : (6034036524254831685LL))) : (((/* implicit */long long int) (-((+(((/* implicit */int) (_Bool)1)))))))));
                    arr_10 [i_1] [i_1] = ((/* implicit */short) 2147483643);
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2 - 1] [i_2 + 4])) / (2147483643)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)58370)) ? (var_9) : (arr_4 [i_1])))) / (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) : (((((/* implicit */_Bool) var_9)) ? ((+(18446744073709551587ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 4] [i_2 - 1])))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            var_17 = (+(((((((/* implicit */_Bool) -436492742)) && (((/* implicit */_Bool) 553039768)))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) var_14)))))));
                            var_18 -= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2147483643)))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((short) arr_6 [i_0])))));
                            var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_3))) ? ((+(((/* implicit */int) arr_2 [i_3] [i_3])))) : (((((/* implicit */_Bool) 17188630681562788210ULL)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [(short)10])) : (((/* implicit */int) (unsigned char)192))))))) ? (((/* implicit */int) arr_14 [i_3] [i_1] [(signed char)0])) : ((+(((/* implicit */int) arr_8 [i_0]))))));
                            arr_15 [i_0] [i_0] [i_1] = ((/* implicit */short) var_8);
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */long long int) ((unsigned short) (+(-5257132607016793522LL))));
            }
        } 
    } 
    var_22 -= ((/* implicit */signed char) var_7);
}
