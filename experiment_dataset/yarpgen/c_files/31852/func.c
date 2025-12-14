/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31852
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = (short)11876;
        var_19 |= ((/* implicit */long long int) min((((arr_1 [i_0]) / (((/* implicit */unsigned long long int) var_2)))), ((+(arr_1 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) 5001981366517701754ULL)) == (((((/* implicit */_Bool) -2775617079108901264LL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))) >= (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) 13))))));
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((+(arr_4 [i_1] [i_1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_0)))))) + (((unsigned long long int) (short)29800))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2]);
        var_21 = ((/* implicit */int) arr_4 [i_2] [i_2]);
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            var_22 = ((/* implicit */long long int) (~((-(var_15)))));
            var_23 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_2]))));
        }
        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            var_24 = var_9;
            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) 1141856588)) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) var_1)))) * (((/* implicit */int) arr_9 [i_2] [i_2]))));
            var_26 += ((((((/* implicit */unsigned long long int) var_16)) == (8359555760934132051ULL))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) (short)21)) : (((/* implicit */int) (short)-21))))));
            var_27 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) == (var_18)));
        }
        for (short i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            arr_18 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 745015357)) ? (var_11) : (((/* implicit */int) arr_11 [i_2]))));
            arr_19 [i_2] [i_2] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13156)) ? (((/* implicit */int) (short)-29930)) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) var_13))));
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_7 [i_2]))));
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_2] [i_5] [i_5])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 2090270263))))) : ((+(((/* implicit */int) (short)-7))))));
            arr_20 [i_2] [i_5] = ((/* implicit */unsigned long long int) arr_17 [i_2] [i_2] [i_5]);
        }
    }
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                {
                    var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_21 [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29939))) : (arr_23 [i_8] [i_8])))) ? (((/* implicit */unsigned long long int) min((var_18), (arr_21 [i_6])))) : (min((max((3441710751259932749ULL), (((/* implicit */unsigned long long int) -1039121830110743518LL)))), (((((/* implicit */_Bool) var_17)) ? (8359555760934132070ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                    var_31 = ((/* implicit */short) (~((~(14193079113989845237ULL)))));
                    var_32 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(var_16)))), (((unsigned long long int) 2773819071625021570LL))));
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (var_7)))), (max((((/* implicit */int) (short)29142)), (1364468113)))))) ? ((+(((/* implicit */int) var_10)))) : (-616980901)));
                    var_34 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_26 [i_6] [i_7])))) >= (max((max((arr_23 [i_8] [i_8]), (((/* implicit */long long int) (short)-7309)))), (((/* implicit */long long int) (~(67108863))))))));
                }
            } 
        } 
    } 
}
