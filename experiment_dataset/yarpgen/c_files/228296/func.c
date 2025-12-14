/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228296
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
    var_12 = ((/* implicit */unsigned long long int) (short)1502);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -3008201146592778565LL)) ? (((/* implicit */int) (short)-20094)) : (((/* implicit */int) min(((short)-21918), (var_9))))))));
                                var_14 = ((/* implicit */_Bool) 1305437623);
                                var_15 = ((/* implicit */unsigned long long int) (-(((var_0) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20095))))))))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)2), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_4 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4 + 1]))))) : (((unsigned int) arr_2 [i_4 - 2]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((unsigned char) -337163719))) ? (var_1) : ((~(arr_9 [i_2] [i_1] [i_2] [i_1 - 1] [(unsigned short)12] [11U]))))));
                }
            } 
        } 
    } 
}
