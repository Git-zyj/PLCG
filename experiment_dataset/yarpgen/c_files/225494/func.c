/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225494
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
    var_17 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_0 [i_0 - 1] [i_1])))), (max(((-(((/* implicit */int) (unsigned char)204)))), (((/* implicit */int) arr_3 [i_0 - 1])))))))));
            arr_8 [i_0] [i_1] [i_0] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 1])) && (((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))))))), (((((((/* implicit */unsigned int) 962754795)) & (var_9))) * (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-32752), ((short)29262))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_0 - 2]);
            var_19 += ((/* implicit */short) (+(962754781)));
        }
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
        {
            arr_17 [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) ((_Bool) (short)32752))), (arr_5 [i_0] [i_0] [i_0 - 1])));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((3742448651U), (((/* implicit */unsigned int) max(((short)2899), (((/* implicit */short) (unsigned char)205))))))))));
            arr_18 [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) (short)21110)) : (arr_1 [i_0] [i_0 - 1]))), ((-(((((/* implicit */_Bool) -1015166653)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [i_0] [i_3] [i_3]))))))));
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 23; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))));
                        arr_27 [i_4] [i_0 - 2] [i_3] [i_3] [10U] = ((/* implicit */unsigned int) ((_Bool) max((11605723552971892964ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))));
                        arr_28 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((2226606109U), (((/* implicit */unsigned int) var_7)))))));
                    }
                } 
            } 
            arr_29 [i_3] [(short)2] [i_0] = ((/* implicit */short) (-((+(4294967295U)))));
        }
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_43 [10] [i_9] [i_7 - 1] [i_7 - 1] [i_7] = ((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((_Bool) var_4)))));
                            arr_44 [i_0] [i_8] [(short)23] [(unsigned char)16] [i_7] = ((/* implicit */short) ((3948518664119876084ULL) & (((/* implicit */unsigned long long int) -962754796))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 1239392829U)) <= (4159432104610756972ULL)))))))));
                            var_23 -= ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) arr_24 [i_0] [i_6] [i_0] [i_6] [i_0])) : (6841020520737658652ULL))));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */short) arr_19 [i_0] [i_7] [i_7]);
                            arr_47 [i_0] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7 - 1]))) ^ (0U)));
                            arr_48 [i_7] [i_6] [i_10] [(short)14] = var_2;
                            arr_49 [i_7] [i_6] [i_7 - 1] [i_8 + 2] [2] [i_7 - 1] [5U] = ((/* implicit */_Bool) ((int) arr_24 [i_0] [i_6] [i_0] [i_7] [i_10]));
                        }
                        for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            arr_52 [i_0] [i_7] [i_7 - 1] [i_7] [i_8] [i_7] [i_11] = ((/* implicit */unsigned long long int) 2147483647);
                            arr_53 [i_0] [i_6] [i_7 - 1] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) var_15));
                            arr_54 [i_6] [(_Bool)1] [i_6] [i_6] [i_7 - 1] [i_8 + 2] [i_7 - 1] |= ((/* implicit */short) max((((/* implicit */int) (short)2899)), (-2006322415)));
                            arr_55 [i_7] [i_7] [i_7] [i_8 - 1] [i_11] = ((/* implicit */short) ((_Bool) var_13));
                        }
                        arr_56 [16ULL] [i_0] [i_7] [16ULL] [i_7] [i_8 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-15705)) ? (2172234373U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15685)))));
                    }
                } 
            } 
        } 
        var_25 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 11605723552971892996ULL)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19979))))), (((/* implicit */unsigned int) 993501216))))) ? (763983705U) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) 1U)))))));
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((int) (unsigned char)205)))));
    }
    var_27 *= ((/* implicit */short) max((max((((((/* implicit */unsigned int) var_3)) ^ (4294967287U))), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) var_0))));
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max(((short)-15705), ((short)32767)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (var_13)))))) <= (((((/* implicit */_Bool) ((unsigned char) (short)15688))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767))))) : (11605723552971892964ULL)))));
}
