/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215341
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            arr_4 [i_0] [2U] = ((/* implicit */short) 2332876981U);
            var_20 = arr_0 [i_0];
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) 4294967295U)) : (arr_0 [i_0])))) ? ((((_Bool)0) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (unsigned short)29456)))) : ((-(((/* implicit */int) (signed char)-4))))));
            arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)30308)) : (((/* implicit */int) var_19))))) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (9223372036854775801LL) : (((/* implicit */long long int) 2754594145U)))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-31150)))))));
        }
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12093))))) << (((/* implicit */int) ((408244899U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38)))))))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2972660957U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (2332876981U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) == (((/* implicit */int) (unsigned char)238))))))));
    }
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            {
                var_24 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_19))))) : (((((/* implicit */_Bool) var_10)) ? (9ULL) : (((/* implicit */unsigned long long int) 2147483647)))))), (((/* implicit */unsigned long long int) max((((short) (unsigned char)100)), (((/* implicit */short) arr_10 [i_3])))))));
                var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775808ULL)) ? (((((/* implicit */_Bool) -1004303786225161430LL)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (short)4312)))) : (((/* implicit */int) (unsigned char)87))));
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_2])) ? (((/* implicit */int) (short)9484)) : (((/* implicit */int) var_0))))) ? (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51121))))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))) : (3057553006U))))))) ? (((/* implicit */int) ((short) 276439138U))) : (((((/* implicit */int) ((unsigned char) (_Bool)1))) + ((-(((/* implicit */int) (unsigned char)214)))))))))));
                var_27 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((15U) + (2754594140U))) : ((~(var_8)))))), (max((((((/* implicit */_Bool) 2332877007U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_3]))) : (-9223372036854775807LL))), (((/* implicit */long long int) (signed char)4))))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    var_28 = arr_10 [i_2];
                    arr_14 [i_4] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (short)1792))) ? (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (signed char)4)))) : (((/* implicit */int) var_4))));
                }
            }
        } 
    } 
}
