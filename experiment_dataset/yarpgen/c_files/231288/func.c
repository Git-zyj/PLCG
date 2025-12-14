/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231288
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_15 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((898111213U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)4] [(short)4]))))) && (((/* implicit */_Bool) (-(31LL)))))))) > (((unsigned int) min((((/* implicit */unsigned int) (signed char)-116)), (2953639989U))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((signed char) (~(max((((/* implicit */long long int) arr_0 [i_0] [i_2])), (4326208773077494933LL))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_3] [i_0] [i_0] [i_1] [i_0 - 2] = ((/* implicit */unsigned short) 6690029362406359097LL);
                        var_17 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_9 [i_0 + 3] [i_1 + 1] [i_2 - 1] [i_3])))));
                        arr_12 [i_0] [i_1 - 1] [i_2 + 2] [i_3] = ((/* implicit */_Bool) ((int) (!((!(((/* implicit */_Bool) 1341327307U)))))));
                        arr_13 [10LL] [10LL] [i_1] [i_1 - 2] [i_2] [(unsigned char)6] &= ((/* implicit */unsigned char) 2953639989U);
                    }
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) 1341327311U);
        var_18 = (_Bool)1;
    }
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) var_3))) > (((/* implicit */int) (signed char)26)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((-1002400576), (((/* implicit */int) (unsigned char)0)))))))) : ((-(((((/* implicit */int) (unsigned short)60873)) | (((/* implicit */int) (unsigned char)68))))))));
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        for (unsigned int i_5 = 2; i_5 < 15; i_5 += 1) 
        {
            {
                arr_20 [i_4] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15212737693999399491ULL)) ? (1341327307U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188)))));
                var_20 = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned int) arr_16 [3LL])), (2839110869U))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_14);
}
