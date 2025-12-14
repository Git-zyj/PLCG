/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37415
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 = ((var_10) * (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
                    var_18 = ((/* implicit */_Bool) ((short) arr_6 [i_0] [i_1] [i_1]));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (int i_4 = 3; i_4 < 23; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) arr_2 [i_4]);
                            var_20 = ((/* implicit */signed char) (+(max((max((((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3])), (var_1))), (((893466269) - (((/* implicit */int) arr_0 [(_Bool)1]))))))));
                            var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) -893466270)), (((((/* implicit */_Bool) var_15)) ? (arr_11 [i_4]) : (min((arr_5 [i_5] [i_5]), (985380420U)))))));
                            var_22 = ((_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)2]))) <= (773848339U))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) ^ (3634534223U))) : (max((((/* implicit */unsigned int) arr_15 [i_5])), (arr_5 [i_3] [i_4])))));
                        }
                    } 
                } 
                arr_22 [1ULL] [i_4 - 3] [i_4 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4]))) - (max((((773848361U) + (((/* implicit */unsigned int) arr_9 [i_3] [i_4] [(signed char)20] [i_4])))), (((arr_11 [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_4 - 3] [i_4] [i_4] [i_4 - 3])))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_7 = 3; i_7 < 11; i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = ((/* implicit */unsigned char) (-(var_12)));
        arr_27 [i_7 + 3] [i_7] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7] [i_7]))) | (var_0)))));
    }
    for (unsigned char i_8 = 3; i_8 < 11; i_8 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */int) (~(max((arr_28 [i_8 + 1]), (arr_28 [i_8 - 3])))));
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [i_8] [i_8 + 2])), (arr_17 [i_8] [i_8] [(unsigned char)8] [20])))) : (((/* implicit */int) arr_16 [2ULL] [2ULL])))) / (var_10)));
    }
    for (int i_9 = 1; i_9 < 19; i_9 += 3) 
    {
        arr_33 [i_9] = ((/* implicit */short) min((((signed char) (~(1874832917)))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 985380420U)) != ((+(arr_3 [i_9]))))))));
        var_25 = (i_9 % 2 == 0) ? (((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) : (2224004969U))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) 764733874)) : (985380423U))))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_9 - 1] [i_9])) << (((((/* implicit */int) arr_16 [i_9 - 1] [i_9])) - (81))))))))) : (((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) : (2224004969U))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) 764733874)) : (985380423U))))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_9 - 1] [i_9])) << (((((((/* implicit */int) arr_16 [i_9 - 1] [i_9])) - (81))) - (14)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_10 = 2; i_10 < 17; i_10 += 1) 
        {
            var_26 -= ((var_16) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-30622))));
            arr_36 [i_9] = ((/* implicit */unsigned long long int) arr_14 [i_9 - 1] [i_9 + 1]);
        }
        for (unsigned int i_11 = 4; i_11 < 17; i_11 += 4) /* same iter space */
        {
            arr_39 [i_9] = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned char)155)) ? (((((/* implicit */int) arr_10 [i_9])) << (((var_10) + (1380741110))))) : ((+(((/* implicit */int) (short)-20070)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_11 + 2] [i_9] [i_9 - 1]))) == (9U))))));
            arr_40 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_9 + 1]))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_9 - 1]))) : (((((/* implicit */_Bool) arr_1 [i_9 + 1])) ? (((/* implicit */int) arr_1 [i_9 + 1])) : (((/* implicit */int) arr_1 [i_9 + 1]))))));
            arr_41 [i_9] = max((((/* implicit */int) arr_15 [i_9])), (((((/* implicit */int) arr_15 [i_9])) % (-1618548849))));
        }
        for (unsigned int i_12 = 4; i_12 < 17; i_12 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_13 = 4; i_13 < 16; i_13 += 2) 
            {
                for (unsigned char i_14 = 3; i_14 < 18; i_14 += 2) 
                {
                    for (int i_15 = 4; i_15 < 18; i_15 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-30963)) <= (((/* implicit */int) (unsigned short)17198)))) ? ((~(((/* implicit */int) (short)20069)))) : (((((/* implicit */_Bool) arr_48 [i_15] [i_12])) ? (((/* implicit */int) arr_20 [i_9])) : (227221776)))))) ? (2686806407U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9 - 1] [i_9])))));
                            arr_53 [i_13] [i_13] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((unsigned long long int) var_15));
                            arr_54 [i_9] [i_9] [i_9] [i_9] [i_15] = max((((((/* implicit */_Bool) arr_44 [i_12 + 1] [i_9] [i_13 + 4])) ? (((/* implicit */int) arr_30 [i_12 + 1] [i_12 + 1])) : (arr_44 [i_12 + 1] [i_9] [i_13 + 4]))), (((((/* implicit */_Bool) ((arr_35 [i_9] [i_9]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_12] [i_12])))))) ? (((-893466270) / (((/* implicit */int) arr_16 [i_9] [i_9])))) : (((/* implicit */int) min(((short)29847), (((/* implicit */short) var_2))))))));
                        }
                    } 
                } 
            } 
            arr_55 [i_9] [i_12] [i_12] |= ((/* implicit */signed char) -893466278);
            arr_56 [i_9] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (16711680) : (((/* implicit */int) (unsigned char)155))))) ? ((~(9749215211730661059ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9 + 1]))))));
            /* LoopNest 3 */
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    for (unsigned short i_18 = 2; i_18 < 17; i_18 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_9 + 1] [i_12 + 2] [i_16 - 1])) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) arr_14 [i_18 + 1] [(unsigned short)11]))))) ? ((+(((/* implicit */int) arr_34 [i_9 + 1] [i_12 - 4] [i_16 - 1])))) : (((/* implicit */int) arr_14 [i_18 + 2] [i_18 + 2]))));
                            arr_68 [i_9] [(unsigned char)13] [16U] [i_18] [i_9] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_47 [i_9] [i_9 - 1] [i_9] [i_16 - 1])))) + ((-(((/* implicit */int) arr_47 [i_9 - 1] [i_9 - 1] [i_9] [i_16 - 1]))))));
                        }
                    } 
                } 
            } 
            var_29 += ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_12 [i_12 - 2] [19ULL])) ? (((arr_64 [i_9] [i_12 + 3] [i_12]) ? (8388607ULL) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) 3309586875U)))), (((/* implicit */unsigned long long int) min(((~(201326592))), (((/* implicit */int) arr_67 [i_12 + 1] [i_12 - 4] [i_12] [i_12 - 4] [i_12 + 2])))))));
        }
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        arr_72 [(unsigned short)7] [i_19] = min((min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_11)))), ((-(((/* implicit */int) arr_14 [i_19] [i_19])))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_10 [i_19])) : (((/* implicit */int) arr_30 [i_19] [i_19])))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [(unsigned char)5] [(unsigned char)5])) + (1818363735))))));
        arr_73 [i_19] [9] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((_Bool) arr_4 [i_19] [i_19] [i_19])))))));
        arr_74 [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_67 [i_19] [i_19] [i_19] [i_19] [i_19]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)46426)))) <= (((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((var_16) - (923617795U)))))));
    }
    var_31 = ((/* implicit */int) var_12);
}
