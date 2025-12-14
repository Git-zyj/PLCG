/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201163
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) var_8);
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) (short)23033)))))), (min((((/* implicit */unsigned long long int) min((arr_0 [i_1]), (((/* implicit */long long int) var_3))))), (min((16960642085565456165ULL), (((/* implicit */unsigned long long int) var_0)))))))))));
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) min((((((/* implicit */int) ((3275548699010692650LL) <= (((/* implicit */long long int) ((/* implicit */int) var_10)))))) * ((~(((/* implicit */int) var_16)))))), ((~(((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1] [i_3]))))))));
                        arr_11 [i_0] [i_0] [(_Bool)1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) * ((~(min((var_8), (((/* implicit */long long int) (unsigned char)241))))))));
                        arr_12 [(short)3] [i_3] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) ^ (((((/* implicit */long long int) ((/* implicit */int) (short)12164))) / (4942717989246250119LL)))))) ? (((/* implicit */int) ((arr_2 [i_2 - 1] [i_2 - 2] [i_2 + 1]) >= (arr_2 [i_2 - 1] [i_2 + 1] [i_2 - 1])))) : (((/* implicit */int) (short)-11949))));
                        arr_13 [i_0] [i_3] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
        }
        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            arr_17 [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [(_Bool)1])))))));
            arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) var_6);
            var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min(((unsigned char)113), ((unsigned char)14)))) ? (((((/* implicit */int) arr_9 [i_0] [i_0] [i_4] [i_0] [i_4] [i_0])) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_15 [i_0]))))));
        }
        var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-82)) && (((/* implicit */_Bool) 2154520043U))));
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_21 = ((/* implicit */long long int) arr_20 [i_5]);
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) (((~(((/* implicit */int) max(((unsigned short)6851), (((/* implicit */unsigned short) (short)32381))))))) + (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36381))))));
                arr_27 [i_5] = ((/* implicit */int) var_3);
                var_23 = ((((/* implicit */_Bool) 1486101988144095451ULL)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) (unsigned short)3314)));
            }
            var_24 ^= ((min((((/* implicit */long long int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) (unsigned short)36376))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((-9223372036854775807LL - 1LL)))))) - (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_6])) ^ (var_7)))));
        }
        for (short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
        {
            var_25 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_8] [i_8])), (min((arr_21 [i_5] [i_5] [i_5]), (arr_21 [i_5] [i_5] [i_8])))));
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                for (unsigned int i_10 = 1; i_10 < 16; i_10 += 3) 
                {
                    {
                        var_26 -= ((/* implicit */_Bool) min((((/* implicit */long long int) min((min((var_12), (((/* implicit */unsigned int) (unsigned char)213)))), (((/* implicit */unsigned int) var_2))))), (((((/* implicit */_Bool) (short)-31623)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-21494)), (2105336318U)))) : (-5643456911649296187LL)))));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_30 [i_5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)204)))), (((/* implicit */int) arr_23 [i_10] [i_9] [i_8]))))) % (arr_4 [i_5])));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
        {
            arr_38 [(signed char)2] [i_11] |= ((/* implicit */signed char) arr_26 [i_5] [i_5] [(unsigned char)14] [i_11]);
            var_28 = ((/* implicit */_Bool) (signed char)-80);
            arr_39 [i_5] [i_5] [(short)16] &= ((/* implicit */short) var_9);
        }
        for (short i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
        {
            arr_42 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 6622506549718916235LL))) ? (max((6316466681478158446ULL), (((/* implicit */unsigned long long int) 2189630978U)))) : (((/* implicit */unsigned long long int) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))) ? (min((min((arr_34 [i_5] [(short)11] [i_5] [i_12]), (((/* implicit */long long int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_12] [i_12])))), (min((var_1), (((/* implicit */long long int) (signed char)5)))))) : (((319914928751855261LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
            arr_43 [i_5] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)-32746), (((/* implicit */short) (unsigned char)38)))))))) >= (min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) -7389686528423203687LL)) * (1486101988144095450ULL)))))));
        }
        arr_44 [i_5] = ((((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) arr_1 [i_5] [i_5]))))) <= (16960642085565456164ULL))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) ^ (((unsigned long long int) arr_28 [i_5] [i_5])))) : (arr_10 [i_5] [i_5] [i_5] [i_5] [(unsigned char)9]));
        var_29 |= ((/* implicit */short) ((32767U) / (((/* implicit */unsigned int) (+(max((((/* implicit */int) var_6)), (var_7))))))));
    }
    var_30 = ((/* implicit */unsigned char) 6403139706673059688LL);
    var_31 = ((/* implicit */int) min((min((((/* implicit */long long int) var_2)), (((long long int) (_Bool)1)))), ((+(min((var_1), (((/* implicit */long long int) var_12))))))));
}
