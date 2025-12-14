/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47776
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
    var_20 |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_0)) ? (9223372036854775807LL) : (((/* implicit */long long int) 1822999074U)))) - (((/* implicit */long long int) ((/* implicit */int) var_14))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))))));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (min(((unsigned short)0), (((/* implicit */unsigned short) (short)(-32767 - 1))))))))));
    var_23 &= ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_24 &= ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) arr_0 [i_0 - 1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), ((!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1474842000164914760ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (9263203394384098030ULL))))))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_0] [i_1] [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32762))))))))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32762))) < (arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])))))))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (-(max(((+(((/* implicit */int) var_17)))), (((((/* implicit */_Bool) 3292477093U)) ? (((/* implicit */int) (unsigned short)8521)) : (((/* implicit */int) (unsigned short)8521)))))))))));
                            var_28 *= ((/* implicit */_Bool) arr_10 [i_0] [i_1] [(unsigned short)6] [i_3]);
                        }
                    } 
                } 
                var_29 *= ((/* implicit */_Bool) 938245126U);
            }
        } 
    } 
}
