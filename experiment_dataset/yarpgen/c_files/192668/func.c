/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192668
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 = ((((/* implicit */_Bool) arr_7 [i_2 - 3] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))) : (arr_7 [i_2 - 3] [i_2 - 1]));
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-57))))) ? (arr_10 [i_3] [i_2 - 2] [i_2 + 1] [i_2 - 2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_2]))))))))));
                        arr_12 [(_Bool)1] [i_3] [i_2] [10LL] = ((/* implicit */unsigned short) var_0);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        arr_15 [i_4] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? ((-(8439658690360036701ULL))) : (((/* implicit */unsigned long long int) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */unsigned short) var_10);
                        arr_17 [i_4] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_2 - 3] [i_4] [i_2 + 1] [i_2 - 1] [20ULL] [i_4])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4]))) <= (arr_13 [i_4] [i_4])))) : (((/* implicit */int) arr_8 [i_0] [i_2 - 3] [i_2 - 1] [3LL]))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) arr_13 [i_0] [i_5]);
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_2 - 2] [i_2 - 2]))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_2 - 1] [i_1] [i_2])), (arr_14 [i_2 + 1] [i_2 - 1] [i_0] [i_5])))) : ((+(((/* implicit */int) var_8))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-((-(max((var_1), (arr_7 [i_0] [i_0]))))))))));
                        var_21 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_7 [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_5])))))) : (var_5))), (((/* implicit */long long int) min((((var_11) | (var_11))), (var_2)))));
                        arr_20 [i_0] [i_1] [i_2] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_0] [i_5])))))))), (((long long int) arr_8 [i_2 - 2] [i_0] [i_2] [i_5])));
                    }
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? (((((/* implicit */_Bool) 2147418112U)) ? ((+(arr_5 [i_0] [i_1]))) : (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_11 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_2 [i_2 + 1])))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [(signed char)2])) ? (arr_10 [i_0] [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) arr_0 [i_0] [(_Bool)1]))))) ? (((((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 3])) & (((/* implicit */int) arr_14 [i_2 + 1] [i_2 - 2] [i_1] [i_2 - 3])))) : (((/* implicit */int) ((var_2) <= (((/* implicit */int) ((((/* implicit */_Bool) 2147418134U)) || (((/* implicit */_Bool) arr_13 [i_1] [i_1]))))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_11);
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (+((+(var_14))))))));
    var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (+(2147549158U)))))) ? ((~(((((/* implicit */int) var_8)) % (((/* implicit */int) var_12)))))) : ((~((-(((/* implicit */int) var_0))))))));
    var_27 = ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) var_5)) : (var_13)))) ? (max((((/* implicit */unsigned long long int) var_12)), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) % (var_10));
}
