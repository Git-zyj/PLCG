/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47249
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
    var_17 = ((((/* implicit */_Bool) max((min((192895138U), (192895154U))), (((/* implicit */unsigned int) var_3))))) ? (4294967278U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) (~(((18U) & (192895127U)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_4] [i_2] [i_3] [i_4] = ((/* implicit */long long int) (((((~(((/* implicit */int) (!(((/* implicit */_Bool) -442664684197025543LL))))))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (442664684197025528LL)))))))));
                                var_19 |= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2] [i_2] [i_1]))))))))));
                                arr_13 [i_4] [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */long long int) var_5);
                                var_20 = max((((/* implicit */unsigned long long int) ((long long int) 1309276020))), (((unsigned long long int) 4294967272U)));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2)))))) : (((unsigned long long int) 192895137U)))))));
                    var_22 = ((/* implicit */short) (+((~(((int) arr_8 [(short)2] [(signed char)7] [(signed char)7] [(signed char)7] [i_0]))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_5)), ((short)0)))) ? (((/* implicit */int) ((((/* implicit */int) (short)-968)) < (((/* implicit */int) arr_8 [(short)5] [i_1] [i_2] [i_0] [i_2]))))) : ((+(((/* implicit */int) (short)-23965))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) var_1);
}
