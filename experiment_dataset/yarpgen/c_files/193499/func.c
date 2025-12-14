/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193499
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 ^= var_3;
        var_19 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned short)7271))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775797LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_2 [i_1] [i_1])))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (var_1) : (((/* implicit */unsigned long long int) (+(2303591209400008704LL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 3; i_2 < 21; i_2 += 2) 
        {
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_16))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((var_14) << (((((/* implicit */int) arr_4 [i_2 - 2])) - (14634))))))));
        }
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_12 [i_1] [i_3 - 1] [i_4] [i_3 - 1] = (-(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)0)))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_22 ^= ((unsigned long long int) max((((/* implicit */int) min((((/* implicit */short) var_17)), ((short)-28159)))), (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_5])) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) var_3))))));
                                arr_21 [i_1] [i_1] [i_5] = ((/* implicit */short) 13ULL);
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (-31657797) : (((/* implicit */int) (short)32744))));
                                var_24 -= ((/* implicit */short) var_14);
                            }
                        } 
                    } 
                    var_25 ^= ((/* implicit */unsigned char) (signed char)84);
                }
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
    {
        arr_24 [i_7] [i_7] = ((/* implicit */long long int) 0ULL);
        arr_25 [i_7] [(unsigned char)16] = ((/* implicit */unsigned short) var_14);
    }
    var_26 = ((/* implicit */unsigned int) 1707202027);
    var_27 = ((/* implicit */long long int) (-(var_1)));
    var_28 ^= ((/* implicit */signed char) var_1);
}
