/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33209
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
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) min((var_15), ((signed char)19)))) : (((/* implicit */int) (unsigned char)119))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)140)) - (((/* implicit */int) (unsigned char)120))))), (((18446744073709551608ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((arr_7 [i_0] [i_0] [i_1 + 1] [i_2]), (((/* implicit */short) arr_2 [i_0] [i_1] [i_1])))), (((/* implicit */short) min((arr_0 [i_1] [i_2]), (var_10)))))))) : (max((((/* implicit */unsigned long long int) var_17)), ((~(14852230760366302720ULL)))))));
                    var_19 += min((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) arr_9 [1ULL] [1ULL] [i_2] [i_2])) << (((3594513313343248910ULL) - (3594513313343248888ULL))))) : (((/* implicit */int) (unsigned char)114)))), (((/* implicit */int) (unsigned short)45343)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [(unsigned char)7] [i_0] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [15U] [2] [i_0])) : (((/* implicit */int) (unsigned short)48976))))))));
                                var_21 = min(((unsigned short)45343), ((unsigned short)45368));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_12);
    var_23 = ((/* implicit */short) (((((+(var_16))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)135)) - (135)))));
}
