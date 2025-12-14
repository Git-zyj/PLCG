/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37763
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
    var_18 = ((/* implicit */int) (+(3330487104U)));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */int) ((0ULL) == (4095ULL)))), (((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17)))))) : (var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_8)) ^ (4078ULL)))));
                var_21 = ((/* implicit */_Bool) arr_2 [2ULL] [10ULL] [10ULL]);
                arr_5 [i_0] [7ULL] [8ULL] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) ((10891375580104365116ULL) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32825)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (-(((((((((/* implicit */int) arr_6 [i_0] [10U] [10ULL])) % (((/* implicit */int) (short)-3560)))) + (2147483647))) << (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_1]))))))));
                            arr_12 [(short)7] [i_0] = ((/* implicit */int) ((((/* implicit */int) (short)3560)) > (((/* implicit */int) ((((/* implicit */unsigned int) ((468218401) & (((/* implicit */int) (short)(-32767 - 1)))))) >= (788884044U))))));
                            var_23 = ((/* implicit */short) arr_1 [i_0]);
                            arr_13 [11ULL] [6] [i_0] [i_3] [(_Bool)0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [(short)8])) & ((~(min((arr_10 [(unsigned short)10] [i_0] [(unsigned short)10] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [(signed char)11] [(short)0] [(signed char)2]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) var_9);
    var_25 = ((/* implicit */unsigned long long int) ((unsigned int) var_6));
}
