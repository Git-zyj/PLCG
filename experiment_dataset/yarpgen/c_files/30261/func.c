/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30261
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)44288)), (700035878249461337ULL)));
        var_15 += ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)0)), (max((var_1), (((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_1)))))));
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43362))) : (min((((/* implicit */long long int) var_3)), (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)64810)), (var_1)))), (var_4))))))));
        var_17 = ((/* implicit */long long int) (unsigned short)4);
    }
    var_18 = 12263822070051488118ULL;
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_2)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)1090), ((unsigned short)65533)))) >= (((/* implicit */int) ((unsigned short) 17746708195460090281ULL)))))) : (((int) var_6))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) arr_5 [i_2]);
            var_21 = ((/* implicit */short) ((unsigned int) min((((/* implicit */long long int) max((4294922123U), (((/* implicit */unsigned int) var_14))))), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) + (var_4))))));
            var_22 = ((/* implicit */unsigned short) ((unsigned char) min((((/* implicit */int) arr_7 [i_1] [i_2 - 3])), (14))));
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_10 [i_4] [i_1]))));
                var_24 = ((/* implicit */short) ((unsigned short) var_7));
            }
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_25 -= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)33)) * (((/* implicit */int) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) (short)2175))))))));
                var_26 = ((/* implicit */signed char) (unsigned short)65535);
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [16ULL] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) arr_10 [i_3] [i_1]))));
                var_28 -= ((/* implicit */short) (unsigned short)65535);
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)15)) / (((/* implicit */int) (unsigned short)64809))));
            }
            for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                arr_20 [i_1] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_1] [i_3] [i_6])) ? ((+((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) 16U)) ? (-3048961841891589355LL) : (((/* implicit */long long int) var_1))))));
                arr_21 [i_1] [i_3] = ((/* implicit */int) 4294922121U);
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32641)) ? (((/* implicit */int) (unsigned short)34112)) : (((/* implicit */int) (unsigned short)22174))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))));
                    var_31 = ((/* implicit */int) arr_11 [i_1]);
                }
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) 7721666680361837594ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64812))) >= (4264077188U))))) : (var_1)));
                arr_27 [i_1] [i_1] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)32459)) : (((/* implicit */int) var_2)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) 3763384453U)) && (((/* implicit */_Bool) (unsigned short)32661)))))));
            }
            arr_28 [i_1] [i_1] = ((/* implicit */signed char) arr_15 [i_1]);
            var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 30890098U)) ? (879145859) : (((/* implicit */int) (unsigned short)12348)))) / (((/* implicit */int) ((unsigned short) (unsigned short)32892)))));
            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((3763384453U) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (unsigned char)71))))))))));
        }
        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48009)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50448))) : (3763384453U)))) ? (min((min((((/* implicit */long long int) var_5)), (var_13))), (((/* implicit */long long int) 4294967292U)))) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63))))) | ((((_Bool)1) ? (((/* implicit */int) (short)12393)) : (((/* implicit */int) (short)2892)))))))));
        var_36 = ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-237815140644957523LL) > (((/* implicit */long long int) -241447528)))))) % (min((((/* implicit */unsigned int) arr_14 [i_1] [(unsigned short)11] [i_1] [(unsigned short)13])), (3763384453U))))));
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        var_37 = ((/* implicit */long long int) ((((1U) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)76))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) arr_30 [i_9])))));
        var_38 = ((/* implicit */short) max((((((((/* implicit */_Bool) (unsigned short)60967)) ? (((/* implicit */int) (short)19616)) : (((/* implicit */int) (unsigned char)77)))) & (((/* implicit */int) ((2147483647) <= (((/* implicit */int) arr_7 [i_9] [(_Bool)1]))))))), (((((/* implicit */_Bool) max((arr_26 [i_9] [20U] [i_9]), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (1) : (min((-268435456), (((/* implicit */int) var_9))))))));
        arr_31 [22U] = ((/* implicit */unsigned long long int) ((unsigned char) var_7));
    }
}
