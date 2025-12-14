/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28621
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) (unsigned short)32768));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    {
                        arr_11 [7U] [i_0] [i_0] [(unsigned char)0] = ((/* implicit */int) ((((((/* implicit */_Bool) 274877906943ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((unsigned int) var_15)))));
                            arr_14 [i_0] [i_0] [i_2] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)206))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))) : (var_18)));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) 16646144)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (short)-22342))));
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_5] [i_5] = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) - (4299098122045962341ULL))) : (((/* implicit */unsigned long long int) (-(8388607))))));
                        }
                        var_21 = ((/* implicit */unsigned long long int) var_14);
                        arr_20 [i_1] [i_2] [i_1] [i_0] = ((/* implicit */short) ((var_8) % (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)41999)) : (((/* implicit */int) (short)-19590))))));
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            arr_24 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [4ULL] [i_6]))) + (-6442827984273669302LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (short)2047))));
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned int) arr_5 [i_6] [i_6])))));
        }
        var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_0])) ^ (((/* implicit */int) var_7))));
        var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)6))));
        arr_25 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
    }
    var_26 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */long long int) var_15))));
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (561850441793536ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */int) max((((short) 3541594879679659660ULL)), (((/* implicit */short) ((unsigned char) var_13)))))) : (((/* implicit */int) ((_Bool) var_16))))))));
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-2403)))))));
    var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)15))));
}
