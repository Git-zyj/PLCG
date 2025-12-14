/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32709
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
    var_11 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3458764513820540928ULL)))) % (max((((/* implicit */long long int) (_Bool)1)), (3888308099353117223LL))))) << ((((-((-(var_5))))) + (5600000331945765243LL)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3] [i_4] [i_4] [i_1])) ? (((/* implicit */int) (short)-1010)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))))) ? (((long long int) ((3458764513820540928ULL) / (((/* implicit */unsigned long long int) 1879048192U))))) : (((/* implicit */long long int) ((unsigned int) (short)-999)))));
                                var_13 = ((/* implicit */short) 2106743119U);
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-993))) : (arr_0 [i_0])))) ? (((/* implicit */int) max(((short)-2053), ((short)976)))) : (((/* implicit */int) arr_5 [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((arr_1 [i_0 - 1] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) 2188224188U)) : (-7728575185753206674LL)))) : (((arr_2 [i_0] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0 + 4] [i_0 + 2] [i_0 + 4])))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)0));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */short) (~(max(((~(((/* implicit */int) (short)-26083)))), (((/* implicit */int) ((short) (_Bool)1)))))));
}
