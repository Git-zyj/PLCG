/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45433
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 9223372036854775795LL)))) <= (var_13)));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [3U] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (~(-9223372036854775796LL));
                                arr_14 [i_0] [4ULL] [i_0 - 1] = ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)135)) ? (726236700747094244ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))));
                                arr_15 [i_0] [i_0] [(_Bool)1] [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */signed char) ((short) 2147483647));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 ^= ((/* implicit */_Bool) (((-(var_10))) | (min((((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-84)))), (((((/* implicit */_Bool) -9223372036854775795LL)) ? (7936U) : (((/* implicit */unsigned int) 11))))))));
    var_16 ^= ((/* implicit */unsigned int) var_13);
    var_17 |= ((/* implicit */unsigned char) var_6);
}
