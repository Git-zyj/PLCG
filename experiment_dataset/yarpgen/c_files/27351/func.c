/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27351
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) var_9))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */int) (-(var_14)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                var_16 = ((/* implicit */short) ((((/* implicit */int) ((signed char) var_6))) >= ((+(((/* implicit */int) var_13))))));
                var_17 = ((/* implicit */unsigned int) (unsigned short)65534);
            }
        }
    }
    var_18 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)90))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11004))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_10)))))));
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) var_13)), ((+((((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)11027))))))));
    var_20 = max((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-32176)) : (((/* implicit */int) var_2))))))), (max((((long long int) (short)10667)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)0))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        arr_9 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 4294967295U))) ? (max(((-(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)6075)))))) : (((/* implicit */int) var_1))));
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [4U] [(unsigned short)4] [i_3] [i_3]))));
    }
    for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((unsigned long long int) (+((-(((/* implicit */int) (short)-10667)))))))));
        var_23 = ((/* implicit */unsigned short) (+(max((0ULL), (((unsigned long long int) arr_11 [i_4]))))));
        arr_12 [i_4] [i_4] = ((/* implicit */unsigned char) min(((+(max((var_11), (((/* implicit */int) (unsigned short)11007)))))), (((((/* implicit */int) ((unsigned short) arr_11 [i_4]))) - (((/* implicit */int) (!(((/* implicit */_Bool) 2823388197558629527LL)))))))));
        arr_13 [i_4] [i_4] = ((/* implicit */unsigned long long int) (((((!(var_9))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)55968))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [(unsigned short)16] [(unsigned short)16] [i_4 - 1]))) : (var_14))))) + (((/* implicit */long long int) ((/* implicit */int) (short)-32184)))));
    }
}
