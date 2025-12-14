/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208919
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
    var_18 -= ((/* implicit */short) 3681875767U);
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned short) var_11))))), (((((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */unsigned long long int) var_8)))) | (var_16)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_16), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0] [(unsigned char)7]) : (arr_3 [(_Bool)1] [(unsigned short)19]))), (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0] [(short)19]) : (((/* implicit */long long int) -134217728)))))))));
                var_21 = ((((/* implicit */_Bool) min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [(_Bool)1] [1ULL]))))))) ? (((((var_5) ? (140737488224256ULL) : (((/* implicit */unsigned long long int) arr_3 [23ULL] [(signed char)2])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((unsigned long long int) ((((/* implicit */int) var_12)) > (((/* implicit */int) arr_2 [19LL] [i_1 + 1]))))));
                var_22 ^= ((/* implicit */long long int) arr_2 [i_0] [i_1 - 1]);
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_0 [(_Bool)1] [10])) | (var_16)));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [(signed char)14] [i_0] [(short)10] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((max((((/* implicit */int) var_10)), (0))) >> (((/* implicit */int) min((var_9), (((/* implicit */short) (_Bool)0)))))))), (((((/* implicit */_Bool) ((unsigned int) arr_4 [(unsigned short)14] [i_1 - 1] [(_Bool)1] [i_2]))) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                    var_24 = ((/* implicit */long long int) ((_Bool) ((short) arr_3 [i_1 + 1] [i_1 - 1])));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((arr_9 [i_3]), (((/* implicit */int) arr_7 [i_3] [i_3]))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (arr_0 [i_3] [i_3])))));
        var_26 = 3092499249U;
        var_27 = ((/* implicit */int) arr_0 [i_3] [i_3]);
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_4])) < (((/* implicit */int) arr_8 [(unsigned char)13]))));
        var_29 -= ((/* implicit */signed char) ((int) arr_2 [i_4] [15ULL]));
    }
    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        arr_16 [(unsigned short)0] = ((/* implicit */long long int) (short)30905);
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) arr_7 [(short)7] [18ULL]))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                {
                    arr_21 [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) min((min((var_17), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) arr_4 [(_Bool)1] [(_Bool)1] [(unsigned short)19] [i_5]))));
                    var_31 = ((/* implicit */_Bool) (~(max((6871438820796738939ULL), (((/* implicit */unsigned long long int) arr_5 [i_5] [i_5] [(unsigned short)21]))))));
                }
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(short)21] [(short)20])) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [12ULL] [(unsigned short)23])) && (((/* implicit */_Bool) arr_13 [i_8])))))) : (((/* implicit */int) var_12))));
        arr_24 [(_Bool)1] = ((/* implicit */unsigned int) var_8);
    }
}
