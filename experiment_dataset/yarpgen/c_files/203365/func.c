/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203365
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 &= ((/* implicit */short) ((((var_0) / (((/* implicit */long long int) -2147483642)))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)1)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) min((max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)226))))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 9223372036854775807LL)))) + (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_18)))));
                    var_22 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_11))))));
                    arr_16 [i_3] [i_3] [i_2] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned char) (unsigned char)248))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -9223372036854775790LL)))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_16) : (1ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (short)-22656)) | (((/* implicit */int) (short)-22656)))))))));
                }
            } 
        } 
    } 
    var_23 |= ((/* implicit */unsigned char) var_17);
}
