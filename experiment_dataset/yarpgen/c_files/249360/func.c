/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249360
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 2448776119U)) : (5606330661038997644ULL)))) ? (((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) : (arr_0 [14LL]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_1 [i_1])) : (var_12)))))));
            var_13 = ((/* implicit */unsigned char) var_0);
            arr_6 [i_0] &= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (unsigned char)14))))));
        }
        arr_7 [i_0] = ((/* implicit */short) (+((-(arr_1 [i_0])))));
        arr_8 [i_0] [(short)6] = ((int) (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0]))) : ((+(((/* implicit */int) arr_3 [i_0] [3LL] [3LL])))))))));
    }
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) (~(var_8)))) ? ((~(((/* implicit */int) arr_2 [i_2] [i_2] [i_2])))) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) (short)32761)) : (arr_1 [i_2])))))))));
        arr_13 [i_2] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)1235)) / (((/* implicit */int) (unsigned short)49114))));
    }
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) 3855046884U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53340))) : (var_5)))))));
                        arr_24 [i_3] [i_3] [i_4] [7LL] [i_5] [7LL] |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)7780)) << (((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 3070953137U)) : (var_9))) | ((~(var_5))))) - (16181322220410990259ULL)))));
                    }
                } 
            } 
        } 
        var_16 *= ((/* implicit */_Bool) (+(((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)255))))));
    }
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) + (((/* implicit */unsigned long long int) (-(var_12)))))))))));
}
