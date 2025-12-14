/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203556
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 1192143207))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_10)))));
                            var_20 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_12)) <= ((-(1192143200))))));
                            var_21 *= ((/* implicit */unsigned char) 5101414109054192823LL);
                            var_22 = ((/* implicit */unsigned char) ((unsigned int) var_15));
                            var_23 &= ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1] [i_2])) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) 5292398119108627313ULL)) ? (((/* implicit */int) arr_5 [i_1])) : (var_1)))) | (arr_6 [i_0] [i_1] [i_2] [i_3]))) : (((max((((/* implicit */long long int) 1192143214)), (arr_4 [i_2] [i_3]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (var_8)))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] [i_1] = (!(var_10));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_24 = ((/* implicit */int) arr_11 [i_4]);
        var_25 = ((/* implicit */unsigned int) arr_11 [i_4]);
        var_26 = ((/* implicit */signed char) var_4);
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        arr_21 [i_6] = ((/* implicit */int) arr_13 [i_4] [i_4]);
                        arr_22 [i_4] [i_4] [i_4] = ((/* implicit */signed char) var_14);
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 12; i_8 += 3) 
    {
        arr_25 [i_8] = ((/* implicit */short) (+((-9223372036854775807LL - 1LL))));
        var_27 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)70)) << (((/* implicit */int) (_Bool)0)))))));
        arr_26 [i_8] = ((/* implicit */long long int) (((((~(((/* implicit */int) var_11)))) + (2147483647))) << (((max((((var_1) / (((/* implicit */int) arr_20 [i_8] [i_8] [i_8] [i_8])))), (((/* implicit */int) max((arr_2 [i_8]), ((_Bool)1)))))) - (1)))));
    }
    var_28 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (1970778400000136845LL)))), (max((((/* implicit */unsigned long long int) var_13)), (var_0)))))));
    var_29 += ((/* implicit */unsigned long long int) ((signed char) ((var_8) | (var_9))));
}
