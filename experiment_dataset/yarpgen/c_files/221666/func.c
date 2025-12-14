/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221666
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (min((((/* implicit */long long int) var_3)), (((long long int) arr_0 [i_0] [i_0]))))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_0])), (var_2))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) arr_17 [i_3] [i_3] [i_3])))))), (((signed char) var_10))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -322669018)) & (max((((/* implicit */unsigned long long int) (unsigned short)0)), ((~(18446744073709551615ULL)))))));
                    var_17 = ((/* implicit */unsigned short) (((-(arr_5 [i_3] [i_4 + 1]))) / ((~(((/* implicit */int) arr_7 [i_4 + 1] [0LL]))))));
                    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)0))));
                }
            } 
        } 
    } 
}
