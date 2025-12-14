/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41545
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_6 [(unsigned char)15] = ((/* implicit */_Bool) var_5);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1] [i_3] [i_1] = ((/* implicit */long long int) (-((~(((/* implicit */int) max(((short)-9679), (((/* implicit */short) (signed char)56)))))))));
                        var_18 = ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) max((min((arr_2 [i_0] [i_1]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) arr_8 [17LL] [17LL] [i_1 - 1] [i_3 - 4]))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((-6465554806402474436LL), (((/* implicit */long long int) (signed char)56))))))))) == (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 + 1] [i_3 - 2])))))));
                        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(1455495977U)))) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) 64599532)) || (((/* implicit */_Bool) var_6))))))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) 7)) != (9675860462144913056ULL)))) << (((((/* implicit */int) (short)16693)) - (16690)))))));
                        var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned short)0)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        arr_13 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                        arr_14 [i_0] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_3))));
}
