/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29909
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
    var_12 = ((/* implicit */signed char) (unsigned char)20);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)217))));
                var_14 = ((/* implicit */int) arr_1 [i_0]);
            }
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_12 [i_0] [i_1] [i_1] = (+(((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                arr_13 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_1] [2LL] [i_3]))));
                var_15 = arr_7 [i_0] [i_1] [i_3];
            }
            for (unsigned int i_4 = 3; i_4 < 22; i_4 += 2) 
            {
                var_16 = ((/* implicit */unsigned int) (unsigned char)6);
                var_17 = (((-(arr_8 [i_0] [i_1] [(unsigned char)4] [i_4]))) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 3]))));
            }
            arr_16 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)182)) ? (((unsigned long long int) 134217727)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned char i_5 = 3; i_5 < 21; i_5 += 2) 
        {
            var_18 = ((/* implicit */long long int) min((((unsigned short) 1829020551U)), (((/* implicit */unsigned short) ((arr_6 [i_0] [i_0] [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_0] [8ULL] [i_0])) : (((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) arr_3 [i_0] [i_0])))))), (((/* implicit */int) max((arr_0 [i_5 + 1]), (arr_0 [i_5 + 1])))))))));
        }
        arr_21 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_10))))) ? (max((((/* implicit */unsigned int) arr_5 [2U] [i_0] [i_0])), (4294705152U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))));
        arr_22 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)250)), (var_0)))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) min((arr_17 [i_0] [i_0]), (((/* implicit */int) var_2))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2465946745U)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_10 [i_6] [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))) : (((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (min((var_0), (((/* implicit */long long int) var_2)))))))))));
        var_21 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [8LL] [i_6] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (arr_8 [i_6] [i_6] [(unsigned short)21] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6]))))))), (((/* implicit */long long int) var_3))));
        /* LoopSeq 2 */
        for (int i_7 = 3; i_7 < 8; i_7 += 2) 
        {
            var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) && ((_Bool)0))) ? (((/* implicit */int) ((unsigned char) (unsigned char)22))) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_7 - 2] [i_7 + 2] [i_6])) && (((/* implicit */_Bool) arr_5 [i_7 + 3] [i_6] [20LL]))))) : (((/* implicit */int) ((_Bool) 0LL)))));
            var_23 = ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (1829020551U)))) ? (((/* implicit */long long int) max((2465946772U), (((/* implicit */unsigned int) var_1))))) : (((var_10) ? (var_0) : (((/* implicit */long long int) -1600252732))))));
            var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_18 [i_6] [i_7])) ? (arr_18 [i_6] [i_7 + 3]) : (arr_18 [i_6] [i_7]))), (((/* implicit */long long int) arr_19 [i_7 - 2] [i_7 - 2] [3U]))));
        }
        for (short i_8 = 2; i_8 < 10; i_8 += 4) 
        {
            arr_30 [i_8] [i_6] [i_6] = ((/* implicit */unsigned long long int) (_Bool)1);
            /* LoopNest 2 */
            for (long long int i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 4) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned char) 1600252709);
                        var_26 *= ((/* implicit */unsigned short) arr_9 [i_6] [i_6] [i_6] [i_6]);
                    }
                } 
            } 
        }
    }
}
