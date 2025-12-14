/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2382
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43537))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) 13093237068621415325ULL)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned char)50))))) | (var_7)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((short) 1372925023253680353ULL)))));
                var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)32756))));
                arr_4 [i_1] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)7))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                arr_10 [4U] = ((/* implicit */unsigned long long int) (+((-((~(((/* implicit */int) (short)28552))))))));
                arr_11 [i_3] [i_2] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 18446744073709551608ULL)) ? (5744945457140139069LL) : (((/* implicit */long long int) -1228673199)))) > (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)2473)))))));
            }
        } 
    } 
}
