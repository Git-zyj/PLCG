/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47392
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
    var_14 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) ((-7751941443467187109LL) / (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((arr_1 [i_0]) != (arr_1 [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) var_5)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (~(min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (var_13))), (((/* implicit */int) var_8))))));
    var_18 = ((/* implicit */short) var_2);
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 15; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) arr_10 [i_5] [i_4] [i_4]);
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min(((~(2270971451U))), (((/* implicit */unsigned int) arr_3 [i_2] [(_Bool)1])))))));
                                var_21 = ((/* implicit */unsigned long long int) arr_6 [i_6] [i_3]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(((min((((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_4 + 3] [(unsigned char)8] [i_2 + 2] [i_2])), (var_6))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [6ULL] [i_4 - 1] [i_2 - 3] [i_2]))))))))));
                }
            } 
        } 
    } 
}
