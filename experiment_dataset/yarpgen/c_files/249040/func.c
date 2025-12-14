/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249040
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
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)15360))))) ? ((-(13330262527897518050ULL))) : (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_4)) : (var_5))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_3 [(unsigned char)7]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)50175)))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_1] [i_1] [i_2] [13LL] [i_0] [i_1])), (var_11)))))) << (((((int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) + (13)))));
                            var_18 = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [9] [i_2] [i_0] [i_0]);
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)104)) ? ((~(((/* implicit */int) max((arr_2 [i_0] [i_1] [i_0]), (((/* implicit */unsigned char) arr_4 [i_0]))))))) : (((/* implicit */int) arr_0 [i_1] [i_2]))));
                            var_20 *= ((/* implicit */unsigned long long int) ((unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1])) : (((/* implicit */int) (unsigned short)50176)))))));
                        }
                    } 
                } 
                var_21 *= ((/* implicit */unsigned char) arr_4 [i_1]);
                var_22 ^= ((/* implicit */unsigned long long int) (+((~(((((/* implicit */_Bool) (unsigned short)15360)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_1]))))))));
            }
        } 
    } 
}
