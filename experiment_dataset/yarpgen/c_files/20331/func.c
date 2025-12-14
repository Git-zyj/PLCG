/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20331
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_2] [i_0])) << (((max(((_Bool)0), (arr_4 [i_0] [i_0] [i_2] [i_2]))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [8LL] [i_0] [i_2] [i_2]))) : (9LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (_Bool)1))))))));
                    var_18 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (+(2130303778816LL)))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-3648504919965525588LL))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 920629325U))) ? (((/* implicit */int) max((arr_0 [i_3 - 1]), (arr_0 [i_3 - 1])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_3 - 1] [(short)0])) : (((/* implicit */int) arr_3 [i_3 - 1] [i_1])))))))));
                        var_20 = var_11;
                    }
                }
            } 
        } 
        var_21 = arr_2 [i_0] [i_0];
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (~(((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))) ? (((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [(_Bool)1] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))));
        var_24 = ((/* implicit */long long int) (_Bool)0);
    }
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_0 [i_4]))));
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    {
                        arr_21 [i_5] [i_5] [i_5] [12LL] [i_7 + 1] = ((/* implicit */unsigned int) max((max(((_Bool)1), ((_Bool)1))), ((_Bool)0)));
                        var_26 = ((short) ((unsigned int) arr_11 [i_7 - 1]));
                        arr_22 [2LL] &= ((/* implicit */unsigned int) arr_16 [i_7 + 1] [i_6] [i_4] [i_4]);
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(unsigned char)1] [(unsigned char)11])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : (max((((/* implicit */long long int) (_Bool)1)), (-2130303778800LL)))));
    }
    var_28 = ((/* implicit */short) ((_Bool) ((unsigned int) (_Bool)1)));
}
