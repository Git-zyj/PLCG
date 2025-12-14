/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27095
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
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((/* implicit */int) var_8)) - (182)))))) ? (min((((/* implicit */long long int) var_1)), (2501810688580951554LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) 335395808)) ? (281474976710528ULL) : (((/* implicit */unsigned long long int) 335395804)))))))))));
    var_14 = ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (18446462598732841087ULL) : (((/* implicit */unsigned long long int) -2501810688580951539LL)));
    var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -335395783)))) ? (((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)448)) : (((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-2)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min(((signed char)-2), ((signed char)16)))) : (((/* implicit */int) var_6)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((max((2931693128U), (((/* implicit */unsigned int) (unsigned char)167)))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) ((var_4) != (2501810688580951520LL)))) : ((~(((/* implicit */int) (signed char)-113))))))));
                arr_6 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(18446462598732841084ULL))))));
                var_16 = ((/* implicit */unsigned char) ((int) ((unsigned char) var_10)));
            }
        } 
    } 
}
