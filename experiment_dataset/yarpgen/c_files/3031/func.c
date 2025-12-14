/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3031
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) (+(((0U) % (3479083117U)))));
                                var_11 = ((((unsigned int) (+(3248839712U)))) / (((((/* implicit */_Bool) arr_6 [(unsigned char)11] [(unsigned char)11] [i_0])) ? (arr_3 [i_0] [10U] [i_0]) : (((unsigned int) arr_8 [14ULL] [i_1] [i_1])))));
                            }
                        } 
                    } 
                    arr_12 [8U] [i_2] [16U] = ((/* implicit */unsigned int) (unsigned char)248);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_13 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) var_2))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 512729182U)))))))));
    var_14 = ((/* implicit */unsigned long long int) var_2);
}
