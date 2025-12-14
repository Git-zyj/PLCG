/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200602
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
    for (int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) max(((unsigned short)43062), ((unsigned short)4080)));
        arr_3 [i_0] = ((/* implicit */_Bool) (unsigned short)65525);
        arr_4 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_4)))) != (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [0ULL])), ((unsigned short)40471))))))), ((-(((/* implicit */int) arr_0 [i_0 - 1]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((long long int) arr_6 [i_1] [i_1])))))));
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 23; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (short i_5 = 2; i_5 < 20; i_5 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */_Bool) arr_5 [i_2]);
                                var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10))) | (arr_15 [i_2 - 1] [i_4])))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65530)) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65526))) != (1125865547104256LL)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_2 + 1] [i_3] = ((/* implicit */int) arr_13 [i_2] [i_1]);
                }
            } 
        } 
    }
    for (short i_6 = 2; i_6 < 12; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_7 = 2; i_7 < 12; i_7 += 2) 
        {
            for (int i_8 = 3; i_8 < 12; i_8 += 4) 
            {
                for (unsigned short i_9 = 4; i_9 < 9; i_9 += 1) 
                {
                    {
                        var_22 &= ((/* implicit */signed char) (unsigned char)0);
                        var_23 = ((/* implicit */_Bool) min((((((/* implicit */int) var_16)) | (((/* implicit */int) arr_20 [i_6 + 1] [i_6 + 1])))), (((/* implicit */int) max((arr_20 [i_6 - 2] [i_6 - 1]), (var_3))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            for (int i_11 = 3; i_11 < 10; i_11 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((unsigned short) ((short) max((((/* implicit */int) var_11)), (var_5)))))));
                    var_25 = (+(((((/* implicit */int) min((((/* implicit */unsigned short) (short)18959)), (var_9)))) / (((/* implicit */int) (unsigned short)10)))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 1; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6 - 1]))))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (arr_10 [i_6 - 1] [i_11 - 3]))))))));
                                var_27 = ((/* implicit */short) min((((((/* implicit */int) (short)28423)) != (((/* implicit */int) (unsigned short)2)))), ((!(((/* implicit */_Bool) arr_19 [i_6 - 2]))))));
                                arr_41 [i_6] [i_12] [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) min(((short)32748), (max((var_16), (((/* implicit */short) var_3))))));
                                arr_42 [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_2)), (var_12))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) var_2)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned char i_16 = 0; i_16 < 13; i_16 += 2) 
                {
                    {
                        var_29 |= min((1125865547104256LL), (((/* implicit */long long int) (_Bool)1)));
                        /* LoopSeq 3 */
                        for (int i_17 = 0; i_17 < 13; i_17 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) max((5992594287239808848LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40443))))))))))))));
                            arr_57 [i_14] [i_15] [i_14] &= ((/* implicit */_Bool) arr_47 [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 + 1]);
                            var_31 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) max(((short)-32012), (((/* implicit */short) var_15))))) | (arr_44 [i_6 + 1] [i_6 - 2] [i_6 + 1])))), ((-(((long long int) arr_55 [i_6] [i_16] [i_14] [i_14] [i_6]))))));
                        }
                        for (short i_18 = 0; i_18 < 13; i_18 += 2) 
                        {
                            var_32 = var_14;
                            arr_61 [i_16] [i_14] [i_15] [i_16] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((((/* implicit */_Bool) (short)32006)) && (((/* implicit */_Bool) var_8)))), (((var_13) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) << (((max((arr_15 [i_6 + 1] [i_18]), (((/* implicit */unsigned int) var_12)))) - (3266295605U)))));
                        }
                        for (unsigned long long int i_19 = 1; i_19 < 12; i_19 += 4) 
                        {
                            arr_64 [i_19] [i_16] [i_14] [i_14] [i_6 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32011))));
                            var_33 += ((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) >> (((((/* implicit */int) (unsigned char)255)) - (248)))));
                            var_34 ^= ((/* implicit */int) var_7);
                            var_35 = ((/* implicit */_Bool) min((var_35), ((!(((/* implicit */_Bool) var_0))))));
                            var_36 += ((/* implicit */unsigned short) (!(((((((/* implicit */_Bool) 32767LL)) && (((/* implicit */_Bool) (unsigned short)40290)))) || (((((/* implicit */_Bool) 3802081315825804207ULL)) || (((/* implicit */_Bool) (unsigned short)65525))))))));
                        }
                        var_37 = ((/* implicit */unsigned short) (((((-(var_7))) + (9223372036854775807LL))) >> (((((arr_10 [i_6 - 2] [(_Bool)1]) << (((arr_10 [i_6 + 1] [i_6 - 2]) - (7645426698216111404LL))))) - (7645426698216111352LL)))));
                        var_38 &= ((/* implicit */int) ((((((var_7) >> (((((/* implicit */int) var_3)) - (56))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-43)) != (((/* implicit */int) (short)-28951)))))))) | (max((arr_53 [i_6] [i_6 - 1] [1] [i_16] [(_Bool)0] [i_6 - 1]), (((/* implicit */long long int) var_9))))));
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_1)))))) | (((/* implicit */int) var_15)))))));
        var_40 = ((/* implicit */unsigned short) min((arr_10 [i_6 + 1] [i_6]), (((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_16)) - (20674))))))));
    }
    var_41 = ((/* implicit */int) (unsigned short)25081);
    var_42 -= ((/* implicit */short) max((((int) max((((/* implicit */unsigned int) var_14)), (var_1)))), (((/* implicit */int) min((var_4), (((/* implicit */unsigned char) ((9223372036854775805LL) != (((/* implicit */long long int) ((/* implicit */int) (short)32006)))))))))));
}
