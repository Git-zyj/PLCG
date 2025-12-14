/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53075
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_15))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_2)))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_11))))) ^ (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    for (short i_4 = 3; i_4 < 14; i_4 += 3) 
                    {
                        {
                            var_21 += ((/* implicit */signed char) ((((((/* implicit */int) var_11)) | (((((/* implicit */int) var_9)) >> (((var_8) + (3699672055824575913LL))))))) * (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3]))));
                            arr_11 [i_0] [(_Bool)1] [i_1] [(_Bool)1] [(short)13] [i_4] [(_Bool)1] = ((/* implicit */signed char) max((max((((/* implicit */long long int) min((var_14), ((_Bool)1)))), (max((var_13), (var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_9 [i_4 - 2] [i_1] [i_2] [i_2] [i_4] [i_2 - 1])))))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) max((max((arr_3 [i_4]), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (_Bool)1))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-28343)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))))));
                        }
                    } 
                } 
            } 
            arr_12 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-114)))))) ? (((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) (short)-7327)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) arr_7 [(_Bool)1] [i_1] [i_1] [i_1])), (var_3))))) : (max((((/* implicit */long long int) ((_Bool) var_6))), ((-(var_15))))));
            arr_13 [i_1] [(signed char)12] = ((/* implicit */short) max((((((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), ((short)32767)))) != (((/* implicit */int) (short)-20121)))), (var_4)));
        }
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((short) ((short) (_Bool)1))))));
        arr_16 [i_5] [(short)15] = ((/* implicit */signed char) ((((var_3) / (((/* implicit */long long int) ((((/* implicit */_Bool) -4368407209765582892LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) var_1)))))));
    }
    for (short i_6 = 1; i_6 < 14; i_6 += 1) 
    {
        var_24 = ((/* implicit */signed char) min((((arr_17 [i_6 - 1]) ? ((+(((/* implicit */int) var_12)))) : ((-(((/* implicit */int) var_16)))))), (max((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) var_7)) + (((/* implicit */int) var_12))))))));
        /* LoopSeq 3 */
        for (long long int i_7 = 2; i_7 < 13; i_7 += 1) 
        {
            arr_22 [(short)11] [4LL] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) ^ (var_6)))))))));
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)0)))))));
            var_26 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-69))));
        }
        for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((arr_24 [i_6 - 1]), (((((/* implicit */_Bool) arr_24 [i_6 + 1])) ? (arr_24 [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))));
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_2 [(_Bool)1]))))))))));
            arr_26 [i_6] = ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */signed char) var_14)), (var_12)))), (((arr_2 [i_6 + 1]) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775786LL))))) : (((/* implicit */int) arr_10 [i_6] [i_6] [i_6 - 1] [i_8] [i_6]))))));
        }
        for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            var_29 = ((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)-5135)));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6] [(_Bool)1] [i_6 - 1] [(_Bool)1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_6] [i_6 - 1] [(signed char)7] [i_6]))) : (var_8)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_6])) || (((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (_Bool)1)))))))) : (((((((/* implicit */_Bool) (short)32758)) || (((/* implicit */_Bool) (signed char)76)))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (!(((/* implicit */_Bool) -106892914886458563LL)))))))));
            arr_30 [i_6] [i_9] = var_6;
        }
        var_31 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))) : (((((/* implicit */int) (signed char)11)) / (((/* implicit */int) (short)-7327))))))) * (((((/* implicit */_Bool) arr_24 [i_6 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [(short)0])) : (((/* implicit */int) var_7))))) : (((long long int) (-9223372036854775807LL - 1LL))))));
        var_32 |= ((/* implicit */short) ((-6833537565573353297LL) + (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            var_33 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_27 [i_6])) ? (arr_27 [i_6]) : (arr_27 [i_6]))), (((min(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */_Bool) -3933615107751312000LL)) ? (var_6) : (8750957161728212367LL))) : (((long long int) (_Bool)1))))));
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (long long int i_13 = 1; i_13 < 14; i_13 += 1) 
                    {
                        {
                            arr_44 [i_6] [i_10] [i_6] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) / (((((/* implicit */_Bool) arr_24 [i_10])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_18 [(_Bool)1]))))))) ? (min((min((var_13), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_9))))))) : (((/* implicit */long long int) (((_Bool)0) ? ((~(((/* implicit */int) (short)32767)))) : (((/* implicit */int) (!((_Bool)1)))))))));
                            var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_6] [i_6] [i_6 + 1] [i_13 - 1] [i_12])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)8982))))) + (max((var_15), (9223372036854775807LL))))) : (-9223372036854775807LL)));
                        }
                    } 
                } 
            } 
            arr_45 [i_6] [3LL] [i_6] = ((/* implicit */short) arr_29 [i_6] [(signed char)12] [14LL]);
        }
        for (short i_14 = 1; i_14 < 12; i_14 += 4) 
        {
            arr_48 [i_6] [i_6] [i_6] = max((max((var_11), (var_7))), (((/* implicit */short) max(((_Bool)1), ((_Bool)1)))));
            arr_49 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((var_18) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (var_3))) : (((/* implicit */long long int) (~(((/* implicit */int) var_12)))))));
            arr_50 [i_6] = ((/* implicit */long long int) var_12);
        }
    }
    var_35 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) var_12)) | (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)5987)) : (((/* implicit */int) var_19))))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
}
