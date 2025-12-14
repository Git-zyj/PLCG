/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41338
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_0 [i_1 + 1])), (var_15)));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 17611960806659600012ULL))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) arr_5 [i_1] [i_1 + 1]))))) : (min((((/* implicit */int) (short)-7965)), (arr_7 [i_1] [i_1 + 2] [i_1] [i_1 - 1])))))) && (((/* implicit */_Bool) var_13))));
                    var_21 = ((/* implicit */long long int) arr_11 [i_1 - 1] [i_0] [i_1 + 2] [i_2 + 1] [i_2]);
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (short)4512);
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((var_7) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) : ((-(arr_7 [i_0] [(unsigned char)14] [(unsigned short)0] [i_0]))))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_23 = ((/* implicit */short) (((~(((/* implicit */int) (short)4512)))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) == (834783267049951616ULL))))));
                    var_24 = (~(((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_8 = 1; i_8 < 8; i_8 += 1) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65521))) ? (min((arr_23 [i_8 + 1]), (arr_23 [i_8 + 1]))) : (arr_23 [i_8 + 1]))))));
        var_26 += ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_23 [i_8])), (var_15))) * (((/* implicit */unsigned long long int) (~(6582544246280464104LL))))));
        var_27 *= arr_9 [i_8] [i_8 + 2];
        arr_26 [(unsigned char)4] [i_8 - 1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((11055483399570771468ULL) != (((/* implicit */unsigned long long int) var_1)))) ? (((/* implicit */unsigned long long int) arr_6 [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 - 1])) : (834783267049951621ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_19 [i_8])), (-5326655101938543300LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_11 [i_8] [(unsigned char)10] [i_8 + 2] [i_8 + 2] [i_8]), (var_4))))) : (arr_20 [i_8 - 1]))))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17611960806659600000ULL)) ? (403377415) : (((/* implicit */int) (short)-4512))))) ? (((/* implicit */int) arr_12 [19U] [i_8 + 2] [19U] [i_8 + 1] [i_8] [i_8] [i_8 - 1])) : (((/* implicit */int) ((arr_23 [i_8]) >= (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8 + 3])))))))))));
    }
    for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        var_29 = 9145657287409553462ULL;
        /* LoopNest 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    {
                        var_30 = min((((/* implicit */long long int) max((var_9), (((/* implicit */int) arr_30 [i_10] [i_10]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11891)) & (((/* implicit */int) arr_28 [i_9] [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) arr_30 [i_10] [i_10])))));
                        arr_37 [i_10] [i_10] = (i_10 % 2 == 0) ? (((/* implicit */long long int) ((_Bool) max((((((var_10) + (9223372036854775807LL))) << (((arr_29 [i_9] [i_10] [i_10]) - (4313137435923049014LL))))), (((/* implicit */long long int) ((signed char) 403377415))))))) : (((/* implicit */long long int) ((_Bool) max((((((var_10) + (9223372036854775807LL))) << (((((((arr_29 [i_9] [i_10] [i_10]) - (4313137435923049014LL))) + (1600906279935866801LL))) - (7LL))))), (((/* implicit */long long int) ((signed char) 403377415)))))));
                    }
                } 
            } 
        } 
        var_31 ^= var_11;
    }
    /* LoopNest 2 */
    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
    {
        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            {
                var_32 = var_9;
                var_33 = ((/* implicit */short) (+(((/* implicit */int) var_12))));
                var_34 = ((/* implicit */unsigned short) (short)25157);
            }
        } 
    } 
}
