/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33390
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)32759))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(var_10))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_1] [i_1] [i_1] |= ((/* implicit */short) var_11);
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~((+(var_9)))));
            var_19 *= ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) ((14488497450655764247ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
            arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((int) 14488497450655764251ULL));
            var_21 = ((/* implicit */int) (+(((10959938216034835436ULL) << (((((/* implicit */int) (signed char)-121)) + (163)))))));
        }
        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned short)18]))) : (var_16)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_23 = ((/* implicit */signed char) max(((((+(((/* implicit */int) var_13)))) ^ (max((var_0), (((/* implicit */int) (unsigned short)0)))))), ((+(arr_3 [i_3] [i_3] [i_3])))));
        var_24 = (((+(10959938216034835435ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10959938216034835436ULL)) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) ((signed char) (short)-1)))))));
    }
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) var_6))), (var_9)))) ? (((/* implicit */unsigned long long int) ((var_5) ? (((((/* implicit */int) (unsigned short)65535)) - (1073610752))) : (((/* implicit */int) var_15))))) : (var_11)));
    var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) ((signed char) var_11)))))), (((((/* implicit */_Bool) 8363193813992858871ULL)) ? ((-(10959938216034835417ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_5)))))))));
    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min((((min((var_4), (((/* implicit */unsigned long long int) var_2)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11426264811748557533ULL)) ? (var_10) : (((/* implicit */int) var_15))))))), (var_7))))));
}
