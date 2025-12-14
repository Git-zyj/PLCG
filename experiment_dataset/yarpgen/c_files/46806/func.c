/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46806
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-8976)) - ((((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (short)-8986)) ^ (((/* implicit */int) (unsigned char)245))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 5498579737295017056LL)) : (301600051049861725ULL)));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) : (arr_0 [i_0 + 1])))) ? ((+(((/* implicit */int) (short)127)))) : ((-(((/* implicit */int) (short)-4096))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2187210564U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_6)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 1798126367U)) ? (((/* implicit */int) var_5)) : (1466106043))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8965))) : (4294967295U)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_0 [2ULL])))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) 4173573797U)) ? (arr_0 [i_0 + 3]) : (-5783193327679563745LL))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    arr_11 [i_2] [i_2] = ((/* implicit */long long int) var_0);
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) var_10)))))));
                    arr_12 [(unsigned short)4] = ((/* implicit */short) var_6);
                }
            } 
        } 
        arr_13 [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_7))))));
    }
}
