/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231249
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) 3472164659U);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_7 [i_0]) : (arr_2 [i_0] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 3472164671U)) : (arr_4 [i_0] [i_0]))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 4])) : (((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 1]))));
        }
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) 1335247038))))) && (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))))) % (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_14)) : (var_0)))))));
    /* LoopNest 3 */
    for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_5] [(unsigned short)16])) << (((((/* implicit */int) (short)8814)) - (8810)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)93)) & (((/* implicit */int) (signed char)0))))) : (arr_15 [i_2 + 1] [i_3] [i_4] [8LL]))) != (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-8814)), ((unsigned short)35627)))) ? (arr_14 [i_5] [2U] [2U]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)0)) > (arr_7 [i_2]))))))))))));
                        var_24 = ((/* implicit */long long int) arr_6 [i_4] [i_4]);
                    }
                    arr_19 [i_4] [i_2] [i_2 - 2] [i_2] = min((-9023969855165059861LL), (arr_17 [i_4]));
                    var_25 = ((/* implicit */signed char) 0);
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) (short)-6796)))))) ? (((((/* implicit */_Bool) (unsigned short)35627)) ? (((/* implicit */int) max(((_Bool)1), (arr_16 [i_2 - 2] [i_3] [i_4] [i_4])))) : (((/* implicit */int) (((_Bool)1) && (arr_18 [i_2] [i_3] [(short)12] [(short)12] [i_2])))))) : (((((/* implicit */int) arr_9 [i_2] [i_2])) ^ (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (_Bool)1))))))));
                    var_27 &= ((/* implicit */unsigned long long int) arr_0 [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((unsigned long long int) var_0)))));
}
