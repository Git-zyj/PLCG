/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22255
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
    var_20 -= ((/* implicit */long long int) var_4);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) max((var_2), (arr_3 [i_0])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (var_12)))))) + ((-((-(var_11)))))));
        var_22 += ((/* implicit */unsigned long long int) var_12);
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_23 += ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)95))));
        var_24 = (~((-(((/* implicit */int) var_9)))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 8; i_3 += 3) 
            {
                for (long long int i_4 = 2; i_4 < 8; i_4 += 3) 
                {
                    {
                        arr_17 [i_1] [i_1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)48))));
                        var_25 += ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_4 - 2] [i_4])) ? ((-(var_12))) : (((/* implicit */int) var_4))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) min(((((_Bool)1) ? ((~(68719474688LL))) : (-8782815495205023374LL))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) / (-1))))));
                            var_27 = ((/* implicit */unsigned int) arr_6 [i_3]);
                            var_28 |= ((/* implicit */signed char) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_2)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_3 + 3] [i_4 + 2]))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_3 + 3])) && (arr_10 [i_3] [i_4] [i_3]))))))))));
                        }
                        var_29 = ((/* implicit */signed char) ((short) var_18));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_6] [i_6]))))) ? (arr_4 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) < (var_17)))))));
        arr_22 [i_6] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_6]))) : (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_11)))));
    }
    var_31 = ((/* implicit */unsigned long long int) var_14);
}
