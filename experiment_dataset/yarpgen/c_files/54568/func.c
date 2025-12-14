/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54568
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (-1LL) : (var_7))), (((long long int) var_10))))) && ((!(((/* implicit */_Bool) var_8)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1375098550U)) > (5295356329106464096LL)));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3204279969465988215LL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)25911))));
                        var_15 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3])))) > (var_4)));
                    }
                } 
            } 
        } 
        var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (3114019809U)))) ? (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (arr_10 [i_0] [i_0] [(short)3] [(short)1] [i_0] [2LL])));
        var_17 = ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_0])))) + ((+(var_10))));
    }
    for (long long int i_4 = 2; i_4 < 15; i_4 += 4) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((short) var_9))), (((long long int) arr_14 [(short)0])))) - (min((min((arr_13 [i_4] [i_4]), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) ((((/* implicit */int) (short)224)) - (((/* implicit */int) (short)-1)))))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4]))) < (min((((/* implicit */long long int) min((67107840U), (var_8)))), (((((/* implicit */_Bool) 4294967295U)) ? (arr_18 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)14))))))))))));
                    var_19 = (~(max((-569778373292478015LL), (((/* implicit */long long int) ((short) arr_13 [12LL] [i_4 - 2]))))));
                }
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        arr_23 [(short)3] [(short)3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 6155994452537000255LL)))))))) + (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) * (2487004018U))) ^ (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-25440)) + (2147483647))) >> (((var_7) - (4141564513085305963LL))))))))));
        arr_24 [i_7] = ((/* implicit */unsigned int) ((((max((((/* implicit */long long int) (short)-1)), (-3300465599607124161LL))) + (min((((/* implicit */long long int) 1807963284U)), (var_6))))) / (((/* implicit */long long int) 1807963278U))));
        var_20 = ((/* implicit */unsigned int) max((var_20), ((+(0U)))));
        var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_21 [(short)10])) ? (var_9) : (arr_20 [i_7]))), (((((/* implicit */long long int) ((/* implicit */int) (short)27588))) | (arr_20 [i_7])))));
        var_22 = ((/* implicit */long long int) max((var_22), (max((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-27589))))) ? ((+(var_6))) : (((/* implicit */long long int) ((unsigned int) (short)28370))))), (max((((/* implicit */long long int) ((arr_22 [i_7]) / (var_11)))), (arr_20 [i_7])))))));
    }
    for (unsigned int i_8 = 1; i_8 < 12; i_8 += 2) 
    {
        var_23 = ((/* implicit */long long int) var_4);
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) 2320716283U))));
    }
}
