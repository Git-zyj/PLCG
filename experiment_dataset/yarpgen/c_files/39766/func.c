/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39766
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
    var_18 -= ((/* implicit */int) max(((-(min((-9181383129305235611LL), (((/* implicit */long long int) -1)))))), (((/* implicit */long long int) var_3))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2 - 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((3635141060U), (((/* implicit */unsigned int) (unsigned short)42103))))) ? ((-(-1777172572))) : (((((/* implicit */int) (signed char)-79)) % (((/* implicit */int) (unsigned short)35353)))))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)22624)) & (((/* implicit */int) (signed char)2))))) == (max((((/* implicit */long long int) 3407644335U)), (4333256312745891132LL))))))));
                    arr_10 [(signed char)7] [i_1 + 1] [(signed char)7] [i_2 - 1] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (short)-21187))) > (4333256312745891132LL))) && (((/* implicit */_Bool) ((long long int) 7LL)))));
                }
            } 
        } 
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)8745)) ? ((+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32752))) : (-3614271418689621722LL))))) : (((/* implicit */long long int) (-2147483647 - 1)))));
    }
    var_20 = ((/* implicit */unsigned int) var_17);
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 15850128491851100841ULL)) ? (((/* implicit */int) (short)48)) : (((/* implicit */int) (short)-1)))) % (((/* implicit */int) var_17)))))));
}
