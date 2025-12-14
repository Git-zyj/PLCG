/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228845
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
    var_14 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((~(-653655030))), (((/* implicit */int) (unsigned char)0))));
                            arr_11 [i_1] [i_0] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_2] [i_3]);
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 18446744073709551606ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) -653655030))))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (+(arr_9 [i_0]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_5 - 1] [i_0] [i_5] = ((/* implicit */unsigned short) (-((+(((int) arr_2 [i_0]))))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)131))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) 4064ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_13 [(unsigned short)12] [(unsigned short)12] [(unsigned short)12]) : (((/* implicit */unsigned long long int) var_13)))))))))))));
                            var_16 &= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_1] [i_0] [i_5 - 1] [i_5 - 1]))))) : (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_3 [i_0])) - (150)))))))), (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_0] [i_1] [i_5 - 1])) ? (min((((/* implicit */long long int) 0)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))))));
                            var_17 = ((/* implicit */signed char) ((unsigned short) 10LL));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 *= var_11;
}
