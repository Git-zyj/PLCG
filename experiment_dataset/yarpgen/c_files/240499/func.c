/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240499
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */signed char) arr_3 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(arr_2 [i_0] [i_0]))))));
        var_18 -= ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
    }
    /* LoopSeq 4 */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_4 [i_1]) ? (2179613896308727230ULL) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((var_11) > (arr_5 [i_1] [i_1]))))))) ? (((/* implicit */long long int) 3249041941U)) : ((~(var_11)))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) -1529330230)) : (arr_5 [i_1] [i_1]))), (arr_5 [i_1] [i_1]))) / (((/* implicit */long long int) ((/* implicit */int) var_15)))));
        var_19 = ((/* implicit */short) max((arr_5 [i_1] [i_1]), ((+(((var_3) ? (var_9) : (var_13)))))));
        var_20 *= ((/* implicit */unsigned long long int) (+(1045925345U)));
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) 6390520847367016232LL)), (15906139012310581461ULL)))));
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) (+((+(max((var_12), (((/* implicit */long long int) arr_1 [i_2]))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3])) ? (9392570535331987554ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : ((+(arr_5 [i_3] [i_3])))));
        var_24 = ((/* implicit */long long int) (+(arr_10 [i_3])));
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        arr_18 [i_4] = ((/* implicit */int) min((max((((/* implicit */long long int) arr_10 [i_4])), (arr_5 [i_4] [i_4]))), (((/* implicit */long long int) var_14))));
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            for (short i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) 1062729536065285391LL)), (max((((/* implicit */unsigned long long int) 1469127658U)), (16440121587062583031ULL)))))));
                        arr_27 [i_5] [i_5] [i_6] [i_7] [i_5] [i_6] = ((/* implicit */unsigned short) var_6);
                        arr_28 [i_4] [i_6] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_20 [i_5] [i_6] [i_7]), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) (short)29160)) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [i_4])) / (var_7)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) max((((/* implicit */short) arr_4 [i_7])), (var_5))))))));
                        arr_29 [i_4] [i_6] = ((/* implicit */signed char) arr_5 [i_6 + 3] [i_6 + 2]);
                        arr_30 [i_6] = max((((/* implicit */long long int) arr_17 [i_4])), ((+(arr_20 [i_4] [i_6 + 2] [i_4]))));
                    }
                } 
            } 
        } 
        arr_31 [i_4] [i_4] = ((/* implicit */_Bool) var_0);
    }
    var_26 = ((/* implicit */long long int) var_4);
    var_27 = ((/* implicit */signed char) var_10);
}
