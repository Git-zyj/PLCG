/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42921
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
    var_15 = ((/* implicit */signed char) var_3);
    var_16 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)85)) ? (15078358555812546058ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))))), (((/* implicit */unsigned long long int) var_7))));
                    var_18 = ((/* implicit */unsigned long long int) max((216172782113783808LL), (((/* implicit */long long int) (unsigned short)1950))));
                    arr_8 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_2 [i_1 + 1] [i_0 + 1]))), ((~(arr_2 [i_1 - 2] [i_0 + 1])))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (((~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (var_9))))) | (((/* implicit */long long int) max((2204565362U), (((/* implicit */unsigned int) (_Bool)1))))))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) (((~(((/* implicit */int) (short)30151)))) >= (arr_6 [i_0] [i_0] [i_0] [i_0])))) <= ((+(((/* implicit */int) (short)-27426))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 3; i_4 < 17; i_4 += 1) 
                    {
                        var_21 -= ((/* implicit */long long int) ((((_Bool) arr_6 [i_0] [i_0] [16] [i_4])) ? (arr_6 [(unsigned short)14] [14U] [14U] [i_0 - 2]) : (((/* implicit */int) arr_7 [i_4] [i_1] [i_1] [i_1 + 1]))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_10 [i_2] [i_1 + 1] [i_0]) > (((/* implicit */long long int) var_10))))) - (((/* implicit */int) (!(((/* implicit */_Bool) 2021559900)))))));
                    }
                }
            } 
        } 
    } 
}
