/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192101
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
    var_11 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)2))));
    var_12 = ((/* implicit */_Bool) ((unsigned int) ((((((((/* implicit */_Bool) 8723674798987800152LL)) ? (((/* implicit */int) (short)-3556)) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)47)), ((unsigned char)253)))) - (47))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0])) + (((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))) ? (((/* implicit */int) ((signed char) var_6))) : ((-(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0 - 2]))))) ? (((((/* implicit */int) (unsigned char)253)) >> (((/* implicit */int) arr_0 [1LL] [1LL])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        arr_4 [(unsigned char)9] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1]))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 25))) ? (min(((-(493576044))), (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2])))) : (((/* implicit */int) var_2))));
            var_14 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_1])) : (var_7)))) ? (((/* implicit */int) ((unsigned char) 8191U))) : ((+(((/* implicit */int) arr_0 [i_1] [i_0 - 2]))))))));
            var_15 = ((/* implicit */unsigned short) 8181U);
            var_16 ^= ((/* implicit */long long int) (-(max(((-(var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -19)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-94)))))))));
            var_17 ^= ((/* implicit */short) (((-((-(((/* implicit */int) arr_6 [i_0] [i_0])))))) << (((min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-50)))), (arr_1 [i_0 + 2]))) + (641077407)))));
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -8723674798987800178LL)) ? (4294959104U) : (2221730129U)))))) ? (((((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_7 [i_0]))))) ? (((/* implicit */unsigned long long int) 4290033363U)) : (((((/* implicit */_Bool) -7434730455201907365LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33995))) : (2623351482823077422ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (-(var_9))))))));
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((2147483647) >= ((-(2147483647))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)213))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) (-(arr_14 [i_4] [i_2] [i_3 + 1] [i_4] [i_3 + 1] [i_2])));
                        var_22 = ((unsigned char) 0U);
                    }
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        var_23 |= ((/* implicit */short) (-(arr_14 [i_0] [i_0] [i_0] [i_0 + 2] [i_4] [i_4])));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 2] [(signed char)6] [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) -177754592)) : (arr_16 [i_0 + 1] [i_2] [i_4] [i_4] [i_6]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_0] [i_3] [i_4] [i_3] [i_6])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_6 - 1])))))) ? ((-(var_0))) : (((/* implicit */unsigned long long int) (-(131070U))))))));
                        arr_17 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -7)) ? (4294959110U) : (8191U)))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-25063))))));
                    }
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_8 [i_0] [i_0]))))))) ? ((-(var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7168)) ? (arr_13 [(signed char)12] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) (unsigned char)135))))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_3] [(signed char)12])), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)-7169))))))))));
                }
                for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    arr_20 [i_7] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_14 [i_2] [i_2] [i_2] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3 + 3] [i_0 - 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_5 [i_0 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0])))))))));
                    var_26 = ((((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 2])))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31540)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (8191U)))), (8723674798987800158LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0 + 1])) + (((/* implicit */int) arr_12 [i_0 + 2]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_23 [i_0] [(_Bool)1] [i_3 + 1] [i_8] [i_8] [i_7] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [(_Bool)1] [i_2] [(_Bool)1] [(_Bool)1] [i_8] [i_8]))))))) ? (-2974779775809828235LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_3])))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_7)) / (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)15)), (var_4)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65073))) / (var_4)))))));
                    }
                }
                arr_24 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)39224))));
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 14; i_9 += 1) 
                {
                    for (signed char i_10 = 2; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */short) (-((((_Bool)1) ? (var_4) : ((-(arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))));
                            var_29 = ((/* implicit */signed char) (_Bool)1);
                            arr_30 [i_0 - 1] [i_2] [i_10] [(unsigned char)2] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0 + 1] [i_2] [i_0] [i_9 + 1] [i_2])) ? (((((/* implicit */_Bool) (-(arr_10 [i_0 + 1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_10 - 1] [i_9] [i_3] [i_2] [i_0 + 1] [i_0]))))) : (((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14931820122915729646ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_2] [i_2] [i_9]))) % (arr_27 [i_0] [i_2] [i_2] [i_10]))))))));
                            var_30 = ((/* implicit */long long int) ((unsigned int) (-(14227093583415304140ULL))));
                        }
                    } 
                } 
            }
            for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 3; i_13 < 13; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [8ULL] [i_2] [(signed char)2] [i_12] [i_13])) ? (arr_33 [i_0]) : (((/* implicit */int) arr_29 [i_0] [i_0 - 1] [i_13 - 2]))));
                        arr_42 [i_0] [i_2] [i_11] [i_11] [i_13] [i_12] [i_12] = ((/* implicit */unsigned int) ((int) ((signed char) arr_34 [i_0] [i_0] [i_0 + 1])));
                    }
                    for (signed char i_14 = 2; i_14 < 14; i_14 += 3) 
                    {
                        arr_46 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_11] [i_11] [i_0 - 1] = ((/* implicit */short) (-(arr_5 [i_0 + 2])));
                        var_32 = ((/* implicit */unsigned char) var_8);
                    }
                    var_33 = ((((/* implicit */_Bool) (-(1021246166U)))) ? (2794228867U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37507))));
                    arr_47 [i_0] [i_2] [i_11] [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) arr_32 [i_0] [(signed char)11] [i_0 + 1]))));
                }
                var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (unsigned short)10)), (3555775410U)))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), (arr_40 [i_2] [i_2] [i_11])))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50709))) : (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) min((arr_7 [i_0]), (arr_7 [i_0 + 2]))))))))));
            }
            var_35 -= ((/* implicit */unsigned short) (-(18446744073709551609ULL)));
        }
    }
    /* vectorizable */
    for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
    {
        arr_50 [i_15] |= ((/* implicit */unsigned int) arr_15 [(signed char)1] [i_15] [(unsigned short)9] [i_15] [i_15]);
        var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_15] [i_15] [i_15] [i_15] [i_15]))));
        var_37 = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (signed char i_16 = 2; i_16 < 9; i_16 += 1) 
    {
        var_38 = ((/* implicit */int) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */long long int) (-(arr_33 [i_16])))) : (min((((/* implicit */long long int) 984254701)), (var_9)))))));
        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((unsigned char) 2706791878U)))))) ? (max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_16 - 2] [i_16 - 2] [i_16 - 2]))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (signed char)-1)))))))));
    }
    for (signed char i_17 = 3; i_17 < 18; i_17 += 3) 
    {
        arr_56 [i_17] = (-(((((/* implicit */unsigned int) (-(arr_55 [i_17])))) ^ ((+(3744351507U))))));
        arr_57 [i_17] = ((/* implicit */_Bool) 2539285092U);
    }
    var_40 = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) 536870880)) ? (((/* implicit */int) (short)-19713)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))))))))));
}
