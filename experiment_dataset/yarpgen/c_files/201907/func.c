/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201907
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) arr_0 [i_1]);
                    var_17 = max((min((arr_7 [i_0] [i_1 - 1] [i_2] [i_2]), (((/* implicit */unsigned int) arr_2 [i_1] [i_1 + 2])))), (((/* implicit */unsigned int) arr_5 [i_1])));
                    var_18 = ((/* implicit */unsigned int) arr_1 [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
    {
        var_19 -= ((/* implicit */short) min((min((((/* implicit */unsigned long long int) var_4)), (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2127194562U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)14074)))))));
        var_20 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((6399846795733347738ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    {
                        arr_21 [(unsigned short)9] &= ((/* implicit */_Bool) var_6);
                        var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1])) ? (arr_15 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                        var_22 = ((/* implicit */int) arr_15 [(short)14] [i_5] [i_5] [i_5]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] [i_4] [i_3] &= ((/* implicit */short) var_7);
                            var_23 = ((/* implicit */short) (+((~(((/* implicit */int) arr_10 [i_3]))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_7] [i_6] [i_5] [i_4]))))) ? (((/* implicit */int) arr_24 [i_4] [i_4] [i_4 - 1] [i_4 + 1] [i_4 - 1])) : (var_4)));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_19 [i_3] [(signed char)17] [i_5] [i_6])) : (((/* implicit */int) arr_19 [i_3] [i_4] [i_5] [i_6]))));
                            var_26 = ((/* implicit */long long int) ((12046897277976203876ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned long long int) var_12);
}
