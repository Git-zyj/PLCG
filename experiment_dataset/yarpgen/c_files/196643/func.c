/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196643
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
    var_16 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_13 [i_3] [i_2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (short)-31366)))) >> (((((((/* implicit */_Bool) var_7)) ? (var_2) : (9223372036854775807LL))) + (356999086528932866LL)))));
                                arr_14 [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_2] [i_4 + 1] = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_5)) > (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)84)))))))));
                                arr_15 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) var_3)))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_0 + 2] [i_2] = ((/* implicit */unsigned long long int) 6923828265729026633LL);
                    arr_17 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? ((((_Bool)0) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_15)) ? (var_15) : (17530825666686552340ULL)))));
                    arr_18 [i_2] [i_1 + 2] [i_2] [i_0] = ((/* implicit */int) ((((var_4) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) : (max((-3339926101007631494LL), (((/* implicit */long long int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_17 = 15643772966890118088ULL;
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (_Bool)0))));
}
