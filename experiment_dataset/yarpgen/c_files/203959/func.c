/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203959
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_3] [3ULL] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */short) (signed char)127)))))) * (max((arr_10 [i_4] [i_3] [i_2] [i_1]), (arr_10 [i_4] [i_3 + 1] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (short)-19))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 15594294355419384356ULL))));
                                arr_14 [i_0] [i_1] [7ULL] [(short)13] [i_4 + 2] = ((/* implicit */int) ((short) 15594294355419384356ULL));
                                arr_15 [i_0] [i_1] [11U] [i_3] [i_4] = ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [11ULL] [i_2] [i_3])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) var_7)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        var_17 *= ((/* implicit */unsigned short) (_Bool)1);
                        arr_19 [22U] = ((/* implicit */_Bool) ((unsigned int) (+(((((/* implicit */int) (signed char)56)) / (-302252116))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_0 + 1])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) max(((signed char)-89), (((/* implicit */signed char) (_Bool)1))))), (max((((/* implicit */unsigned int) 2147483647)), (233341041U)))))) : (arr_3 [(_Bool)1] [i_1])));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (signed char)-44))));
                    }
                }
            } 
        } 
    } 
    var_20 -= 13;
}
