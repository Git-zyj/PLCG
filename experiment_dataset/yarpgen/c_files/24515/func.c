/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24515
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (_Bool)1))));
        var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) (short)-11796)), (arr_0 [i_0])));
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_18 ^= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_5 [0])) : (((/* implicit */int) var_9)))));
        var_19 = ((/* implicit */signed char) min((var_19), (arr_3 [i_1])));
        var_20 ^= ((/* implicit */short) (-(((/* implicit */int) arr_6 [(signed char)10]))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */short) ((signed char) ((int) ((unsigned short) (unsigned short)22783))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) max((arr_7 [2] [i_2]), (((/* implicit */int) (short)6039))))))))))));
        var_22 = ((int) max(((~(arr_8 [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)6039)) ? (var_1) : (((/* implicit */int) (signed char)2)))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)6025))));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [i_3] [i_3]), (((/* implicit */int) (short)-23410))))) ? (var_14) : (((/* implicit */long long int) ((arr_11 [i_3] [i_3]) ^ (arr_11 [i_3] [i_3]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((-(696922123U))))))));
        arr_13 [i_3] = ((_Bool) (short)-592);
    }
    var_24 = ((/* implicit */long long int) var_5);
    /* LoopSeq 4 */
    for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
    {
        var_25 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((arr_16 [i_4]), (((/* implicit */short) (unsigned char)112))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_4 - 1]))))));
        arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-467809547), (((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_14 [i_4] [i_4]))))))) ? (((/* implicit */int) ((unsigned char) arr_11 [i_4] [i_4]))) : (((/* implicit */int) arr_15 [i_4]))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (short)-1289))) ? (arr_8 [i_5]) : (((/* implicit */long long int) -1621343486))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8427)) ? (((int) 4466896556730170002LL)) : ((-(((/* implicit */int) var_15))))));
        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) 1610612736);
    }
    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        arr_25 [(short)12] |= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45861)) ? (((/* implicit */int) arr_12 [i_6])) : (((/* implicit */int) var_12))))))) ? (((int) arr_7 [(unsigned char)8] [(unsigned char)6])) : ((~(((int) (unsigned short)19674)))));
        var_27 ^= ((int) min((arr_24 [10LL] [i_6]), (((/* implicit */unsigned int) arr_23 [4] [4]))));
        arr_26 [i_6] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) var_15)))));
    }
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (short)24173)) ? (arr_8 [(signed char)6]) : (((/* implicit */long long int) 1610612736))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 3; i_10 < 9; i_10 += 1) 
                    {
                        arr_37 [i_7] [i_8] = ((/* implicit */signed char) arr_16 [i_7 + 2]);
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) arr_12 [i_10])) : (((/* implicit */int) arr_20 [i_7]))))) ? (((/* implicit */long long int) (~(arr_7 [i_7] [i_8])))) : (var_14)));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(signed char)4])))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_31 ^= ((/* implicit */unsigned char) arr_32 [i_12] [i_11] [i_9]);
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_13))) ? (((/* implicit */int) arr_3 [i_7 + 1])) : (((/* implicit */int) arr_40 [i_7] [i_8] [i_9] [i_7]))));
                            var_33 = ((/* implicit */unsigned short) arr_24 [i_7] [i_9]);
                        }
                        for (int i_13 = 1; i_13 < 10; i_13 += 1) 
                        {
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (_Bool)1))));
                            var_35 -= ((/* implicit */long long int) 511);
                            var_36 = ((signed char) var_10);
                            var_37 = ((/* implicit */long long int) (((_Bool)1) ? (var_4) : (((/* implicit */int) arr_42 [i_8] [i_8] [i_13 - 1] [i_11] [i_7] [i_8] [i_7 - 1]))));
                        }
                        arr_48 [i_7] [i_9] [i_11] = ((/* implicit */signed char) ((unsigned int) arr_14 [i_7] [i_7 - 1]));
                        var_38 = ((int) var_0);
                    }
                    var_39 = ((((((/* implicit */_Bool) var_13)) ? (arr_44 [i_7] [i_8] [i_8] [i_7] [i_9] [i_9]) : (((/* implicit */int) var_2)))) | ((-(((/* implicit */int) var_13)))));
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            arr_54 [i_7 + 1] [i_9] [4LL] [i_7] = ((/* implicit */int) arr_27 [i_9]);
                            var_40 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_34 [i_7 + 2] [(_Bool)1] [i_14])) << (((((int) arr_28 [i_7 + 1] [i_8])) + (552501241)))));
                        }
                        var_41 = ((/* implicit */int) var_10);
                        var_42 ^= ((/* implicit */signed char) (unsigned short)34547);
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7])) ? (((/* implicit */int) arr_46 [i_7] [6] [i_7] [i_7 + 1] [i_14])) : (((/* implicit */int) (signed char)13))));
                        var_44 = ((/* implicit */unsigned short) 511);
                    }
                }
            } 
        } 
        var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((unsigned char) arr_32 [i_7 - 1] [i_7] [i_7 + 1]))) : (((/* implicit */int) arr_39 [(signed char)4] [i_7 + 2] [(short)6] [i_7])))))));
        arr_55 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_1))) * (((/* implicit */int) arr_18 [i_7]))));
    }
    var_46 = ((/* implicit */signed char) var_4);
}
