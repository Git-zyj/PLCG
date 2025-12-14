/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193592
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
    var_20 = ((((((((/* implicit */_Bool) ((((/* implicit */int) (short)5708)) / (((/* implicit */int) var_3))))) ? ((+(((/* implicit */int) var_11)))) : ((+(((/* implicit */int) var_14)))))) + (2147483647))) << (((((/* implicit */int) (short)15626)) - (15626))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_21 -= ((/* implicit */unsigned short) arr_5 [i_2] [i_1] [(short)0] [i_2]);
                    arr_6 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) min((arr_0 [(unsigned short)17]), (((/* implicit */int) arr_4 [i_0] [(unsigned short)4]))))) <= (((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) - (0LL))))))) - (0LL)));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) << ((((~(min((arr_0 [i_2]), (((/* implicit */int) (unsigned short)10)))))) - (1085499168))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) arr_0 [i_2]);
                                arr_11 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */_Bool) arr_3 [i_0]);
                                var_24 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-18601)) + (2147483647))) << (((((/* implicit */int) (unsigned short)24702)) - (24702)))))), (((max((var_5), (((/* implicit */unsigned int) arr_5 [(short)19] [(short)19] [(short)19] [i_3])))) << (((min((((/* implicit */unsigned int) (signed char)87)), (var_6))) - (79U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 *= ((/* implicit */unsigned int) (short)-995);
    var_26 -= ((/* implicit */int) var_10);
}
