/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214254
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
    var_20 = ((/* implicit */unsigned int) (unsigned char)1);
    var_21 = ((/* implicit */short) var_2);
    var_22 = (-((+(max((var_17), (((/* implicit */unsigned int) (unsigned short)6827)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) ((unsigned short) min((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) min((667548175), (((/* implicit */int) var_5))))))));
                arr_8 [i_1] = ((/* implicit */short) (_Bool)1);
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((unsigned long long int) arr_10 [i_4] [(short)5]));
                                var_24 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_4 [i_0] [i_3 + 2])))), (((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned short) var_12)))))));
                            }
                        } 
                    } 
                } 
                var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)58708))))) ? (0LL) : (((long long int) (unsigned short)46253))));
                var_26 ^= ((/* implicit */_Bool) max((arr_0 [i_1 + 2] [i_1 + 1]), (arr_2 [i_1 + 2])));
            }
        } 
    } 
}
