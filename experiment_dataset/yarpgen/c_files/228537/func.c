/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228537
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_12 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_3]))) | (arr_0 [i_3])));
                        var_14 = ((/* implicit */long long int) var_7);
                        var_15 *= ((/* implicit */unsigned int) (unsigned char)211);
                        var_16 = ((/* implicit */unsigned long long int) var_10);
                        var_17 = ((/* implicit */unsigned char) (+((-(arr_5 [i_0] [i_2] [i_3])))));
                    }
                } 
            } 
        } 
        arr_13 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)2)) / (((/* implicit */int) arr_11 [15ULL] [i_0] [i_0] [i_0] [(unsigned char)8]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) var_10))))) : (min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) -228483161)) : (var_12))), (((/* implicit */long long int) arr_7 [i_0] [i_0] [(_Bool)1]))))));
        arr_14 [(unsigned char)2] = ((/* implicit */short) (unsigned short)63262);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (unsigned char i_5 = 1; i_5 < 24; i_5 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) max((13616741932763654470ULL), (((/* implicit */unsigned long long int) (unsigned char)236))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (4294967282U) : (arr_5 [i_5 + 1] [i_5 + 1] [i_5 + 1])))))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [19U] [i_4] [(_Bool)1] [i_4]))) & (arr_3 [(short)1] [i_0])));
                    arr_20 [i_0] [i_5] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)245))))) >= (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) & (arr_17 [i_0] [i_4] [i_4] [i_5 - 1]))))));
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_7 = 3; i_7 < 14; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                for (unsigned char i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (short)14696))));
                            arr_36 [i_7] [i_7 + 1] [i_8] [i_8] [i_8] [i_9 + 1] [(signed char)7] = ((/* implicit */unsigned char) var_9);
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)253)) ? (((((/* implicit */_Bool) arr_15 [i_7] [(signed char)7])) ? ((-(((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)11)))) >= (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (1LL)))))))))));
                            arr_37 [i_6] [i_9] [i_7] [0ULL] [i_6] = ((/* implicit */unsigned char) arr_21 [i_9 + 4] [i_6]);
                            var_22 = ((/* implicit */int) (unsigned char)191);
                        }
                    } 
                } 
            } 
            var_23 *= ((/* implicit */unsigned char) arr_7 [i_7 - 3] [i_6] [i_6]);
        }
        for (signed char i_11 = 4; i_11 < 15; i_11 += 2) 
        {
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_15 [i_11 - 4] [(signed char)16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (var_2)))))))))));
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_0))));
                        arr_45 [i_6] [i_12] [i_12] [i_13] = ((/* implicit */short) (_Bool)0);
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 1; i_14 < 14; i_14 += 4) 
                        {
                            arr_49 [i_6] [i_11 - 3] [i_12] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) max((3695186494U), (((/* implicit */unsigned int) var_1))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) + (((/* implicit */int) min((arr_22 [i_14 + 1]), ((unsigned char)11))))));
                        }
                        for (short i_15 = 2; i_15 < 15; i_15 += 4) 
                        {
                            arr_54 [i_6] [i_11 - 3] [i_12] [i_12] [i_11 - 3] [i_6] = ((/* implicit */signed char) (+(max((((/* implicit */long long int) max(((unsigned char)11), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))), (arr_29 [i_12] [i_11] [i_11] [i_13] [i_15 - 1] [i_15 - 1])))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_12)))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))) - (arr_24 [(_Bool)1] [i_15] [i_11 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_16 = 1; i_16 < 15; i_16 += 3) 
            {
                for (long long int i_17 = 1; i_17 < 13; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 16; i_18 += 1) 
                    {
                        {
                            arr_62 [i_16] [i_18] [i_17] [i_16 - 1] [i_11 - 4] [i_6] [i_16] = ((/* implicit */unsigned char) 785451067U);
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 11718486833427587315ULL)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (signed char)116))))))));
                            arr_63 [i_6] [i_11 - 3] [i_16] [i_11 - 2] [i_18] [i_17 + 3] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(3588785984U)))) ? (max((((((/* implicit */int) (unsigned char)253)) - (((/* implicit */int) (unsigned short)1586)))), (((/* implicit */int) arr_7 [i_11 + 1] [i_11 + 1] [i_11 - 3])))) : ((-(min((arr_38 [i_6] [(_Bool)0]), (((/* implicit */int) (short)27135))))))));
                            arr_64 [0U] [i_6] [(_Bool)1] [i_11] [i_17 - 1] [i_18] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) 599780793U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6] [i_11] [i_16 - 1]))) : (arr_1 [i_6])))));
                            var_29 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_12) | (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_6] [i_6] [i_6] [i_6] [(short)13] [5] [(short)13])))))) ? ((-(arr_5 [(unsigned short)17] [(short)23] [(unsigned short)17]))) : (((/* implicit */unsigned int) ((var_1) & (((/* implicit */int) arr_43 [i_16] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16])))))))), (((((/* implicit */_Bool) (-(arr_52 [(unsigned char)3] [i_11 - 4] [i_16 - 1] [i_17] [(unsigned char)7] [i_18])))) ? (((var_6) | (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_6] [1LL] [i_16] [i_6] [i_6] [12U]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
                        }
                    } 
                } 
            } 
        }
        arr_65 [i_6] [(signed char)10] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) 18446744073709551609ULL)))));
        var_30 = ((/* implicit */unsigned int) ((signed char) arr_46 [i_6] [i_6] [i_6] [i_6] [(signed char)14] [(short)5]));
        var_31 = ((unsigned int) ((int) arr_17 [i_6] [(short)1] [i_6] [i_6]));
    }
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)247)))) >= (var_2)));
        arr_69 [i_19] [(_Bool)1] = ((/* implicit */unsigned char) arr_2 [i_19] [i_19]);
    }
    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (!((_Bool)1)))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_11)))))) : ((+(((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))))))));
    var_34 = ((/* implicit */unsigned char) (unsigned short)63943);
    var_35 = ((/* implicit */unsigned char) ((signed char) (signed char)-108));
}
