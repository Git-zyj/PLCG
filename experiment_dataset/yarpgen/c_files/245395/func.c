/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245395
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
    var_13 += (+((+(((/* implicit */int) ((var_0) != (((/* implicit */int) var_10))))))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_6), (max((var_1), (var_10)))))) ? (((((/* implicit */int) ((_Bool) -426221400))) << (((/* implicit */int) max((var_7), (var_11)))))) : (((/* implicit */int) var_8)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_3 [(unsigned short)11] [i_0])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)60))))));
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned short) max((((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))) - (((unsigned int) var_7)))), (((/* implicit */unsigned int) var_11))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_16 |= ((/* implicit */unsigned char) arr_6 [i_1]);
                    var_17 *= ((/* implicit */_Bool) var_1);
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((int) (unsigned char)58)))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) (unsigned short)65535);
        arr_16 [i_1] = ((/* implicit */unsigned short) ((long long int) arr_5 [i_1] [i_1]));
    }
    for (unsigned short i_4 = 4; i_4 < 15; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((_Bool) 15169945576196517953ULL))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) var_6))))))) | (max((((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (var_6)))), (((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (381271169176191873LL)))))));
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 14; i_5 += 2) 
        {
            var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)44998)) ? (arr_22 [i_4] [i_5]) : (((/* implicit */unsigned long long int) var_0))))));
            var_23 ^= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) max((var_5), ((unsigned char)60)))), (((274877906943ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-14910))))));
        }
        var_24 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_10 [i_4 - 3] [i_4 - 2] [i_4 - 2]) : (arr_10 [i_4 - 1] [i_4 - 2] [i_4 - 3])))) ? (max((var_4), (((/* implicit */unsigned long long int) arr_11 [i_4 - 1])))) : (max((((/* implicit */unsigned long long int) arr_11 [i_4 - 2])), (arr_10 [i_4 + 2] [i_4 - 2] [i_4 + 1]))));
    }
}
