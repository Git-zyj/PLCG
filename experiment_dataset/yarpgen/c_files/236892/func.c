/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236892
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
    var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1191140055U)), (var_7)))) ? (((/* implicit */int) ((short) 1191140073U))) : (((var_5) % (((/* implicit */int) var_12)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) min((((unsigned long long int) arr_1 [i_0])), (((unsigned long long int) -1))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                arr_7 [i_0] = ((/* implicit */unsigned int) ((min((var_18), (((/* implicit */int) (short)32763)))) | (max(((-(((/* implicit */int) (unsigned char)95)))), (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_2 [i_0] [i_1] [i_2]))) << (((((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1907477293)) : (arr_0 [i_1]))) - (1907477275ULL)))))), (((((arr_0 [i_2]) << (((((/* implicit */int) arr_3 [i_0] [i_1])) - (111))))) << (((((/* implicit */int) arr_3 [i_2] [i_0])) - (75)))))));
                var_22 = ((/* implicit */short) -1);
                var_23 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2] [i_2])))))) & (((/* implicit */unsigned long long int) var_3))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), ((~(arr_0 [i_0])))));
            }
            var_24 = ((/* implicit */signed char) ((arr_6 [i_1] [i_0]) >> (((arr_6 [i_1] [i_1]) - (arr_6 [i_0] [i_0])))));
            var_25 = ((/* implicit */int) arr_4 [i_0]);
            arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned char) 4294967285U));
            var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((var_4) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))))));
        }
        arr_10 [i_0] = ((/* implicit */signed char) max(((~(arr_1 [i_0]))), ((-(arr_1 [i_0])))));
    }
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_3] [i_3]);
        var_27 *= ((/* implicit */signed char) (-((~((~(((/* implicit */int) arr_4 [i_3]))))))));
        var_28 = ((/* implicit */unsigned int) arr_11 [i_3]);
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned char) (~((-(arr_5 [i_4] [i_4] [i_4] [i_4])))));
        var_29 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_4]))));
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) >= (3103827267U)));
        arr_19 [i_4] [i_4] = var_15;
    }
    var_30 = ((/* implicit */unsigned char) var_13);
    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11)))))))));
    var_32 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_18)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) ^ (var_16))))))), ((((~(var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))))));
}
