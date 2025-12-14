/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220409
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [(unsigned short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_0] [(unsigned short)13] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0] [i_3])) : (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                            var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(14604831567425028503ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(short)5] [i_2])) || (((_Bool) (short)(-32767 - 1)))))) : (max((((((/* implicit */int) arr_9 [i_0] [3] [i_0] [i_3])) * (((/* implicit */int) (short)32767)))), (((((/* implicit */_Bool) var_2)) ? (arr_8 [i_0] [i_2] [i_0] [i_0] [(short)1] [i_0]) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))));
                            var_11 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (arr_7 [i_0] [i_2] [i_1] [i_0]) : (arr_7 [i_0] [i_2] [i_1] [i_0]))), (((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_1] [i_2] [i_0])))));
                        }
                    } 
                } 
                arr_12 [(unsigned char)0] [(unsigned char)0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)2] [i_1]))) * (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (arr_5 [i_0] [i_0] [7LL] [i_0])))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        {
                            var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_8 [i_5] [i_1] [i_5] [i_5] [i_1] [i_0])) : (min((8532381562539446292ULL), (((/* implicit */unsigned long long int) (short)-1))))))) || ((!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (arr_7 [i_0] [i_0] [10] [i_5]))))))));
                            var_13 = ((/* implicit */signed char) arr_9 [i_0] [i_4] [i_1] [i_0]);
                        }
                    } 
                } 
                arr_20 [i_0] [i_0] = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) << (((var_0) - (10948280031532356716ULL)))))));
                var_14 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((min((((((/* implicit */int) arr_9 [i_0] [i_1] [(_Bool)1] [i_0])) + (((/* implicit */int) arr_18 [i_1] [i_1] [i_0] [i_0])))), (((((/* implicit */int) (short)23610)) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])) + (13920))))))) / (((/* implicit */int) ((short) min((var_7), (((/* implicit */unsigned long long int) arr_4 [(short)3] [1LL]))))))))) : (((/* implicit */long long int) ((min((((((/* implicit */int) arr_9 [i_0] [i_1] [(_Bool)1] [i_0])) + (((/* implicit */int) arr_18 [i_1] [i_1] [i_0] [i_0])))), (((((/* implicit */int) (short)23610)) << (((((((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1])) + (13920))) - (35120))))))) / (((/* implicit */int) ((short) min((var_7), (((/* implicit */unsigned long long int) arr_4 [(short)3] [1LL])))))))));
            }
        } 
    } 
    var_15 = (!(((/* implicit */_Bool) var_6)));
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)127)))) * (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) var_4)))) : (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        for (unsigned short i_7 = 3; i_7 < 18; i_7 += 3) 
        {
            {
                var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_25 [i_7 - 3] [i_6])) : (((((/* implicit */_Bool) ((signed char) arr_24 [i_7]))) ? (((/* implicit */int) arr_26 [i_7 - 1] [i_7] [i_7 + 1])) : (((/* implicit */int) (short)(-32767 - 1)))))));
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            {
                                arr_35 [i_7] [i_7] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)9279)), (((arr_30 [i_7 + 2] [(short)5] [(signed char)0] [i_7] [i_10]) ? (arr_28 [i_7 + 2] [i_7]) : (((/* implicit */unsigned long long int) arr_33 [i_7 + 2] [i_10] [i_7] [i_7 + 2] [i_10] [i_10]))))));
                                var_18 = ((/* implicit */short) var_6);
                            }
                        } 
                    } 
                } 
                arr_36 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((int) max((arr_24 [i_7 + 2]), (arr_24 [i_7 + 1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (signed char i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 4) 
            {
                {
                    var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_13 - 1] [i_13 + 1] [(short)4]))))) ^ (((((/* implicit */int) arr_45 [i_13 - 1] [i_13 + 1] [(unsigned short)16])) / (((/* implicit */int) arr_45 [i_13 - 1] [i_13 + 1] [(short)14]))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) arr_43 [i_11] [i_11]))));
                    var_21 = ((/* implicit */int) arr_43 [i_11] [i_11]);
                }
            } 
        } 
    } 
}
