/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201032
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_7)))) << (((((/* implicit */int) var_0)) - (6722)))))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_7 [i_0 + 3] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1130279693762290648LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)50))))))) ? (((((/* implicit */_Bool) 8935339024822273561LL)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_5)))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_0 + 2]))))) ? (8935339024822273575LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_0 + 2]), (arr_4 [i_0 + 2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) 2ULL);
                var_17 = ((/* implicit */short) ((((/* implicit */long long int) 2221895847U)) % (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (unsigned short)21)) ? (8935339024822273561LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4])))))))));
            }
        } 
    } 
}
