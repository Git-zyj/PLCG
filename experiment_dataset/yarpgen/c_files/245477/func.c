/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245477
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
    for (long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_3] [i_0 - 1] [i_3])) >= (((/* implicit */int) arr_8 [i_2] [i_2] [i_0 + 2] [i_1])))))));
                                var_11 = ((/* implicit */long long int) 17777261041695555707ULL);
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */long long int) var_2);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 8; i_6 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_2)) ? (0LL) : (arr_0 [3U]))))) + (((/* implicit */long long int) var_2))));
                                arr_20 [i_0] [i_5 + 1] [i_2] [i_5] [i_6] = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) 0LL)) : (6860958636604609505ULL));
                            }
                        } 
                    } 
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) 0LL)) : (14734959169590609444ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (short)-15115))))) : ((+(((((/* implicit */_Bool) -9165111271964632058LL)) ? (-3240272643592836314LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [10LL] [(_Bool)1]))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (4294967295LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-22719)))));
}
