/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208814
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
    var_11 *= ((/* implicit */unsigned int) ((((((/* implicit */long long int) (((_Bool)1) ? (var_4) : (var_2)))) & (var_5))) & ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_0))) | (((/* implicit */long long int) var_10))))));
    var_12 = ((/* implicit */_Bool) (signed char)-50);
    var_13 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_14 -= ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))) : (1048573U)));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_2);
            arr_7 [i_0 - 1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-27)), ((unsigned char)252)));
            var_16 = ((/* implicit */unsigned long long int) ((((long long int) arr_4 [i_0 + 1])) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 2])) >= (((/* implicit */int) arr_4 [i_0 + 1]))))))));
        }
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1]))) : (var_6))) == (var_5)));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                arr_13 [i_3] = ((/* implicit */signed char) (~(var_6)));
                arr_14 [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) arr_5 [i_3]);
                var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_10 [i_0 - 2] [i_0 - 1])))) ? (max((((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_7))))), (min((((/* implicit */long long int) arr_1 [i_0])), (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_3 - 1]), (arr_9 [i_0 - 2] [i_0 - 2] [i_3])))) && (((/* implicit */_Bool) ((signed char) (signed char)48)))))))));
                var_19 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_8 [i_0 + 1] [6LL])) ? (arr_8 [i_0 - 1] [i_0 - 1]) : (arr_8 [i_0 - 1] [i_2])))));
            }
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (unsigned char)0)), (2095859770555636893LL)))))));
        }
    }
    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 3) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), ((signed char)7)));
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_7)), (((unsigned int) 1650863476))));
        arr_17 [(unsigned char)4] &= ((/* implicit */unsigned long long int) -2147483632);
        var_23 = ((/* implicit */unsigned int) arr_1 [i_4]);
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max(((~(((/* implicit */int) arr_11 [16U] [i_4 + 1] [i_4 - 1] [(unsigned short)16])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4] [i_4 - 1]))))))))));
    }
}
