/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233990
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_6 [i_0 + 1] [i_1] [i_0] [i_2 - 3]))) / (((1201171981) | (((/* implicit */int) (unsigned short)6))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)6)) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)6)) < (arr_2 [i_1]))))))) & (((/* implicit */int) (short)-10906))));
                    arr_9 [i_2] [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) var_2);
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_3 + 1] [i_4] [i_4] = ((/* implicit */unsigned short) max((((max((((/* implicit */unsigned int) (_Bool)0)), (var_10))) * (arr_5 [i_0]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_1] [i_1] [i_2 + 1] [i_3 - 1] [i_4])), ((unsigned short)65529))))));
                                var_20 = ((/* implicit */unsigned long long int) max((((((min((arr_2 [i_0]), (((/* implicit */int) (signed char)-21)))) + (2147483647))) << (0ULL))), (((/* implicit */int) ((((/* implicit */_Bool) 2869974555U)) || (((/* implicit */_Bool) 0ULL)))))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_3 - 4])) ? (((((/* implicit */int) (signed char)70)) + (arr_14 [i_0] [i_1] [i_2 - 2] [4ULL] [0ULL]))) : ((+(((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 + 1])))))))));
                                var_22 = ((/* implicit */int) ((((3981474908587358187ULL) | (((/* implicit */unsigned long long int) arr_1 [i_2 - 1])))) & (((/* implicit */unsigned long long int) 1295774598U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 |= ((/* implicit */unsigned char) var_0);
}
