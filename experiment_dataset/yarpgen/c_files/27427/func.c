/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27427
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32764))) : (var_13)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [1U])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_4)))))))) : (((/* implicit */int) (_Bool)0))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_5 [i_0] [i_1]) / (arr_5 [i_0] [i_1])));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)63))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
            var_19 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_1] [4ULL] [i_1])) && ((_Bool)1))) && (((/* implicit */_Bool) var_4))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)223)) > ((+(((/* implicit */int) (unsigned char)196))))))))));
                    arr_13 [i_2] [i_2] [i_2] = ((/* implicit */short) (unsigned char)118);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) var_14)) != (arr_11 [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        arr_16 [i_4] [i_4] &= ((/* implicit */unsigned char) ((min((arr_14 [i_4]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_4]))))))) == (((/* implicit */unsigned long long int) min((min((arr_15 [i_4] [i_4]), (-305519336))), (((/* implicit */int) ((((/* implicit */unsigned int) 1487924636)) <= (4294967295U)))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_15 [i_4] [i_4]))) ? (arr_14 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -3273796550861654336LL))))))) ? (16201841464949006242ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)939)) : (((/* implicit */int) (signed char)-1))))) && (((/* implicit */_Bool) arr_15 [i_4] [i_4])))))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((~(var_14))) / (((((/* implicit */int) (unsigned short)32297)) + (((/* implicit */int) (unsigned char)137))))))) & (var_13))))));
}
