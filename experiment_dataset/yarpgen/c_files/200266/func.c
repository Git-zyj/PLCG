/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200266
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_10) >> (((var_11) - (15709690509225907524ULL))))))));
        var_13 = ((_Bool) arr_0 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_14 = ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)116)) ? (arr_4 [i_1 + 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140)))));
    }
    for (short i_2 = 1; i_2 < 16; i_2 += 4) /* same iter space */
    {
        arr_7 [(signed char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -8022372651823616409LL)) ? (((/* implicit */int) (short)24622)) : (((/* implicit */int) (unsigned char)255))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned int) arr_2 [i_4]);
                        arr_16 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)123))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) var_5)))))) & ((-(((var_11) + (((/* implicit */unsigned long long int) var_2))))))));
                    }
                } 
            } 
        } 
        var_17 -= ((/* implicit */long long int) ((unsigned long long int) var_10));
    }
    var_18 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
}
