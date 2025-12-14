/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193752
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 ^= max((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)30)) ? (4254001539044690663ULL) : (arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) (short)2)), (11634577884356791186ULL))) : (arr_0 [i_0] [i_0]))));
        var_20 = ((/* implicit */int) (~(((unsigned int) ((unsigned int) (short)2)))));
        var_21 -= ((/* implicit */signed char) 15918431937171064081ULL);
        var_22 |= ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_23 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)46761))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_11 [i_3] [i_2] &= ((/* implicit */unsigned int) (+(25165824)));
                    var_24 = ((/* implicit */unsigned long long int) var_3);
                    var_25 += ((/* implicit */unsigned char) 21ULL);
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (+(((/* implicit */int) var_16)))))));
                }
            } 
        } 
        arr_12 [i_1 - 1] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-23))));
    }
    var_27 = ((/* implicit */unsigned short) (+(var_11)));
    var_28 = var_3;
}
