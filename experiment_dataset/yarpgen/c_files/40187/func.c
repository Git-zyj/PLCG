/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40187
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    arr_7 [i_0] [(unsigned char)5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((((/* implicit */int) arr_3 [i_0] [i_0])) / (((/* implicit */int) arr_3 [i_0] [i_1])))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1])))));
                    var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)28369)) ? (2067606453) : (((/* implicit */int) arr_4 [i_0] [i_0])))) << (((((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])) - (3)))))), (min((min((arr_0 [(unsigned char)5]), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [1LL] [i_0])) << (((-1027640818) + (1027640832))))))))));
                }
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((-1027640818) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0])) - (165)))));
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned long long int) var_6);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_13)) ? (((int) var_10)) : (((/* implicit */int) ((_Bool) 13965203367329439871ULL)))))));
}
