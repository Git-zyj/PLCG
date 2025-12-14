/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23256
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(var_9)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_10 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) -304587052)) && (((/* implicit */_Bool) 1854253131))))), (((((((/* implicit */int) var_0)) + (2147483647))) << (((((((/* implicit */int) arr_15 [(unsigned short)14] [i_4 + 1] [i_0] [i_4 - 1] [i_4])) + (2269))) - (23)))))))) : (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) -304587052)) && (((/* implicit */_Bool) 1854253131))))), (((((((/* implicit */int) var_0)) + (2147483647))) << (((((((((/* implicit */int) arr_15 [(unsigned short)14] [i_4 + 1] [i_0] [i_4 - 1] [i_4])) + (2269))) - (23))) - (23081))))))));
                                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (-(((/* implicit */int) ((-304587076) < (((((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_3 - 1] [i_4])) & (((/* implicit */int) var_4))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) var_5);
}
