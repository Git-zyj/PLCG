/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44214
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
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 &= ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_3 [i_0] [i_1] [16LL]))))));
                var_20 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
                arr_4 [8ULL] |= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) << ((((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (var_17))))) + (56119)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_8 [i_2] [(_Bool)1] = (+(((/* implicit */int) arr_3 [20] [i_2] [i_2])));
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) & ((~(var_4))))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) var_16)) : (arr_0 [(_Bool)1] [i_2])))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 12; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_23 ^= ((/* implicit */unsigned short) ((max((((/* implicit */int) arr_3 [i_2] [i_3 - 2] [i_2])), (var_2))) + (((/* implicit */int) arr_3 [i_2] [i_3] [i_4]))));
                    var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_11 [i_3] [i_3]))));
                }
            } 
        } 
    }
}
