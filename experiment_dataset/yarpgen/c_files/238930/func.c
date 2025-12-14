/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238930
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((max((var_4), (var_3))) - (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_11)))))) ? ((~(max((8841089766050817220ULL), (var_1))))) : (((/* implicit */unsigned long long int) ((((var_13) + (2147483647))) >> (((var_3) - (13802712381370102919ULL))))))))));
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((var_15) == (var_4)))) >= (((/* implicit */int) var_16)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) (~(-878994202)))) : (((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (var_1)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) arr_0 [i_0]);
        var_22 = ((/* implicit */int) var_14);
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((max((var_15), (3565550078471303998ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1])))))))), ((-((+(var_3)))))));
        var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((var_17) & (var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) var_18)) ? (16044844832673236037ULL) : (((/* implicit */unsigned long long int) arr_4 [i_1]))))))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 4; i_2 < 11; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (min((((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) var_18))))) ? (((arr_14 [i_1] [i_2] [12] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 2] [i_1])) ? (((/* implicit */unsigned long long int) (+(-1342104838)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_17)) : (var_11)))))))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((((/* implicit */_Bool) var_13)) ? (arr_14 [i_1] [i_2] [8] [i_4]) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-1695019822) : (((/* implicit */int) var_6))))))))))));
                        var_27 = (-(2401899241036315598ULL));
                    }
                } 
            } 
        } 
    }
}
