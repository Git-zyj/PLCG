/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41771
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(7553356001344347710LL)))) ? (((((/* implicit */_Bool) -7553356001344347711LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned short)2])) | (((/* implicit */int) var_12))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)43192)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)22344)) : (((/* implicit */int) (unsigned short)27610))))))) ^ (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_9))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2 - 1]))))));
                        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)95))));
                        var_21 |= max((((/* implicit */unsigned short) ((((/* implicit */int) var_16)) != (((/* implicit */int) arr_3 [i_3] [i_1 - 2]))))), (var_12));
                    }
                } 
            } 
            arr_8 [i_0 + 1] [i_1] = ((unsigned long long int) ((_Bool) max((arr_4 [i_0] [i_0] [i_1 - 1] [i_0]), (((/* implicit */signed char) arr_2 [i_0] [i_1])))));
            arr_9 [8LL] |= ((/* implicit */unsigned short) ((arr_2 [i_0] [0ULL]) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0 + 3])), (5561353375147584737ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((4267749393691335127LL) != (var_4)))) : (((/* implicit */int) var_10)))))));
        }
        /* LoopSeq 1 */
        for (short i_4 = 2; i_4 < 10; i_4 += 2) 
        {
            arr_13 [i_0] [(unsigned short)8] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) ((unsigned char) 7553356001344347711LL))), (arr_6 [i_0] [i_0] [i_0] [i_4 + 3] [i_4])))));
            var_22 = ((/* implicit */short) var_9);
            var_23 = ((/* implicit */unsigned short) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)29))))))));
        }
    }
    var_24 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) var_9);
        /* LoopNest 2 */
        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            for (long long int i_7 = 1; i_7 < 8; i_7 += 4) 
            {
                {
                    var_26 = ((/* implicit */long long int) (~(var_3)));
                    var_27 -= ((/* implicit */unsigned char) (_Bool)0);
                }
            } 
        } 
        var_28 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_7 [(unsigned short)1] [i_5] [(unsigned short)1] [(unsigned short)1] [11] [i_5])) != (16499476117097341301ULL)));
    }
}
