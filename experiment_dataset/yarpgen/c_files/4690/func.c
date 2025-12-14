/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4690
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */int) max((min((-1912051897458550578LL), (((/* implicit */long long int) arr_8 [2] [(short)22] [(short)22] [i_3 + 2])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3 + 2])))))));
                            arr_10 [18U] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3 + 3])) != (((/* implicit */int) arr_8 [i_2] [i_3] [i_3] [i_3 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) arr_8 [i_1] [i_3] [i_3 + 1] [i_3 - 1]))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] [22] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_1]))))), (-1690443369502169007LL)));
                arr_12 [i_0] = ((/* implicit */unsigned int) (~(((int) var_3))));
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_0]))) ^ (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                var_12 |= ((/* implicit */unsigned int) -624858216);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_3)))) && (((/* implicit */_Bool) min(((short)-64), ((short)-15608))))))), (var_1))))));
    var_14 |= ((/* implicit */short) var_3);
    var_15 = ((/* implicit */unsigned short) min((max((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))), (((/* implicit */unsigned long long int) ((signed char) var_9))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (short)7208))))))));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 2; i_4 < 23; i_4 += 4) 
    {
        var_16 = ((/* implicit */long long int) var_9);
        arr_16 [i_4] = ((/* implicit */signed char) arr_8 [i_4 - 2] [i_4] [i_4] [i_4 - 2]);
    }
}
