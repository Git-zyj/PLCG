/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2873
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
    var_16 = ((((/* implicit */_Bool) max(((+(var_14))), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7)))))))) ? (18150656627244449534ULL) : ((((+(15775540879074012630ULL))) ^ ((~(2671203194635538985ULL))))));
    var_17 = 13862261535870732453ULL;
    var_18 = (-(max((var_2), (((/* implicit */unsigned int) (_Bool)1)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_8 [2U] [i_1 + 2] = 2671203194635538994ULL;
                    arr_9 [2U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) arr_2 [1ULL] [(unsigned char)5])))))) ? ((-(18446744073709551615ULL))) : (arr_0 [14ULL])));
                }
            } 
        } 
    } 
}
