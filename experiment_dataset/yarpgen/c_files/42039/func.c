/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42039
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
    var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_2)), (min((var_5), (((/* implicit */unsigned long long int) min(((signed char)86), ((signed char)87))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_14 |= ((/* implicit */unsigned char) ((short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) * (2130039152U))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(short)0] = ((/* implicit */short) ((unsigned char) 694584228U));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_8 [(short)4] [i_1] [(_Bool)1] [i_1] [i_0])))), (max(((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2] [i_1] [i_0])), (var_7))))))));
                            }
                        }
                    } 
                } 
                var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)87)) ? (((17046464025954001777ULL) << (((268690537143674428ULL) - (268690537143674372ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */int) min(((short)-11694), (((/* implicit */short) (unsigned char)167))))) : (((/* implicit */int) (unsigned short)2224))));
            }
        } 
    } 
}
