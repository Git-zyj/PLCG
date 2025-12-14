/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31190
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
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0 - 4] = (((+(((/* implicit */int) arr_0 [i_0 - 1])))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) ^ (var_4))) - (668447385007204814ULL))));
        var_12 = ((/* implicit */int) ((short) arr_0 [(unsigned char)11]));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1])))))));
            arr_6 [i_1 + 4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0])) >= (((/* implicit */int) var_5)))) ? (var_8) : (min((((/* implicit */int) (unsigned char)4)), (var_7)))))) ? (((/* implicit */int) arr_0 [i_0])) : (var_0)));
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_10 [i_0 - 4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((int) var_10))) ? (max((17742390836419300431ULL), (((/* implicit */unsigned long long int) 32767)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (var_2)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (_Bool)1))))))));
            var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [(short)4] [i_2] [i_0 + 1]), (arr_8 [6] [i_0] [i_0 - 4])))) ? (((((/* implicit */int) arr_8 [i_0] [i_2] [6])) << (((((/* implicit */int) arr_8 [i_0 - 2] [i_2] [11])) - (118))))) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [10] [i_2])) : (((/* implicit */int) var_3))))));
            var_15 -= ((/* implicit */unsigned int) arr_0 [i_0 - 3]);
            arr_11 [i_0] [10U] [i_0 - 2] &= ((/* implicit */unsigned long long int) arr_1 [i_0 - 4]);
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned char) ((short) arr_18 [i_0] [i_0 - 3] [i_0 - 4] [i_0 - 3] [i_0 - 3] [(unsigned short)6]))))));
                            var_17 = ((/* implicit */int) 9355192133798125899ULL);
                            var_18 = ((/* implicit */signed char) arr_17 [i_0] [i_5] [i_5] [i_4] [i_5]);
                        }
                    } 
                } 
                var_19 += ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_1))))), (min((((/* implicit */short) (!(((/* implicit */_Bool) var_7))))), (arr_17 [i_0 + 1] [4] [i_2] [i_3] [i_3])))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    for (short i_7 = 1; i_7 < 10; i_7 += 3) 
                    {
                        {
                            arr_25 [i_6] = (i_6 % 2 == zero) ? (((/* implicit */unsigned char) (~((((((_Bool)0) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_17 [10] [i_2] [i_6] [i_6] [i_7])) + (15480))))) - (2097148)))))))) : (((/* implicit */unsigned char) (~((((((_Bool)0) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1)))) << (((((((/* implicit */int) var_9)) << (((((((/* implicit */int) arr_17 [10] [i_2] [i_6] [i_6] [i_7])) + (15480))) - (19797))))) - (2097148))))))));
                            arr_26 [5] [i_6] [(short)11] [5] [i_7] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [(short)5] [i_2] [i_2]))))) ? (5222712378452979365ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_0])), (2411250959U)))))))));
                        }
                    } 
                } 
                arr_27 [6ULL] [6ULL] [i_3] = ((/* implicit */signed char) (-(var_0)));
            }
            for (unsigned char i_8 = 1; i_8 < 10; i_8 += 2) 
            {
                arr_30 [3U] = ((/* implicit */int) min((((/* implicit */unsigned int) arr_19 [i_0] [i_0 - 2] [i_2] [i_0] [i_0 - 4] [(short)4] [2U])), (((((/* implicit */_Bool) arr_7 [i_0])) ? (2411250958U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_8) : (0))))))));
                var_20 = ((/* implicit */unsigned int) arr_7 [i_0 - 3]);
                arr_31 [(unsigned char)0] [(unsigned char)5] [i_8 - 1] [i_8] = ((/* implicit */unsigned char) (+(min((((var_10) - (-2))), (((((/* implicit */_Bool) -5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [i_0] [i_0 - 3] [i_2] [8] [i_8] [(short)1]))))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 2147475456U))) ? (0) : (((0) % (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(-840371031))) != (2147481600))))) : (((((((/* implicit */_Bool) 1883716336U)) && (((/* implicit */_Bool) arr_1 [i_2])))) ? (((((/* implicit */_Bool) (short)10281)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_8]))))))))));
            }
        }
    }
    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
    {
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (((/* implicit */int) arr_32 [i_9] [i_9])) : (((/* implicit */int) var_5))))) ? (max((1883716339U), (((/* implicit */unsigned int) (signed char)-33)))) : (((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) ^ (max((arr_33 [i_9]), (((/* implicit */unsigned int) -955340558))))))));
        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)56)) >= ((~(var_10))))) ? (arr_33 [i_9]) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) arr_32 [2U] [i_9])) : (var_0)))) | (arr_33 [i_9])))));
    }
    var_24 = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (649643541U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >= (var_0))))));
    /* LoopSeq 2 */
    for (short i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        arr_37 [i_10] = max((max((((/* implicit */unsigned long long int) 2411250968U)), (8135965868218571164ULL))), (((/* implicit */unsigned long long int) arr_19 [i_10] [i_10] [2U] [i_10] [i_10] [i_10] [6ULL])));
        arr_38 [i_10] = ((/* implicit */signed char) (-(((unsigned long long int) (unsigned short)21758))));
        var_25 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 18U)) * (((14981352900496875018ULL) / (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1883716336U))))))));
        arr_39 [6U] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) : (2419027443U)))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) arr_40 [i_11]);
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            arr_48 [i_11] [i_12] [i_11] = ((/* implicit */unsigned long long int) 1569736384);
            arr_49 [i_11] = ((/* implicit */unsigned long long int) var_1);
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
            {
                arr_55 [i_11] [i_13] [i_14] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((16U), (3076858853U)))) ? (min((((/* implicit */unsigned long long int) var_3)), (var_6))) : (((/* implicit */unsigned long long int) (-(121003609)))))) / (((/* implicit */unsigned long long int) var_2))));
                var_27 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (((((/* implicit */_Bool) arr_54 [i_11] [i_13] [i_14])) ? (min((var_1), (((/* implicit */unsigned int) -1698516867)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_11] [i_11] [i_11])) ? (536870912) : (((/* implicit */int) arr_47 [i_11] [i_13] [i_13])))))))));
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) min((arr_50 [3U] [i_13] [i_14]), (arr_50 [i_11] [i_11] [i_11]))))));
            }
            /* LoopSeq 2 */
            for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                arr_59 [i_11] [i_11] [i_11] = ((/* implicit */short) ((int) max((((/* implicit */unsigned long long int) arr_43 [4])), ((~(10744450361803456504ULL))))));
                var_29 += var_2;
                var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) arr_54 [i_11] [i_11] [i_11])))))))));
            }
            for (unsigned int i_16 = 3; i_16 < 24; i_16 += 1) 
            {
                var_31 = ((/* implicit */unsigned short) arr_41 [i_16]);
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_11] [7] [i_13] [i_16])) ? (max((((/* implicit */unsigned int) arr_58 [i_16 + 1] [i_16 - 2] [i_16 - 1] [i_16 - 2])), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) / (arr_42 [16ULL]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                arr_62 [i_11] [i_11] [i_16 - 2] = ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_54 [i_11] [23] [i_16 + 1])) ? (((/* implicit */int) (unsigned char)45)) : (var_8))), (((/* implicit */int) (short)5928)))), (((arr_46 [i_16 - 3] [i_16 - 3] [i_16 - 3]) | (arr_46 [i_16 + 1] [i_16 - 2] [i_16 - 3])))));
            }
            /* LoopNest 2 */
            for (short i_17 = 0; i_17 < 25; i_17 += 2) 
            {
                for (unsigned char i_18 = 1; i_18 < 24; i_18 += 3) 
                {
                    {
                        arr_69 [i_11] [i_11] [i_13] [i_17] [i_18 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) arr_53 [i_11] [i_13] [i_17]))))))));
                        var_33 |= ((/* implicit */unsigned int) max(((+(((((/* implicit */int) (signed char)(-127 - 1))) / (arr_57 [23ULL] [23ULL] [23ULL] [(unsigned short)12]))))), ((-(((/* implicit */int) var_3))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 3) 
        {
            for (int i_20 = 4; i_20 < 22; i_20 += 1) 
            {
                for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                {
                    {
                        arr_79 [i_20] [i_21 + 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)17)), ((unsigned char)115)));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3407397218U)) ? (((/* implicit */int) arr_77 [i_11] [i_19] [i_20] [i_21])) : (((/* implicit */int) (short)-6650))))) ? (arr_42 [i_19]) : (((/* implicit */unsigned int) var_8))));
                    }
                } 
            } 
        } 
    }
}
