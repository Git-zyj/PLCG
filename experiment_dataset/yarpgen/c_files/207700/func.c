/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207700
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (short)16579)) % (-964780103))) <= (((/* implicit */int) ((short) var_17))))))) == ((-(var_0)))));
    var_19 = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 964780093)) ? (((/* implicit */int) (unsigned short)728)) : (((/* implicit */int) (unsigned short)48239))))), (var_0))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */short) var_6);
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((var_14), (var_14)))))) < (var_17)));
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), (var_14)))) : (((/* implicit */int) var_16))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)24610)), ((unsigned short)63)))) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (short)-24617)))) >> (((/* implicit */int) var_10))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)13)))))), (((((min((var_11), (((/* implicit */long long int) arr_10 [i_1])))) + (9223372036854775807LL))) >> (((((unsigned int) var_4)) - (2857623414U))))))))));
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 3; i_4 < 23; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    {
                        var_22 -= ((/* implicit */unsigned long long int) ((((unsigned int) var_16)) % (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_14))))) ? ((+(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [15U]))))))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */int) arr_14 [6LL] [i_3] [(unsigned short)18])) : (((/* implicit */int) var_6)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_15 [i_5] [21])) ? (var_0) : (var_8))) - (4092517473U)))))) ? (var_8) : (max((((/* implicit */unsigned int) (short)-24623)), (388473929U)))));
                    }
                } 
            } 
            arr_20 [i_3] [i_1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */short) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)242), ((unsigned char)13))))) : (min((((/* implicit */unsigned long long int) var_4)), (var_17))))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    arr_26 [i_1] [i_6] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)43)) >= (-964780093)));
                    var_24 += ((/* implicit */unsigned char) (~(min((var_1), ((~(var_15)))))));
                    var_25 = ((/* implicit */unsigned short) var_17);
                }
                var_26 -= ((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) == (((((/* implicit */int) var_6)) ^ (arr_4 [(unsigned char)14]))))) ? (min((((/* implicit */long long int) (unsigned short)9)), (var_11))) : (((/* implicit */long long int) ((int) (-(((/* implicit */int) var_14))))))));
                var_27 -= ((/* implicit */unsigned long long int) (((((_Bool)1) ? (6013518294176198871ULL) : (((/* implicit */unsigned long long int) 3LL)))) != (((/* implicit */unsigned long long int) (~(var_15))))));
                arr_27 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24610)) ? (((/* implicit */int) (signed char)115)) : (964780094)));
                arr_28 [i_6] = ((/* implicit */int) var_3);
            }
        }
        for (int i_8 = 1; i_8 < 22; i_8 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                var_28 = ((/* implicit */unsigned int) (!(((var_4) > (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_1] [(unsigned char)8] [i_1])))))));
                var_29 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) var_8)))));
            }
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_30 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2]))));
            var_31 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_1))) && (((/* implicit */_Bool) arr_10 [i_1]))))), (max((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (var_4)))));
            arr_35 [i_1] [i_8] [i_8] = ((/* implicit */unsigned short) var_6);
            arr_36 [i_8] = ((/* implicit */unsigned long long int) var_12);
        }
        var_32 = ((/* implicit */unsigned char) arr_6 [11LL]);
        var_33 -= ((/* implicit */short) ((unsigned short) (~(((unsigned int) arr_14 [i_1] [i_1] [i_1])))));
    }
    var_34 -= ((/* implicit */_Bool) min((((/* implicit */long long int) 4294967295U)), (8173692807222531615LL)));
}
