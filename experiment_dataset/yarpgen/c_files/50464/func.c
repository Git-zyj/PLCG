/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50464
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
    var_12 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */unsigned long long int) (unsigned char)222);
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
                    {
                        var_14 += ((/* implicit */unsigned long long int) ((unsigned int) min((arr_2 [i_0] [i_1 - 3]), (arr_2 [i_0] [i_1 + 1]))));
                        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) 9ULL))) == (((/* implicit */int) ((_Bool) 2347135541U))))) ? (max((((/* implicit */unsigned long long int) (signed char)4)), (4489938463357137586ULL))) : (max((((/* implicit */unsigned long long int) (signed char)8)), (15070450090464314005ULL)))));
                    }
                    for (short i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
                    {
                        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2347135556U)))))) >= (arr_8 [(short)10] [(short)10] [i_2 - 2] [i_4])));
                        arr_15 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(12164190024440017556ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))))))) | (((((/* implicit */_Bool) ((short) var_1))) ? (((4489938463357137590ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (18446744073709551615ULL)))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */long long int) (+((-(arr_5 [i_5] [(short)21] [(short)21] [i_0])))));
                        var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_2 - 1]))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (!(var_4)));
    var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) (+(var_9))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 17117211988165491333ULL))))) == (((((/* implicit */int) (unsigned short)9)) + (((/* implicit */int) var_4)))))))))));
}
