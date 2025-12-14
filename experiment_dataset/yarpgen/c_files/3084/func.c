/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3084
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) min((var_15), ((-(((/* implicit */int) ((arr_0 [(unsigned char)7]) >= (arr_0 [4ULL]))))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((15928068116610613376ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
    }
    var_17 = ((/* implicit */long long int) (((-(((/* implicit */int) ((var_2) == (var_0)))))) == (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (15928068116610613376ULL))) == (((/* implicit */unsigned long long int) ((int) var_1))))))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_1))));
    var_19 = ((/* implicit */int) max((((/* implicit */long long int) var_1)), (var_11)));
    /* LoopSeq 1 */
    for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((2518675957098938240ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((13398543024740065261ULL), (((/* implicit */unsigned long long int) arr_8 [3U] [3U] [i_3]))))) ? (((/* implicit */unsigned long long int) ((-7146149596333531000LL) - (((/* implicit */long long int) 1476125624))))) : (((((/* implicit */_Bool) 1476125631)) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [14])) : (arr_5 [i_1])))))) ? ((~((-2147483647 - 1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (~(arr_6 [i_2] [i_3])))))))));
                    var_22 -= ((/* implicit */unsigned long long int) ((1909932906) ^ (-1476125608)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    {
                        var_23 &= ((/* implicit */long long int) max((var_13), (1476125631)));
                        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)23439))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned int) (-(max((((int) var_3)), (((/* implicit */int) ((var_11) > (arr_0 [i_1 + 2]))))))));
        }
    }
}
