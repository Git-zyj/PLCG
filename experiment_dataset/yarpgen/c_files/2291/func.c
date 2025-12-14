/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2291
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)1] [(unsigned short)1]))))) : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [20]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_14 += (!(((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_1]))))))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            arr_8 [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(arr_5 [i_1] [i_1])))))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_3)))) : (((/* implicit */int) ((_Bool) ((unsigned int) arr_6 [i_1] [i_1]))))));
            arr_9 [i_2] [i_2] = ((arr_6 [i_1] [i_1]) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (-892715930)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))) : (((/* implicit */int) (_Bool)1)));
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)20167)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (unsigned short)51340)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */long long int) 8388607U)) : (max((((((/* implicit */long long int) 828869093U)) / (var_8))), (min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL)))))));
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((121159978), (arr_4 [i_2])))), (((arr_0 [i_1] [i_1]) ? (((/* implicit */long long int) arr_4 [i_1])) : (arr_1 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (max((((/* implicit */long long int) arr_0 [i_1] [i_1])), (-5403558091894223945LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)111), (var_10))))) : (max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned int) arr_4 [i_1])))))))));
            var_16 += var_3;
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_13 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (-121159974) : (arr_13 [3] [i_1])))) : (min((((/* implicit */unsigned int) var_1)), (arr_5 [i_1] [i_1]))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
            {
                for (long long int i_5 = 2; i_5 < 16; i_5 += 1) 
                {
                    {
                        arr_18 [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (arr_7 [i_4 + 4] [i_4 - 1] [(_Bool)1]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)111)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(8444249301319680LL)))))))) : (min((max((((/* implicit */unsigned int) (_Bool)1)), (var_0))), (((/* implicit */unsigned int) ((6215554787483981918LL) != (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                        arr_19 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) arr_17 [i_5 - 2] [i_5 - 2])) : (((((/* implicit */_Bool) (unsigned char)3)) ? (var_11) : (((/* implicit */long long int) var_9))))))) ? (max((arr_17 [i_1] [i_3]), (((/* implicit */int) ((arr_12 [i_1] [i_3] [i_4 + 2]) < (var_11)))))) : (min((((((/* implicit */_Bool) arr_15 [i_3] [(signed char)6])) ? (arr_13 [i_1] [i_4]) : (arr_4 [16LL]))), (((int) (unsigned short)60282))))));
                    }
                } 
            } 
        }
        arr_20 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) arr_14 [i_1]))))))))));
        arr_21 [(signed char)6] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_6 [i_1] [i_1])), (var_3)))) ? (((/* implicit */int) var_6)) : (arr_17 [i_1] [i_1])))));
    }
    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)57389)))), (max((((/* implicit */int) ((_Bool) var_7))), (var_9)))));
    var_19 &= var_12;
    var_20 = ((/* implicit */_Bool) var_12);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) min((var_2), (var_0))))) ? (max(((((_Bool)1) ? (70368744177152LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
