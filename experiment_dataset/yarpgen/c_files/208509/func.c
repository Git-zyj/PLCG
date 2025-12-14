/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208509
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
    var_12 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_4 [i_1] [i_0])), (5590164630376538379LL)))));
                var_14 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) arr_1 [i_0])))));
                var_15 = ((/* implicit */signed char) (~(3890119405U)));
                var_16 = ((/* implicit */unsigned short) 1826465483U);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */int) arr_5 [i_0] [i_1]);
                    var_17 *= ((/* implicit */int) ((unsigned short) ((_Bool) (-(arr_6 [i_0])))));
                    arr_8 [i_0] [i_1] [(unsigned char)0] |= ((/* implicit */unsigned int) arr_5 [i_0] [i_1]);
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((2468501813U), (((/* implicit */unsigned int) (unsigned short)62414))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)3121), (((/* implicit */unsigned short) var_11))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_6 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                    var_19 = ((/* implicit */unsigned long long int) (+(((((-1949155891) + (2147483647))) >> (((/* implicit */int) ((_Bool) 9473925891908295627ULL)))))));
                }
            }
        } 
    } 
}
