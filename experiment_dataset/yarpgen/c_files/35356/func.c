/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35356
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
    for (int i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_19 = (+(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 4])));
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_14)) ? (4294967295U) : (((/* implicit */unsigned int) -446195794)))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        arr_14 [i_0] [i_0] = ((short) (~(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (unsigned char)157)))))));
                        var_21 = ((/* implicit */unsigned char) 9223372036854775807LL);
                    }
                } 
            } 
            var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)206))))) != (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_2])), ((unsigned short)65518))))))) > (((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18011))))) : (((int) arr_5 [i_0] [i_0 - 1]))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (1023ULL)));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
            var_24 &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0 - 4] [i_5]))));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (var_3)));
        }
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)206)) | (((/* implicit */int) (unsigned char)50)))), (((3791170) | (((/* implicit */int) (unsigned char)50))))))) ? (((/* implicit */long long int) (~(((var_12) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned short)65535))))))) : (((((/* implicit */_Bool) min((arr_13 [5LL] [5LL] [i_0] [5LL]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (min((var_9), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
        arr_19 [i_0 - 2] [i_0 - 2] = (~(((((/* implicit */int) var_11)) * (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) arr_4 [i_0] [i_0]))))))));
        var_27 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0 - 3] [i_0 - 3] [i_0 - 3]) > (((/* implicit */long long int) ((/* implicit */int) var_6))))))) < (((((/* implicit */_Bool) 32767LL)) ? (1023ULL) : (((/* implicit */unsigned long long int) var_7))))))) == (((((4399642846653067738ULL) <= (((/* implicit */unsigned long long int) 394704348U)))) ? (((/* implicit */int) ((_Bool) 10911745730441274558ULL))) : (min((2141790306), (((/* implicit */int) (signed char)-57))))))));
    }
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_14))));
}
