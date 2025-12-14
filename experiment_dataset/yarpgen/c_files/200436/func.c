/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200436
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_15), ((-(var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-116)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)120))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (-2701019651688479650LL)))));
                        arr_11 [i_0] [i_2 + 1] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_15))))) + ((+(var_13)))));
                        var_18 = ((/* implicit */_Bool) var_10);
                        arr_12 [(_Bool)0] [i_0] = ((/* implicit */signed char) 2701019651688479645LL);
                    }
                } 
            } 
        } 
        arr_13 [0] [0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2701019651688479649LL) : (var_14)))) ? (min((((/* implicit */long long int) var_12)), (-2701019651688479652LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2701019651688479638LL)) ? (-2701019651688479669LL) : (((/* implicit */long long int) var_10)))))));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (2701019651688479660LL) : (var_14)));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((-2701019651688479642LL) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2701019651688479642LL)) ? (((/* implicit */int) var_0)) : (var_10)))) ? (-2701019651688479634LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)39)) ? (var_10) : (((/* implicit */int) var_16))))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_24 = ((/* implicit */_Bool) -2701019651688479629LL);
        arr_18 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_16)))) ? (33554431U) : (((/* implicit */unsigned int) var_12))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (var_10)))) ? (((((/* implicit */_Bool) 5011587978364877053LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-2701019651688479650LL))) : (((/* implicit */long long int) (((_Bool)0) ? (4261412865U) : (((/* implicit */unsigned int) 402653184)))))))));
    }
    var_25 = ((/* implicit */_Bool) (signed char)-105);
    var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-103)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) var_10)) ? (-2701019651688479650LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-107)) * (((/* implicit */int) (signed char)-34))))) : (((var_11) % (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            {
                var_27 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) max((var_6), (var_6)))) ? (((((/* implicit */int) (unsigned char)128)) * (((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_0), ((signed char)37)))))));
                var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)24))) | (var_14)))) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (3864781282U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) << (((((((((((/* implicit */int) (signed char)20)) ^ (((/* implicit */int) (signed char)28)))) + (var_12))) + (735051055))) - (51)))));
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_10))));
            }
        } 
    } 
}
