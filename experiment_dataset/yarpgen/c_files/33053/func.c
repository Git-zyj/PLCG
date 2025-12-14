/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33053
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
    var_19 = ((/* implicit */unsigned int) ((var_10) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((var_0) == (var_4)))))) != (((/* implicit */int) var_2))));
        var_20 = ((/* implicit */short) ((arr_0 [i_0]) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19117))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_21 = ((/* implicit */_Bool) var_8);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    var_22 = ((((/* implicit */int) var_12)) | (((/* implicit */int) (unsigned short)19088)));
                    arr_11 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) 0U)) && (arr_3 [i_3] [i_2]))) && (arr_0 [i_2])));
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */long long int) (~(arr_10 [i_1])));
                    var_23 *= ((/* implicit */long long int) ((arr_8 [i_2]) < (arr_8 [i_2])));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_4 = 3; i_4 < 17; i_4 += 3) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_4 - 3])) ? (((/* implicit */int) arr_14 [i_4 - 3])) : (((/* implicit */int) (short)25754))));
            var_25 = ((((/* implicit */int) arr_3 [i_4 - 2] [i_4])) + (((/* implicit */int) arr_3 [i_4 - 2] [i_4 - 1])));
            arr_17 [i_4] [i_1] [i_1] = ((((/* implicit */_Bool) arr_7 [i_4] [i_4 + 1])) ? (((/* implicit */long long int) arr_15 [i_4] [i_4 - 1] [i_4 + 2])) : ((+(-6754310000458514092LL))));
        }
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((long long int) ((((/* implicit */int) arr_24 [i_5])) != (arr_23 [i_1] [i_1] [i_1] [i_1] [(unsigned short)9] [7])))))));
                            var_27 *= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))));
                            var_28 *= ((/* implicit */signed char) 4470972390482269276ULL);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                var_29 = ((/* implicit */signed char) ((arr_5 [i_5]) <= (arr_5 [i_1])));
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_9] [i_5] [i_1])) ? (arr_22 [i_5] [i_5] [(short)5]) : (arr_22 [i_1] [i_1] [i_1])));
            }
        }
        var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [i_1] [i_1]))));
    }
    for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
    {
        var_32 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 4294967284U)) > (7914524880866245261LL))))) > (7324420452352837037LL))) ? (((((((/* implicit */_Bool) 404180320)) ? (((/* implicit */unsigned int) 66536230)) : (188197625U))) % (arr_10 [i_10]))) : (((/* implicit */unsigned int) ((arr_3 [i_10] [2ULL]) ? (arr_23 [i_10] [i_10] [i_10] [i_10] [6LL] [i_10]) : (arr_15 [i_10] [i_10] [9LL]))))));
        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
    }
}
