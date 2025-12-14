/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25705
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
    var_15 *= ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32744))) ^ (11319860008436565122ULL))))));
                        var_17 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2] [i_3]);
                    }
                } 
            } 
        } 
        var_18 = ((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(arr_7 [(signed char)17] [3U] [i_0] [0U] [i_0]))) : (((/* implicit */long long int) ((arr_0 [i_0] [(_Bool)1]) ? (arr_1 [i_0]) : (((/* implicit */int) var_5))))));
        arr_8 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned int) (((+(var_3))) <= (((/* implicit */unsigned long long int) (-(arr_7 [i_4] [i_4] [i_4] [(signed char)19] [i_4]))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14535191436497687226ULL)) ? (14535191436497687226ULL) : (3911552637211864390ULL)))) ? (14535191436497687226ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U))))))))));
        arr_11 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_4])) ? (arr_9 [i_4]) : (((/* implicit */int) arr_0 [i_4] [i_4]))));
        arr_12 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_4 [i_4] [i_4] [(_Bool)1] [i_4])))) ? (((((/* implicit */_Bool) arr_5 [i_4] [i_4])) ? (arr_1 [i_4]) : (((/* implicit */int) arr_0 [i_4] [i_4])))) : (((/* implicit */int) var_11))));
        var_21 *= ((/* implicit */signed char) ((((var_7) && (((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_10 [i_4])))))) : (var_9)));
    }
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((max((var_4), (((/* implicit */unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) max((((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((((/* implicit */int) var_11)) != (var_6)))))))))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            {
                arr_18 [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_17 [5] [i_6] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_6])) ? (((/* implicit */int) arr_0 [i_5] [i_5])) : (((/* implicit */int) arr_16 [i_5] [(_Bool)1] [i_6])))))))) ? (min((((((/* implicit */_Bool) var_3)) ? (arr_17 [i_6] [12ULL] [i_6]) : (var_3))), (((/* implicit */unsigned long long int) arr_6 [i_5] [i_5] [i_5] [i_5])))) : (((/* implicit */unsigned long long int) arr_14 [i_5]))));
                var_23 ^= ((/* implicit */unsigned int) (+(arr_5 [i_6] [i_5])));
                arr_19 [(short)2] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((arr_2 [i_5] [0ULL] [i_6 - 1]), (max((arr_13 [i_5]), (arr_13 [i_5])))))), (((((var_2) | (((/* implicit */unsigned int) var_6)))) | (arr_14 [i_5])))));
            }
        } 
    } 
}
