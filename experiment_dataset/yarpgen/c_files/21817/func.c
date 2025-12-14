/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21817
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(9052312796046383001ULL))), (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL)))))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1])))));
                        var_16 = ((/* implicit */short) arr_3 [i_3]);
                    }
                    arr_13 [i_0 + 1] [i_1] [i_2] |= ((/* implicit */int) 0LL);
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned char) (-(4955973289787623862LL)))))));
                    arr_14 [i_0 - 1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) arr_1 [6U] [6U])) : ((~(var_13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_11)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 19; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (signed char i_6 = 4; i_6 < 16; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (short)15360)))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [1ULL] [i_5])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 3; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 1712022349)) || (((/* implicit */_Bool) (short)15360))))))));
                                arr_26 [i_4] [i_5] [i_7] [i_6] [(_Bool)1] [i_5] [i_8] = 2033503223U;
                                var_20 = ((/* implicit */unsigned short) var_11);
                                arr_27 [8U] [i_7] [i_5] [i_6 + 4] [3U] [i_8] [i_8] = ((/* implicit */int) arr_19 [i_6] [i_7] [i_8]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) var_8)))))))) ? (arr_25 [i_4] [i_5] [3U] [i_6 + 3] [12LL] [i_4]) : (((/* implicit */unsigned long long int) arr_12 [i_4] [i_5] [i_6 - 1] [i_6]))));
                }
            } 
        } 
    } 
}
