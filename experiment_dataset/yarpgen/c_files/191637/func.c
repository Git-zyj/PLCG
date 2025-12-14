/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191637
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
    var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)-1))))))));
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)7))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-1))))))), ((+(((((/* implicit */_Bool) (signed char)-1)) ? (18ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24902)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        arr_3 [i_0 + 3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-4))));
        var_19 = ((/* implicit */short) ((unsigned short) 18446744073709551615ULL));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */short) ((var_10) ? (((/* implicit */int) (unsigned short)46368)) : (((/* implicit */int) (signed char)-10))));
            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [8ULL] [i_1]))))) ? (((/* implicit */int) arr_5 [i_2])) : (((((/* implicit */_Bool) 18446744073709551598ULL)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (signed char)0))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_21 += ((/* implicit */int) (!((_Bool)1)));
                var_22 -= ((/* implicit */unsigned int) arr_4 [i_1]);
            }
            arr_14 [i_1] = ((/* implicit */signed char) arr_13 [(unsigned short)8] [i_3] [i_3]);
        }
        arr_15 [i_1] = ((/* implicit */unsigned int) (~(0)));
        arr_16 [3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [(_Bool)1]))));
    }
}
