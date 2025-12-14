/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233910
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
    var_16 = ((/* implicit */unsigned char) ((((unsigned long long int) (signed char)-92)) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)26991)))))));
    var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)2250))) * (681649658U)))));
    var_18 |= ((/* implicit */unsigned char) ((1466147517U) << (((((/* implicit */int) (unsigned char)255)) - (248)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)9774))));
            arr_5 [i_0] [i_0] = ((short) var_10);
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                arr_9 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_1] [i_0]);
                arr_10 [(_Bool)1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) (+(arr_1 [i_0] [i_0])));
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0 + 1])) + (((/* implicit */int) arr_4 [i_0 - 2])))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [13ULL] [i_0 + 2] [i_0])))) && (((/* implicit */_Bool) var_5))));
                            arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [2U] [i_0 - 1]))) : (var_7)))) ? (((/* implicit */int) arr_4 [i_0 - 2])) : (((/* implicit */int) ((short) arr_7 [i_0] [i_0] [i_2] [i_4])))));
                            var_22 *= ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_4] [(signed char)8] [i_2] [i_0])) || (((/* implicit */_Bool) var_8))))) >> (((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-4096)))) + (4104))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((signed char) (_Bool)1)))));
                        }
                    } 
                } 
            }
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) var_5);
                            var_25 |= ((/* implicit */unsigned int) var_3);
                            var_26 += ((unsigned long long int) (_Bool)1);
                            var_27 = ((short) (short)-4109);
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0 + 1])) ? (((((/* implicit */_Bool) (unsigned char)185)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    var_29 = (-(arr_1 [i_0 - 2] [i_0]));
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-2)) + (32))))))));
                }
                for (signed char i_9 = 2; i_9 < 13; i_9 += 4) 
                {
                    var_31 = ((/* implicit */signed char) (short)2047);
                    var_32 = ((/* implicit */unsigned long long int) var_14);
                }
                for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((_Bool) (_Bool)0)) || (((((/* implicit */_Bool) (signed char)-64)) || (((/* implicit */_Bool) -2104872790)))))))));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((arr_18 [i_0 + 1]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_18 [i_0 + 3])))))));
                        arr_33 [i_0 + 1] [i_0] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_0]))));
                        arr_34 [i_0] [i_10] [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3613317638U)) ? (((/* implicit */int) arr_15 [i_0] [3U] [i_0] [1ULL] [i_11])) : (((/* implicit */int) var_4)))))));
                    }
                }
                for (long long int i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    arr_38 [i_0] [i_0] [i_5] [i_0] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_35 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) ^ (var_6));
                }
            }
            for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) var_14))));
                    arr_43 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)58)) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_30 [i_0] [i_0] [i_13] [i_14]))))));
                }
                for (signed char i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
                {
                    var_37 &= ((/* implicit */unsigned long long int) ((2147483647) == (((/* implicit */int) (unsigned char)254))));
                    var_38 -= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) ((short) var_10))) - (64)))));
                    var_39 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((~(var_11)))));
                }
                for (signed char i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
                {
                    var_40 ^= ((/* implicit */_Bool) ((int) var_15));
                    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */unsigned long long int) 681649661U)) : (15669793660986705413ULL))))));
                    var_42 += ((/* implicit */signed char) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_50 [i_0 + 2] [i_0 + 1]))));
                }
                var_43 *= ((/* implicit */unsigned char) 0U);
                var_44 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (unsigned char)66))))));
            }
        }
        for (int i_17 = 0; i_17 < 15; i_17 += 3) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned short) var_4);
            var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_10))) != (((/* implicit */int) arr_4 [i_0 - 1]))));
        }
        for (unsigned int i_18 = 0; i_18 < 15; i_18 += 4) 
        {
            var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)0))))) ? (3613317641U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
            arr_57 [i_18] [i_0] [i_18] |= (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))) : (1466147532U));
            var_48 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)30345)) ? (-586871921) : (-1281590679)));
            arr_58 [i_18] [i_18] &= ((/* implicit */long long int) arr_36 [i_18] [i_18] [i_18]);
        }
        var_49 ^= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-26991)) ^ (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 15; i_19 += 3) 
        {
            for (unsigned int i_20 = 0; i_20 < 15; i_20 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 15; i_21 += 2) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 15; i_22 += 2) 
                        {
                            {
                                arr_69 [(_Bool)1] [13U] [i_21] [i_0] = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) var_1)) - (arr_64 [i_0] [i_21] [i_20] [i_0] [i_0] [i_0])))));
                                var_51 += ((/* implicit */unsigned char) 3613317634U);
                                var_52 ^= ((/* implicit */long long int) ((short) (~(arr_31 [6LL] [i_0] [i_0] [i_21] [i_0]))));
                                var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 2] [i_0 - 1])) ^ (((/* implicit */int) (unsigned short)14657))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 4) 
                    {
                        for (unsigned short i_24 = 0; i_24 < 15; i_24 += 4) 
                        {
                            {
                                var_54 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_0 + 2]))));
                                arr_75 [i_0] [i_19] [i_23] |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    var_55 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_8)) < (var_12))) && (((/* implicit */_Bool) ((unsigned int) var_2)))));
                    arr_76 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) (unsigned char)89));
                    arr_77 [i_0] [(short)1] [i_0] = ((/* implicit */long long int) (_Bool)1);
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
    {
        var_56 = ((/* implicit */unsigned char) ((_Bool) var_1));
        var_57 = ((/* implicit */int) ((signed char) 70368744177663LL));
    }
    for (int i_26 = 3; i_26 < 21; i_26 += 3) 
    {
        arr_84 [i_26] = ((/* implicit */unsigned long long int) ((max((arr_81 [i_26 - 3]), (var_2))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 15906352839825464858ULL))))))));
        var_58 = ((/* implicit */short) 1993580139588743077ULL);
        var_59 = ((/* implicit */long long int) (-(min((arr_81 [i_26 + 1]), (((/* implicit */unsigned int) var_3))))));
    }
}
