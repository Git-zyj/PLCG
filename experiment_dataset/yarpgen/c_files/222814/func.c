/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222814
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
    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) max(((unsigned short)21), (((/* implicit */unsigned short) (short)-2548))))) + (((/* implicit */int) min((((/* implicit */short) var_17)), (var_3)))))) : (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_19 &= ((/* implicit */unsigned long long int) 2152142280862451648LL);
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))));
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!((!(var_17)))));
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((-9174828738741897430LL) + (9223372036854775807LL))))))) : (((/* implicit */int) (short)8710))));
                    var_22 = max((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_3] [i_4] [i_5]))))) * (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21521))) >= (arr_9 [i_3] [i_3])))), (((arr_9 [i_5] [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                }
            } 
        } 
    } 
}
