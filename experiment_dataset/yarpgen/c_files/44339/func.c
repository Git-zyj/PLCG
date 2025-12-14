/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44339
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_14))) <= (((/* implicit */int) arr_8 [i_0] [i_0] [i_4 - 1]))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)2376)) % (((/* implicit */int) arr_0 [i_4]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2] [i_4])) ? (((/* implicit */int) (short)16899)) : (((/* implicit */int) (short)16776)))) <= ((-(((/* implicit */int) var_16)))))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_2] [i_3] [i_2] [i_2])), (var_1)))) ? (max((1832178526357988491ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_3])))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) max((((/* implicit */short) (signed char)(-127 - 1))), (arr_5 [i_1 - 3] [i_1 - 3])))) : (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 2] [i_4 - 1])) ? (((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 1] [i_4 + 1])) : (((/* implicit */int) arr_8 [i_1 + 3] [i_1 - 1] [i_4 - 1]))))));
                            }
                        } 
                    } 
                } 
                arr_14 [(unsigned char)3] [i_0] [i_0] = ((/* implicit */unsigned char) max(((short)-1), (((/* implicit */short) (_Bool)1))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) % (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [(unsigned char)6])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16894))) : (-1261541465583186043LL)))) % (var_2)))));
                var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 2] [6LL])) <= (((/* implicit */int) arr_10 [i_1 + 3] [i_1 - 3] [i_0])))))));
                var_23 = ((/* implicit */unsigned short) (short)-11);
            }
        } 
    } 
    var_24 = var_0;
}
