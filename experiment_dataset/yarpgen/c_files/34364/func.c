/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34364
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1672613868)) ? (var_16) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (1295022310))))))) ? ((-(max((var_13), (((/* implicit */int) (_Bool)1)))))) : ((~(((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (short)-28274)) : (((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((int) ((((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (signed char)-117)))) < ((~(((/* implicit */int) arr_1 [i_0] [i_1])))))));
                var_18 = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (signed char)112)) - (99))))), (((/* implicit */int) ((((((/* implicit */int) (short)28274)) | (((/* implicit */int) (unsigned char)177)))) != (((((/* implicit */_Bool) (signed char)56)) ? (2147483647) : (((/* implicit */int) (signed char)31)))))))));
                var_19 = ((/* implicit */unsigned short) (~(((3224480248U) | (((((/* implicit */_Bool) (unsigned short)43173)) ? (2185841832U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)21914)))))))));
                arr_7 [i_1] [i_0] = (((((((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_0 [i_0] [i_1])))) - (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) (signed char)-117))))))) != (((/* implicit */int) min(((short)28292), (((/* implicit */short) (_Bool)1))))));
                /* LoopSeq 1 */
                for (int i_2 = 4; i_2 < 9; i_2 += 2) 
                {
                    var_20 = ((unsigned short) (_Bool)1);
                    var_21 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) * (0ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_10 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_0]);
                }
            }
        } 
    } 
}
