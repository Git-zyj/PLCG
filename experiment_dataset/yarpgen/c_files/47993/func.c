/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47993
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
    var_16 |= ((/* implicit */unsigned char) max((var_2), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_6)))) * (((/* implicit */int) var_5)))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) * (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (18446744073709551614ULL)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (~((~(max((10ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]))))))));
                arr_6 [i_0] [i_0] [i_1] = arr_0 [i_0 + 1];
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    var_19 -= ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_10 [(unsigned char)7] [i_0] [(unsigned char)7] [(unsigned char)7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((long long int) 6772424424968265481ULL))), (20ULL)));
                    arr_11 [(unsigned short)3] &= ((/* implicit */short) arr_5 [i_1] [i_1]);
                }
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    arr_16 [i_0] [i_0] = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_8 [(signed char)4] [i_0 - 1]))))));
                    var_20 -= ((/* implicit */signed char) arr_3 [i_0 + 1]);
                    var_21 -= ((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 &= ((/* implicit */_Bool) max((min((18446744073709551614ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))), (0ULL)));
                                arr_21 [i_0] [i_3] [i_0] [(signed char)0] = ((/* implicit */signed char) (_Bool)0);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
