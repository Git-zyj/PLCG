/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238253
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_2] = ((/* implicit */signed char) arr_2 [8U] [i_1]);
                    var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42605)))))) ? ((+(((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) (unsigned short)42605)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-23868))))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (_Bool)1))));
                    arr_9 [i_0 - 1] [3LL] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_4 [i_2] [i_0]) ? (((/* implicit */int) (short)28958)) : (((/* implicit */int) var_5))))) < (arr_0 [i_0 - 1] [i_0 + 1])));
                    var_22 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 1] [(unsigned short)23] [i_2]))));
                }
            } 
        } 
        arr_10 [i_0] = arr_5 [(_Bool)1] [i_0 - 1] [i_0 - 1] [i_0 - 1];
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_23 ^= ((/* implicit */int) (unsigned short)38866);
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (signed char i_5 = 3; i_5 < 16; i_5 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) arr_17 [i_5 - 3] [i_4] [i_4] [i_4]);
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((short) (~(((/* implicit */int) var_14))))))));
                                arr_25 [(signed char)6] [(signed char)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_11 [i_7 - 2] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2477)))));
                            }
                        } 
                    } 
                    arr_26 [i_3] [i_4] [i_5] [i_5 + 1] = ((/* implicit */unsigned int) 18446744073709551615ULL);
                }
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))), (min((var_12), ((unsigned short)65535)))))) || (((/* implicit */_Bool) (unsigned short)42593))));
    var_27 = ((/* implicit */signed char) 1935256329);
}
