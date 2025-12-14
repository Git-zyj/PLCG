/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189711
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_3 [(short)7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) >= (14173019306580659327ULL)));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 + 1])) ? (arr_4 [i_2] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
                    }
                } 
            } 
            var_14 = ((/* implicit */long long int) 134217728U);
        }
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) -2146816476147720373LL))));
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-17020)) : (((/* implicit */int) (short)31182))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
    {
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_9))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 2; i_6 < 15; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 4) 
                {
                    {
                        var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) 18014398509481984ULL)) ? (((/* implicit */int) arr_19 [i_5] [i_6] [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) ((signed char) var_4)))));
                        var_19 = ((/* implicit */signed char) (short)-1);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-49)) ? (1152851135862669312LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52687)))))) || (((/* implicit */_Bool) var_11)))))));
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 14; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                {
                    arr_29 [i_8] = ((/* implicit */short) (-(((/* implicit */int) arr_22 [i_8 + 2] [i_8] [i_8 + 1] [i_8 - 1]))));
                    arr_30 [i_8] = ((/* implicit */short) ((3223486879U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8] [i_8])))));
                    arr_31 [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) arr_5 [i_4] [i_4] [i_9]);
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_4] [i_4])) | (((/* implicit */int) var_12))));
                }
            } 
        } 
    }
    var_22 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((-1152851135862669312LL), (((/* implicit */long long int) min((var_2), (((/* implicit */short) var_9))))))));
    var_23 = ((/* implicit */unsigned int) min((-1152851135862669313LL), (((/* implicit */long long int) var_3))));
    var_24 ^= ((/* implicit */signed char) var_11);
    var_25 = (~(var_10));
}
