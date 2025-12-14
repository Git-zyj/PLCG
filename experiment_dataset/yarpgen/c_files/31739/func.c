/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31739
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
    var_16 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) ((_Bool) var_0))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (4592195809919119217LL) : (((/* implicit */long long int) var_11))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17135984280104948326ULL)) ? (((/* implicit */unsigned long long int) ((9223372036854775807LL) << (((((/* implicit */int) (unsigned char)160)) - (160)))))) : (16089259512214539257ULL)))) || (((((/* implicit */int) (short)-6985)) <= (((/* implicit */int) (unsigned char)62))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_3 + 1] [19ULL] [i_4] [19ULL] [i_0] [19ULL] = (-(((/* implicit */int) (unsigned char)242)));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */unsigned long long int) (-(-4592195809919119212LL)))) < (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_3] [(unsigned char)2])) ? (-3889425125593230933LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58647)))))), (min((((/* implicit */unsigned long long int) var_13)), (var_8))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
