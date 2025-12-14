/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233719
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
    var_20 = ((_Bool) (-(((var_5) / (var_10)))));
    var_21 = ((/* implicit */_Bool) 4294967295U);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) arr_1 [15])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) arr_1 [i_0]))))) : (((unsigned int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = var_16;
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 5990474655651117976LL)) && (((/* implicit */_Bool) ((unsigned short) ((_Bool) arr_3 [i_0] [i_1] [i_0]))))));
            var_24 = ((/* implicit */_Bool) 1U);
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-9936)) ? (-5990474655651117965LL) : (var_19))), (((/* implicit */long long int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) (-(arr_4 [i_0])))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((long long int) var_13))) : (0ULL)))));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    var_25 = ((/* implicit */_Bool) 5990474655651117976LL);
                    arr_16 [(unsigned short)4] [(unsigned short)4] [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_3] [i_3] [i_4]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_3 - 2]))))) : ((~(var_11)))));
                }
            } 
        } 
        arr_17 [i_2] [i_2] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (-5990474655651117962LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)27057), (((/* implicit */short) (_Bool)1)))))))));
        var_26 = (~((+(((/* implicit */int) (_Bool)1)))));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_13 [9U] [1ULL] [i_2] [(_Bool)1]))));
    }
}
