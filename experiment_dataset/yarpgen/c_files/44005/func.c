/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44005
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
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
    var_20 *= ((/* implicit */signed char) var_18);
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_17))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [(_Bool)1]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((((arr_2 [i_0] [i_0] [i_0]) + (3406073788021778962LL))) - (23LL)))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_22 = arr_1 [i_1];
                    arr_7 [(signed char)10] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1])))))))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [(signed char)0] [i_0] [i_0])) * (((/* implicit */int) arr_3 [7])))) - (((/* implicit */int) arr_3 [i_1]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2])))))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_7))));
}
