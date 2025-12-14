/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28025
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) (short)-12800)) ? (4758129349371451515ULL) : (5467318784335454861ULL)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-5))));
        var_20 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) 0))), ((-((-(486634468784718081ULL)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 21)) ? (21) : (((/* implicit */int) arr_5 [(short)2])))))) ? (((int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) -22)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(262143U)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)40267))))) : (((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_18)))))) ? (((/* implicit */int) ((unsigned char) ((unsigned long long int) 15458041059534341046ULL)))) : (((((/* implicit */_Bool) ((signed char) var_14))) ? ((~(((/* implicit */int) arr_5 [i_1])))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))));
    }
    var_22 |= ((/* implicit */unsigned short) ((signed char) ((signed char) 6761786103628145404ULL)));
    var_23 += ((/* implicit */signed char) ((_Bool) min((var_15), ((unsigned char)183))));
}
