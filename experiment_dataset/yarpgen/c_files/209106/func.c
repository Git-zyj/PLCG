/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209106
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
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) 14163660315035506728ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)121)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (_Bool)1))))))), (((max((((/* implicit */long long int) (signed char)16)), (255LL))) % (((/* implicit */long long int) ((/* implicit */int) var_18)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) || (arr_1 [i_0]))), (arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 - 1]))) ? (((((/* implicit */_Bool) (signed char)7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)1] [i_0]))) / (arr_2 [i_0])))))))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? ((-(arr_2 [i_0]))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1])))))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_3 [i_0]))))))) : (((/* implicit */int) arr_3 [i_0])))))));
        var_23 = ((/* implicit */short) var_18);
        var_24 |= ((/* implicit */unsigned int) arr_0 [i_0 - 1] [(signed char)5]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 - 1])) > (((/* implicit */int) arr_3 [i_1 - 1]))));
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [2] [2])) ? (((/* implicit */int) arr_7 [i_0 - 1] [(short)10])) : (((/* implicit */int) var_18)))))));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) 267LL))));
            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_1 [i_0]))));
        }
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max(((-(arr_9 [i_0 - 1]))), (((/* implicit */unsigned int) var_3)))))));
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_8)), (arr_2 [i_0])))))) ? (((var_19) ? (arr_2 [i_0 - 1]) : (arr_2 [7U]))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (signed char)116))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (14233983988437545871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8274130622102694810LL)) ? (arr_9 [(short)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55405))) : ((~(63U)))));
        var_32 -= ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((unsigned char) arr_7 [i_3] [i_3])))))));
        var_33 = ((((((/* implicit */_Bool) 4212760085272005744ULL)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_16)))) ^ (((/* implicit */int) ((unsigned char) arr_3 [i_3]))));
    }
}
