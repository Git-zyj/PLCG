/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220306
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] &= min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (12527892252913616115ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)21]))))))))));
                var_15 += ((/* implicit */int) min((12527892252913616115ULL), (((/* implicit */unsigned long long int) 9223372036854775806LL))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_1])) : (var_1)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) / (((/* implicit */int) arr_1 [i_1])))))));
                var_17 = ((/* implicit */signed char) (~((+(((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_7)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((var_9) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) + (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) min((((/* implicit */int) var_8)), (var_6))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_5 [(unsigned short)5] [i_2] [i_2])))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) var_14))))) <= (arr_8 [i_2])))));
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            arr_11 [i_2] [i_2] = var_7;
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)60560)) >> (((((/* implicit */int) (unsigned short)27109)) - (27092)))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)52624)) == (2147483647)));
            arr_12 [(short)13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2])))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_2]) >> (((((/* implicit */int) (signed char)-23)) + (24)))))) ? (((/* implicit */int) ((_Bool) var_14))) : (((/* implicit */int) var_11))));
        }
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            arr_16 [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (!(arr_15 [i_2])))) + (((/* implicit */int) var_12))));
            arr_17 [i_2] [(_Bool)1] [4ULL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_0 [i_4] [i_2])) / (arr_8 [i_2])));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                arr_21 [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) var_8)) : (2147483647)));
                var_24 += ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_2] [i_2] [i_2]))));
                var_25 = ((arr_10 [i_2]) + (((/* implicit */int) var_8)));
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_24 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (arr_8 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6] [(unsigned short)11]))))) << (((/* implicit */int) arr_15 [i_2]))));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_7))));
            arr_25 [i_2] [i_6] &= ((/* implicit */short) arr_19 [i_2] [i_6] [4ULL]);
            arr_26 [i_6] [i_2] = ((((/* implicit */int) var_0)) < (var_6));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */int) arr_9 [i_6])) : (((/* implicit */int) arr_9 [i_6]))));
        }
        for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            var_28 &= ((/* implicit */signed char) ((int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_14)))));
            var_29 = ((/* implicit */long long int) ((int) (+(((/* implicit */int) (unsigned short)38457)))));
        }
    }
    var_30 = ((/* implicit */signed char) max(((+(7242981546307813150LL))), (((/* implicit */long long int) ((_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_14))))))));
    var_31 = ((/* implicit */unsigned long long int) ((var_12) || ((((!(((/* implicit */_Bool) (signed char)1)))) && (((/* implicit */_Bool) var_8))))));
}
