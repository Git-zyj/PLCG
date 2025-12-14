/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235192
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
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)31))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 2] [i_0 - 2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((long long int) (unsigned char)120)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 17361128765842022701ULL)) || (((/* implicit */_Bool) 1085615307867528914ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [(unsigned short)12] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) var_6);
                                var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47647))) : (var_4)))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (unsigned char)215))));
                    arr_14 [i_0] = ((/* implicit */short) arr_3 [i_0] [i_1 + 2] [i_0 - 1]);
                }
            } 
        } 
    } 
}
