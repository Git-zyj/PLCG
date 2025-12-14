/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33037
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) max(((!((!(((/* implicit */_Bool) 1754503032)))))), (((_Bool) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((unsigned char) ((var_6) ? (((/* implicit */int) arr_3 [(signed char)0] [i_1])) : (((/* implicit */int) ((3679814539067261732ULL) < (arr_1 [i_2])))))))));
                    var_21 = ((/* implicit */unsigned short) max((((unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_1))))) : (arr_4 [i_0] [i_1] [i_2]))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 1754503032)) ? (arr_5 [i_2] [(unsigned short)4]) : (((/* implicit */int) arr_3 [(short)17] [i_1])))))), (((((((/* implicit */_Bool) arr_6 [(unsigned short)20] [5] [i_2] [i_2])) || (((/* implicit */_Bool) arr_1 [i_2])))) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) var_6))))))))))));
                    var_23 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_2 [19ULL])) - (var_0)));
                }
            } 
        } 
        var_24 *= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 2902952414U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [i_0])))));
        arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_12)))))))));
    }
    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) arr_13 [i_3 - 2]))));
        var_26 = ((/* implicit */unsigned long long int) min((((unsigned int) var_9)), (((unsigned int) arr_8 [i_3] [i_3 - 1] [i_3] [i_3]))));
        var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) 3505045890U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_14))) != (((/* implicit */unsigned long long int) var_10))))), (((((/* implicit */_Bool) 3679814539067261732ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(signed char)13] [i_3])) ? (arr_4 [i_3] [i_3 - 2] [(unsigned char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) var_10)) ? (arr_10 [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [4ULL])))))))));
    }
    var_28 = ((/* implicit */unsigned char) ((long long int) 14766929534642289898ULL));
}
