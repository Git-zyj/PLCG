/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236745
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
    var_18 = ((/* implicit */int) (-(1073741823U)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((13489252517317348658ULL) << (((arr_0 [(unsigned short)4]) - (18417510569509708261ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)35)) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16063)) & (((/* implicit */int) (unsigned short)15783)))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)13084)), ((unsigned short)4057)))))))));
                                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(arr_11 [i_0] [i_4] [i_4] [i_3] [i_4] [(signed char)10] [(short)6])))), ((~(max((4294967295U), (7U)))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */short) 1616758088U);
                var_21 = ((/* implicit */unsigned short) min((var_21), ((unsigned short)9089)));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (+(max((var_8), (((((/* implicit */_Bool) 13489252517317348658ULL)) ? (var_1) : (8610280484039405967ULL))))))))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (arr_3 [i_1])));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) var_9);
}
