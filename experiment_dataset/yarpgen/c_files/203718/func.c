/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203718
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
    var_14 = max((var_7), (((/* implicit */unsigned long long int) (short)-21)));
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)47)) || (var_6)))), ((unsigned short)36173))))));
    var_16 = ((unsigned char) (short)37);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (short)-13)) == (-1047944829)));
            var_17 = ((/* implicit */short) min((((((/* implicit */_Bool) min(((short)-49), ((short)7513)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (max((var_5), (((/* implicit */long long int) (short)21)))))), (min((-8270936634699564899LL), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)196))))))));
            var_18 ^= ((/* implicit */unsigned int) max((((long long int) arr_1 [i_0] [i_1])), (var_1)));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((max((((/* implicit */unsigned int) var_3)), (3998468475U))) * (313395743U))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)18))))) : ((~(((/* implicit */int) var_6)))))))));
            var_19 = min((((min((var_5), (((/* implicit */long long int) var_10)))) == (((/* implicit */long long int) ((/* implicit */int) min(((short)0), (((/* implicit */short) arr_4 [i_1] [i_1] [i_1])))))))), (((((/* implicit */int) var_10)) == (((/* implicit */int) ((var_5) == (((/* implicit */long long int) var_13))))))));
        }
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_20 = ((/* implicit */signed char) (short)-37);
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)172))))) * ((~(((/* implicit */int) arr_8 [i_0] [i_2] [i_2]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)-7514)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((arr_1 [i_0] [i_0]) == (((/* implicit */int) arr_7 [i_2] [i_0] [i_0])))))))) : (max((var_2), (((/* implicit */unsigned int) ((arr_1 [8ULL] [i_0]) < (((/* implicit */int) (_Bool)1)))))))));
        }
        var_22 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) % (((313395745U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)15605)))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_10)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (14207971916376105324ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 16476449146460974133ULL)) ? (((/* implicit */int) (short)-19)) : (((/* implicit */int) (unsigned char)247))));
            var_24 = ((unsigned short) arr_2 [i_3] [i_3]);
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    {
                        var_25 = ((/* implicit */short) ((0ULL) < (((/* implicit */unsigned long long int) arr_13 [i_6] [i_4]))));
                        arr_20 [i_3] [(short)1] [(short)1] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_3] [i_3])) == (((/* implicit */int) arr_0 [i_6] [i_4]))));
                        arr_21 [(unsigned char)11] [i_3] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_3] [i_3]))));
                        var_26 = ((/* implicit */signed char) ((_Bool) arr_17 [i_3] [i_3] [i_4] [i_5] [i_6]));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            arr_25 [i_3] [i_3] [(short)9] [i_7] = ((/* implicit */_Bool) ((short) arr_19 [i_3]));
                            arr_26 [i_3] [i_3] [i_5] [i_3] [i_7] = ((/* implicit */unsigned long long int) arr_19 [i_4]);
                        }
                    }
                } 
            } 
            var_27 ^= ((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_4]));
        }
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            var_28 *= ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) max((3981571567U), (((/* implicit */unsigned int) arr_1 [i_3] [i_3])))))), (min((arr_23 [i_3] [i_3] [i_8]), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_27 [i_8] [i_8] [i_3]))))))));
            arr_29 [i_3] [i_8] [i_8] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_24 [(_Bool)1] [i_3] [i_3] [i_3] [i_8])) : (((/* implicit */int) arr_24 [i_3] [i_8] [i_3] [i_3] [i_3])))));
            var_29 = ((/* implicit */signed char) min((min(((unsigned short)31821), (((/* implicit */unsigned short) arr_8 [i_3] [i_3] [i_3])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5)))))));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_3] [i_8]), (arr_0 [i_3] [i_8])))) ? (((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_3] [i_8]))) : ((+(arr_14 [i_3] [i_8])))));
        }
        var_31 += ((/* implicit */unsigned char) min((((/* implicit */long long int) (((~(var_7))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)31823)))))))), (max((((/* implicit */long long int) (~(943438307U)))), (arr_28 [i_3] [i_3])))));
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (min((min((((/* implicit */unsigned long long int) var_2)), (14207971916376105319ULL))), (((/* implicit */unsigned long long int) max((arr_10 [i_3]), (var_4)))))) : (((unsigned long long int) var_6)))))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                {
                    var_33 = ((/* implicit */int) ((short) (+(((((/* implicit */_Bool) var_2)) ? (var_1) : (var_1))))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                        {
                            {
                                var_34 = min((((((/* implicit */_Bool) arr_31 [i_3] [i_10] [i_3])) ? (3368594232400423462LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1756))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
                                var_35 = ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
    {
        var_36 = min((((/* implicit */int) min((arr_8 [i_13] [(short)10] [i_13]), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_2 [i_13] [i_13]))))))), (arr_43 [(unsigned short)13]));
        var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_13] [i_13]))) % (min((arr_9 [i_13] [i_13]), (3981571582U)))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_38 = ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_14] [(short)5])) || (((/* implicit */_Bool) 0ULL))))), (-5296583674494357726LL))) % (((/* implicit */long long int) (~(var_2)))));
        var_39 = ((/* implicit */short) min((var_0), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) == (9320323827689052515ULL)))) < ((~(((/* implicit */int) arr_0 [i_14] [(unsigned char)10])))))))));
        var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) var_6)), ((short)11172))))));
        arr_46 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_7 [i_14] [i_14] [i_14])) < (arr_1 [i_14] [i_14])))) == (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_41 [i_14])) : (((/* implicit */int) arr_41 [i_14]))))));
        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) min(((+(((((/* implicit */_Bool) -222605521078282079LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-13902)))))), (((/* implicit */int) ((unsigned char) max(((_Bool)1), (arr_3 [i_14]))))))))));
    }
}
