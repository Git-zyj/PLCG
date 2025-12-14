/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206431
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((int) (-(7591601544860796459ULL))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (max((2430151537U), (2130246713U)))));
        var_15 = max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_5)), (var_10)))), (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53786))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) ((short) ((_Bool) ((_Bool) (_Bool)1))));
            arr_5 [i_0] [i_1] &= ((/* implicit */unsigned long long int) 4194303U);
            arr_6 [i_0] [i_0] = ((/* implicit */_Bool) max(((+(var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) var_11)))))));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_0] [i_2] [i_0] = ((int) var_8);
            arr_12 [(signed char)0] [i_0] [i_0] = ((((/* implicit */_Bool) 303670255)) ? (2810006566187881854LL) : (((/* implicit */long long int) -1)));
            arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_9)));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                arr_17 [2LL] [10U] [i_0] = 4294967292U;
                var_17 = (+(((/* implicit */int) var_8)));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-80))))) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (signed char)26))));
                var_19 = ((((/* implicit */_Bool) 536870911)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                var_20 = ((/* implicit */short) (-(var_3)));
                var_21 = (!(((/* implicit */_Bool) -5083158790767239250LL)));
                /* LoopSeq 1 */
                for (signed char i_5 = 3; i_5 < 14; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)242)) >> (((6247212725461705894ULL) - (6247212725461705894ULL))))))))));
                    var_23 = ((int) (short)17168);
                    arr_22 [(signed char)2] [i_0] [(unsigned short)11] [i_4] [i_5] = ((/* implicit */long long int) ((var_2) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53965)))));
                }
            }
            arr_23 [i_0] [i_0] = ((/* implicit */unsigned short) var_9);
        }
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) var_4);
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 19)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) (short)7708)))));
        arr_28 [i_6] = var_7;
    }
    var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))))) ? (((/* implicit */int) ((signed char) ((var_1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_11))));
}
