/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247839
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [2LL] [i_1 + 1] &= ((/* implicit */_Bool) min(((short)8979), (((/* implicit */short) (!(((/* implicit */_Bool) (+(-9223372036854775798LL)))))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_0] [i_1])))) ? (((/* implicit */int) arr_0 [i_0])) : ((~(((/* implicit */int) arr_1 [i_0] [i_1]))))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_13 [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_2]))))) : (((18446744073709551594ULL) + (((/* implicit */unsigned long long int) 134201344))))));
                    arr_14 [i_3] &= ((/* implicit */short) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (short)-8981))))));
                }
            } 
        } 
    } 
}
