/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217206
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
    var_14 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) 2961884729U)) ? (var_8) : (((/* implicit */long long int) var_9)))), (min((var_4), (((/* implicit */long long int) -202399145)))))) - (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned int) arr_0 [8U]);
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (arr_3 [(unsigned char)12] [i_1] [(signed char)8]) : (arr_3 [i_0] [i_0] [i_1]))))))));
                arr_6 [i_0] [i_0] [(signed char)4] = ((/* implicit */unsigned short) (-(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((var_2), (((/* implicit */unsigned long long int) (short)-32758))));
    /* LoopSeq 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        arr_9 [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) max((1333082580U), (1333082577U)))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (~(((arr_7 [i_2 - 1]) / (arr_7 [i_2 - 1]))))))));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */int) max(((short)6299), (((/* implicit */short) arr_11 [i_2 - 1] [i_4]))))), (((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_11 [i_2 - 1] [i_3])) : (((/* implicit */int) arr_11 [i_2 - 1] [(unsigned char)13]))))));
                    arr_16 [i_2] [i_2] [i_4] = ((/* implicit */signed char) var_10);
                }
            } 
        } 
        arr_17 [i_2] = ((/* implicit */signed char) min((((arr_13 [i_2]) + (((/* implicit */unsigned long long int) ((var_3) ? (arr_7 [i_2]) : (((/* implicit */int) arr_8 [i_2] [(signed char)14]))))))), (((/* implicit */unsigned long long int) var_10))));
    }
    /* vectorizable */
    for (signed char i_5 = 2; i_5 < 14; i_5 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_3 [i_5 + 2] [i_5 + 2] [15]))));
        arr_20 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_5 + 2])) ? (((/* implicit */int) arr_2 [i_5 + 1] [i_5])) : (((/* implicit */int) arr_2 [i_5 + 2] [i_5 - 1]))));
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2961884741U))));
        var_22 = ((/* implicit */short) ((int) ((var_3) ? (((/* implicit */int) var_12)) : (arr_7 [i_5]))));
    }
    for (signed char i_6 = 2; i_6 < 14; i_6 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) arr_11 [i_6 - 1] [i_6 - 2])))));
        arr_23 [i_6] = ((/* implicit */int) ((short) ((long long int) max((((/* implicit */int) var_12)), (165715746)))));
        arr_24 [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(1333082592U)))), ((-(((3428430116995844511ULL) + (((/* implicit */unsigned long long int) 2512224836U))))))));
    }
}
