/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240169
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_6)), (((short) ((((/* implicit */unsigned long long int) -1767925259125991005LL)) ^ (1298470338176251210ULL)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) ((((long long int) 1767925259125991004LL)) % (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_0 [i_0])))), (((int) arr_0 [i_0]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_6))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -6393117035141091878LL)) ? (1767925259125991012LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-30719)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)29586)), (11U)))))) ? (((/* implicit */long long int) 1826664226)) : (-1767925259125991023LL)));
    var_21 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            {
                var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) arr_6 [(short)6]))), (arr_9 [i_2] [i_3] [i_2])))) ? (min((max((1767925259125991022LL), (-1767925259125991023LL))), (((-1767925259125991023LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))))))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_2 [i_2] [(unsigned short)6])))))));
                /* LoopNest 3 */
                for (signed char i_4 = 3; i_4 < 9; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_23 = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_5 + 1]))))));
                                arr_22 [i_2] [i_3] [i_5] [i_2] = ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 12275454379887371056ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-10521)))) | ((~(((/* implicit */int) (short)-24167))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) -1767925259125991023LL)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_2])))))));
                arr_23 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((12275454379887371056ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))))))));
                var_25 = ((/* implicit */int) ((short) ((((var_15) << (((arr_9 [i_2] [i_3] [i_2]) - (4623699983446608351LL))))) << (((min((var_1), (var_14))) + (3904229409626595138LL))))));
            }
        } 
    } 
}
