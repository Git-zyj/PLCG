/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238474
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
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)20956)) ? (var_1) : (var_6))) < (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) % (var_3)));
                                var_12 += ((/* implicit */unsigned long long int) var_5);
                                var_13 += ((/* implicit */int) (((~(((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20956))))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
                                var_14 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) (~(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_17 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((var_4) ? (9135124294200439602ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) << (((var_4) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5)))))) << ((+(((((/* implicit */_Bool) 7683130129108015243ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))) : (9313877074332602160ULL)))))));
                                arr_18 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 9313877074332602174ULL)) ? (arr_5 [i_0 + 1] [i_1] [i_0] [i_6]) : (((/* implicit */int) var_10))))) - (((((/* implicit */_Bool) 1150960025U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))) : (var_3)))))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1150959995U)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2251782633816064LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (arr_2 [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_15 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((int) var_7)) << (((((unsigned int) arr_21 [4U] [i_1] [i_2] [i_2] [i_7 + 2] [i_8])) - (3768932056U)))))) ? (var_0) : (((/* implicit */unsigned int) ((int) ((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19786)))))))));
                                arr_24 [i_0] [(signed char)18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0 - 2] [i_0] [i_0 - 2])) ? (((/* implicit */int) (unsigned short)20949)) : (((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 2] [i_0] [i_2]))))) ? (min((var_2), (((/* implicit */unsigned int) (!(var_4)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((unsigned short) -3180797171616723898LL))) : (((/* implicit */int) ((signed char) 8873629747614466154LL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            {
                                arr_30 [i_9] [i_0] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (arr_5 [i_0] [i_9] [i_0] [i_9]) : (((/* implicit */int) (unsigned short)44586))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_7 [i_0] [i_0] [i_2] [i_0] [i_0]) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_1]))))) : (min((((/* implicit */unsigned int) var_10)), (var_6)))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_27 [i_0] [8ULL] [i_0] [i_9])) : (377863275865286332LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8156371006213196920ULL)))))))) : (((/* implicit */long long int) (((~(var_3))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))))));
                                var_16 |= ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6)))))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((((/* implicit */long long int) arr_4 [i_10] [i_0 - 2])) % (-7123777464571065974LL))), (((8873629747614466154LL) + (((/* implicit */long long int) arr_4 [i_10] [i_0 - 1])))))))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(arr_3 [i_10]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 18; i_12 += 1) 
                        {
                            {
                                arr_36 [i_0] [i_0] [1] [i_0] = ((/* implicit */unsigned short) arr_23 [i_2]);
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_7)) ? (arr_23 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_4))))) : (var_6)));
                                arr_37 [i_0] [(signed char)15] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((unsigned int) var_7))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 0U)))) : (((((/* implicit */_Bool) 1808314191)) ? (65280U) : (arr_21 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1]))))) : ((((-(arr_32 [i_0] [i_1] [i_2] [i_2] [i_11] [i_12]))) ^ (arr_33 [i_0] [i_0] [i_0] [i_0 - 1])))));
                                arr_38 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_11] [i_11] [i_12 + 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))) % (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) ^ (arr_31 [i_11] [i_1] [i_2] [i_11] [i_12 - 1])))) ? (arr_11 [i_11] [i_1] [i_12 + 1]) : (((var_4) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1] [i_2] [i_11] [i_12 - 1])) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_11])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20950)))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7003891354692216543ULL)) ? (var_8) : (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))) : (var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 1) 
    {
        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_15 = 1; i_15 < 19; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 2; i_17 < 16; i_17 += 1) 
                        {
                            {
                                arr_55 [i_13] [i_13] [i_13 + 1] [i_13] [i_14] [5] = ((/* implicit */unsigned char) var_1);
                                arr_56 [i_17] [i_14] [i_15 + 1] [i_14] [i_13 + 1] = ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_52 [i_14] [i_14])), ((+(((/* implicit */int) (_Bool)0)))))) != (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))));
                                arr_57 [i_13 + 1] [i_14] [i_15 - 1] [(_Bool)1] [i_17] |= ((/* implicit */unsigned long long int) ((unsigned char) max((((8156371006213196900ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_14] [i_14]))))), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -1)))))));
                                var_21 = ((/* implicit */int) -210938873007321634LL);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_18 = 3; i_18 < 18; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
                    {
                        {
                            arr_63 [i_14] = ((/* implicit */_Bool) ((unsigned char) var_11));
                            arr_64 [i_14] [i_18 + 1] [i_14] [i_14] = ((/* implicit */signed char) ((((((/* implicit */int) (short)-1)) + (2147483647))) << (((arr_48 [i_19]) - (14841526992353151923ULL)))));
                            arr_65 [i_13 + 1] [i_14] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_43 [i_13 + 1] [i_13 + 1]), (arr_43 [i_13 - 1] [i_13 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_20 = 1; i_20 < 14; i_20 += 1) 
    {
        for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned short i_23 = 2; i_23 < 14; i_23 += 1) 
                    {
                        {
                            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 1150960025U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)127))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [(unsigned short)8] [14ULL] [i_22] [i_22] [i_22])) << (((((/* implicit */int) var_9)) + (30)))))) ? (((/* implicit */unsigned long long int) ((8873629747614466144LL) >> (((((/* implicit */int) (signed char)127)) - (95)))))) : (arr_49 [i_20] [i_21 + 1] [i_22] [i_23]))) : (var_8)));
                            arr_76 [i_20] [i_23] [i_22] [i_22] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_66 [i_23 - 2]), (arr_66 [i_20 - 1])))) && (((((/* implicit */_Bool) arr_66 [i_20 - 1])) || (((/* implicit */_Bool) arr_66 [i_23 - 2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 15; i_24 += 2) 
                {
                    for (int i_25 = 0; i_25 < 15; i_25 += 1) 
                    {
                        {
                            var_23 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12))) : (11442852719017335045ULL))))));
                            arr_82 [i_24] [i_25] |= ((/* implicit */unsigned char) ((((arr_75 [i_20 - 1] [i_20 + 1] [i_21 + 1] [i_21 + 1] [i_24] [i_25]) ? (0ULL) : (((/* implicit */unsigned long long int) var_2)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_35 [i_25] [i_24] [i_25] [i_24] [i_24] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_20]))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
