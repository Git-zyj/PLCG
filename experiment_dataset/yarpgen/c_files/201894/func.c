/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201894
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
    var_10 = ((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (117440512)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((unsigned short) var_5));
                    var_11 = ((((/* implicit */_Bool) (~((~(-336137393)))))) ? (-5785132688028188192LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20787)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19236))) : (10463180660747524813ULL)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((signed char) (_Bool)1)))))));
                    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */short) (+(((((((/* implicit */int) min((((/* implicit */short) var_3)), (var_6)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7))))) - (1)))))));
        var_13 = ((/* implicit */unsigned short) var_7);
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) 68719476735ULL)))))) ? (((/* implicit */long long int) (+((+(((/* implicit */int) var_8))))))) : (((((/* implicit */long long int) ((/* implicit */int) ((short) 2824478037U)))) - (max((((/* implicit */long long int) var_8)), (var_9)))))));
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_0))) >> (((((/* implicit */int) var_2)) - (36124)))));
}
