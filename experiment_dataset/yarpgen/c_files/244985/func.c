/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244985
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) var_8);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_3))));
                        var_21 ^= ((/* implicit */unsigned short) (+(((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)65535))))));
                    }
                } 
            } 
            var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_17))));
            var_23 &= ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0])))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) 9007199254740991ULL))));
            var_25 = ((/* implicit */signed char) var_11);
            var_26 = ((/* implicit */signed char) 18437736874454810625ULL);
        }
        var_27 ^= ((unsigned char) ((9007199254740991ULL) << (((arr_7 [i_0] [i_0] [i_0] [(short)6] [i_0]) - (12411032276203748081ULL)))));
    }
    var_28 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            {
                arr_17 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(9007199254741016ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) || (((/* implicit */_Bool) var_18)))))) : (min((((((/* implicit */_Bool) arr_13 [i_6] [i_5])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_6]))))), (((/* implicit */unsigned long long int) ((int) 18437736874454810625ULL)))))));
                var_29 = ((/* implicit */unsigned short) ((unsigned char) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_5] [i_5])) : (((/* implicit */int) arr_15 [i_6] [i_5] [i_5]))))))));
            }
        } 
    } 
}
