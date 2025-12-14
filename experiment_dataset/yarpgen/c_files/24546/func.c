/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24546
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
    var_19 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (unsigned char)160)) * (((/* implicit */int) (unsigned char)96)))));
    var_20 = ((/* implicit */signed char) (unsigned char)160);
    var_21 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((signed char) 7218209450486549023LL)))) ? (((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)37217)) - (37215))))) : (((/* implicit */int) ((signed char) 873193054283655668LL)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) == (-7218209450486549023LL))))) % (var_7)))) && (((/* implicit */_Bool) ((int) 4301872455333388627LL)))));
                                var_24 = ((/* implicit */signed char) (((((-(((/* implicit */int) var_3)))) == (((/* implicit */int) ((signed char) 437577472U))))) ? (((long long int) ((long long int) var_13))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18065)))));
                                var_25 = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */long long int) var_4)), (-7218209450486549023LL))));
                                var_26 = ((/* implicit */unsigned short) var_16);
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7218209450486549023LL)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (signed char)-124))))) || (((/* implicit */_Bool) min((-7218209450486549023LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (signed char)7))))))))));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */long long int) min((var_28), (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) -7218209450486549023LL)))))))))));
                var_29 = ((/* implicit */unsigned char) -543430641);
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) var_11);
}
