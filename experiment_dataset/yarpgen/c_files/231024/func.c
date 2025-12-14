/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231024
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
    var_17 = var_5;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */signed char) max((((/* implicit */int) arr_13 [i_1] [i_2 + 1] [i_2] [i_2 + 4] [i_2 + 4])), (min((((/* implicit */int) arr_13 [i_0] [i_2 - 2] [16] [i_2 - 1] [i_2 + 2])), (-775678974)))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)247);
                                arr_15 [14LL] [i_0] [i_2] [(signed char)11] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned short)15)))) ? (var_9) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) ^ (((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (arr_8 [i_0] [0LL] [3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((max((((/* implicit */unsigned long long int) 158443953104246971LL)), (min((((/* implicit */unsigned long long int) var_8)), (34359738367ULL))))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)-3)))) * (((/* implicit */int) ((158443953104246968LL) <= (-158443953104246972LL))))))))))));
                            }
                        } 
                    } 
                    var_20 = var_15;
                    arr_16 [i_0] [i_0] [i_1] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 34359738363ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-1)), ((short)-1))))) : (max((1448633172U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)19756)) >> (((158443953104246971LL) - (158443953104246940LL))))))))));
                }
            } 
        } 
    } 
}
