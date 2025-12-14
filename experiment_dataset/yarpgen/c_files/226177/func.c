/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226177
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [7U] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (1335053395086166702LL)))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (4294967295U)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) (short)23);
        var_17 = ((/* implicit */short) max(((unsigned char)255), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_7) << (((((-1870436032) + (1870436082))) - (47)))))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) var_7);
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((min((var_13), (((/* implicit */unsigned int) arr_3 [(unsigned char)10] [i_2])))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))) - (588739253U))))))));
                }
            } 
        } 
        var_20 |= ((((/* implicit */int) var_5)) >> (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_3 [i_1] [i_1])) * (var_2))))))));
    }
    for (int i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1870436031)) ? (((((/* implicit */_Bool) arr_10 [i_4 + 1])) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_4 - 1] [i_5]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (var_11))));
                        var_24 = ((/* implicit */int) var_2);
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) (~((+(-1870436019)))));
                        var_26 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)120), (((/* implicit */unsigned char) arr_9 [i_4])))))) : (min((((/* implicit */unsigned int) arr_9 [i_8])), (0U)))));
                    }
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) var_11))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_9 = 3; i_9 < 8; i_9 += 4) 
    {
        var_28 = ((((/* implicit */long long int) arr_19 [i_9])) > (var_3));
        var_29 = ((/* implicit */short) arr_4 [i_9]);
    }
    var_30 = ((/* implicit */short) var_6);
    var_31 = ((/* implicit */unsigned int) var_9);
    var_32 = var_4;
}
