/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205598
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
    var_19 += ((/* implicit */short) ((int) var_3));
    var_20 = ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) var_14)))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1] [(short)10])));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 + 1] [1ULL])) : (((/* implicit */int) var_4))))) ? ((-(4294967295U))) : ((+((-(0U)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (15699233380695347615ULL))) + (((/* implicit */unsigned long long int) var_2))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_3))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_24 = ((/* implicit */_Bool) (+(max(((-(var_2))), (((/* implicit */long long int) arr_5 [2LL]))))));
            var_25 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [(signed char)5] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) (!((_Bool)1)))))));
            arr_6 [i_1] = ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned char)100)), (0LL)))))) ? (((arr_5 [i_0 + 1]) ? (((/* implicit */long long int) var_10)) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)103)))));
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_26 = ((/* implicit */int) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3213585871274487856ULL)))));
                        var_27 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */_Bool) 14124992609892524768ULL)) || (((/* implicit */_Bool) 1918927363U))))) : (((((/* implicit */int) arr_5 [i_0 - 1])) - (((/* implicit */int) arr_1 [i_0 - 1])))));
                    }
                } 
            } 
        }
        for (long long int i_4 = 3; i_4 < 18; i_4 += 3) 
        {
            arr_14 [4U] [4U] = ((/* implicit */int) (_Bool)1);
            var_28 += ((/* implicit */_Bool) (~(((unsigned int) 4294967295U))));
        }
    }
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        arr_18 [i_5] [(short)7] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1153775558)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4321751463817026834ULL)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1))))))));
        var_29 -= ((/* implicit */unsigned char) min((arr_10 [i_5] [i_5] [(short)10] [(unsigned short)8] [(short)0]), (((/* implicit */unsigned int) arr_8 [i_5] [i_5] [i_5] [16]))));
        var_30 = ((/* implicit */unsigned int) ((signed char) 9223372036854775787LL));
    }
}
