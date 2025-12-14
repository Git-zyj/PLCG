/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242869
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [(unsigned char)9] [(unsigned char)9] [0LL] [(unsigned char)2] [(unsigned char)2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */int) var_0)) - (((/* implicit */int) var_8))))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_8))))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [10LL] |= ((/* implicit */signed char) var_8);
                                var_10 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_9 [i_4 - 1])))) ? ((~(((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_0))))))) : ((~(((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_6)))))))));
                            }
                        } 
                    } 
                } 
                var_11 += ((/* implicit */_Bool) ((min((((/* implicit */int) var_2)), ((-(((/* implicit */int) (_Bool)1)))))) + (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_1])) + ((+(((/* implicit */int) (unsigned char)15))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) max((min((((/* implicit */int) var_2)), ((-(((/* implicit */int) var_1)))))), ((((~(((/* implicit */int) (signed char)-45)))) % (((/* implicit */int) (unsigned short)60216))))));
}
