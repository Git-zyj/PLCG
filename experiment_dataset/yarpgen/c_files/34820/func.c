/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34820
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
    var_19 = var_0;
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_20 *= ((/* implicit */unsigned long long int) (unsigned short)2448);
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) arr_1 [i_0]))));
        var_22 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((arr_0 [i_0 - 1] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_1 [20U]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_1 [16U]))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)63088)) != (((/* implicit */int) arr_2 [(unsigned char)20] [(unsigned char)20])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                arr_10 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2468)) ? (((/* implicit */int) (unsigned short)2448)) : (((/* implicit */int) (unsigned short)63089))));
                var_23 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]))) * (arr_0 [i_0 + 1] [i_0])));
                arr_11 [i_0] [(signed char)21] [(short)22] = ((/* implicit */short) (~(((arr_2 [i_0] [i_1 + 1]) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [5] [i_1] [i_1])))))));
            }
            var_24 = ((/* implicit */unsigned char) (unsigned short)63088);
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_6 [i_0] [i_1 + 2] [i_1 + 1] [i_1 - 1]) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 + 1])) ? (((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [(signed char)16])) + (arr_6 [(short)2] [16U] [i_0] [i_3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) arr_1 [6U])) : (((/* implicit */int) arr_2 [14U] [14U])))))));
            arr_16 [(unsigned short)0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_15 [i_0 + 1])) : (((/* implicit */int) var_0))));
            var_27 = ((/* implicit */int) (unsigned short)2447);
        }
        var_28 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_11))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_29 = ((/* implicit */unsigned char) arr_8 [i_4]);
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) ((2ULL) * (((/* implicit */unsigned long long int) ((arr_12 [i_4] [i_4] [i_4]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) == (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])))))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_30 *= ((/* implicit */unsigned short) var_10);
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 2) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                {
                    var_31 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_3 [i_5] [i_6 + 1] [i_6])) ? (((unsigned int) arr_4 [i_5] [i_5] [i_5])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2417))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63088)) / (arr_4 [i_5] [17U] [i_6 - 2]))))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5]))) | (((((/* implicit */_Bool) (unsigned short)2431)) ? (arr_6 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2448)))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_28 [(unsigned short)13] [(unsigned short)13] [i_7])) ? (((/* implicit */int) arr_2 [i_6] [i_6])) : (((/* implicit */int) (unsigned short)63093)))))) : (((((/* implicit */_Bool) (unsigned short)2442)) ? (((/* implicit */int) arr_26 [i_6 + 2] [i_6 + 1] [i_6 - 2])) : (((/* implicit */int) (unsigned short)2431))))));
                    arr_30 [i_5] [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
    }
    for (unsigned short i_8 = 1; i_8 < 23; i_8 += 3) 
    {
        var_33 = ((/* implicit */int) min((var_33), ((-(((/* implicit */int) min((arr_33 [i_8 + 2]), (arr_33 [i_8 + 2]))))))));
        /* LoopSeq 1 */
        for (long long int i_9 = 1; i_9 < 23; i_9 += 1) 
        {
            var_34 *= ((/* implicit */unsigned long long int) ((int) arr_31 [i_8 + 2] [i_9 - 1]));
            arr_36 [i_8 - 1] [i_9] [i_9] = ((/* implicit */short) arr_33 [i_8 + 2]);
        }
        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_8] [i_8 + 2])) ? ((-(((/* implicit */int) arr_31 [(short)12] [(short)12])))) : (((((/* implicit */_Bool) arr_34 [i_8])) ? (((/* implicit */int) (unsigned short)63094)) : (((/* implicit */int) (short)(-32767 - 1)))))))) * (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8] [i_8]))) + (arr_32 [19ULL] [8U]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [16LL])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32754))) : (arr_35 [i_8] [i_8] [i_8 + 2])))))))))));
    }
    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) min((((var_15) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) var_7))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_13))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2425)))));
}
