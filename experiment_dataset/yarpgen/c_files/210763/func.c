/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210763
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
    var_20 *= ((/* implicit */unsigned char) var_15);
    var_21 = ((/* implicit */unsigned int) var_3);
    var_22 = ((/* implicit */unsigned short) ((var_7) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_19)) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) arr_0 [i_0] [(unsigned short)12]);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((var_7) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_0] [13LL] [i_2] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_2] [(signed char)3] [i_0])))) : (((/* implicit */int) arr_1 [i_2 + 2]))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_8 [i_0 - 3] [i_0] [i_0 - 2] [i_1]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_19))));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((((/* implicit */_Bool) var_2)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
