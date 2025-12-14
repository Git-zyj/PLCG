/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38919
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (signed char)76))));
    var_18 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57716))) / (-3408940826013678741LL)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (-1393662279) : (((/* implicit */int) (unsigned char)192)))))));
                        var_19 &= (signed char)-77;
                    }
                    for (int i_4 = 3; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_2 + 1] [i_2] [i_1] [i_4 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned long long int) (unsigned short)25560))))) : (var_6)));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)32767)) == (((((arr_9 [(unsigned short)2]) / (((/* implicit */int) var_11)))) - (((/* implicit */int) arr_8 [i_2 + 2] [(short)6] [3LL]))))));
                    }
                    for (int i_5 = 3; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        var_21 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_1])))))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_3 [i_1] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (var_4)))) : (arr_18 [i_5 - 3] [i_5 + 1] [(unsigned char)8] [i_5 + 2] [(_Bool)1] [i_2]))), (((/* implicit */unsigned long long int) var_1))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_5))));
                            var_24 = ((/* implicit */unsigned long long int) max(((unsigned short)25587), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((6490159710882331893ULL), (((/* implicit */unsigned long long int) arr_6 [i_0 + 3] [i_0] [i_0]))))))))));
                            var_25 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_14)) ? (arr_20 [i_0 + 3] [(signed char)6] [i_2 + 2] [i_5 - 1] [i_0 + 3]) : (((/* implicit */unsigned long long int) 1393662278)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (-1393662279) : (((/* implicit */int) arr_12 [10ULL] [10ULL]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15))))) : (max((((/* implicit */long long int) arr_14 [4] [i_1] [i_2 - 1] [i_2 - 1] [(unsigned char)1])), (var_6))))) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_16)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                        }
                    }
                    arr_22 [i_1] [i_1] [10LL] [i_2] = ((/* implicit */int) ((((/* implicit */int) (((+(11485275292731061737ULL))) >= (arr_19 [i_1] [i_2 + 2])))) <= (((((((/* implicit */int) (signed char)-12)) >= (var_4))) ? (((/* implicit */int) ((6961468780978489879ULL) == (6961468780978489876ULL)))) : ((+(((/* implicit */int) (signed char)-1))))))));
                }
            } 
        } 
        var_26 = ((int) ((((/* implicit */int) (signed char)12)) | (((/* implicit */int) var_11))));
        arr_23 [i_0] = ((/* implicit */short) ((signed char) (signed char)-84));
        var_27 = ((/* implicit */short) var_11);
    }
    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) arr_16 [i_7] [i_7])), (var_16)))));
        var_29 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_7] [i_7 - 1] [i_7 + 3] [i_7 + 2] [i_7 + 3]))))), (7134843126346515158ULL)));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)127)), (max((((/* implicit */short) arr_7 [i_7 + 1] [i_7 + 1] [i_7 + 1])), ((short)12884)))))) && (((/* implicit */_Bool) ((int) (signed char)-102)))));
    }
    for (unsigned int i_8 = 1; i_8 < 10; i_8 += 1) /* same iter space */
    {
        arr_30 [i_8 + 3] = ((/* implicit */unsigned long long int) arr_11 [(unsigned short)2]);
        arr_31 [i_8 + 3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_8])) && (((/* implicit */_Bool) 856187098))))) <= (((/* implicit */int) var_1))))) <= ((((~(-1393662279))) >> (((((unsigned int) arr_25 [i_8])) - (4294956554U)))))));
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 2; i_10 < 10; i_10 += 2) 
            {
                for (int i_11 = 2; i_11 < 12; i_11 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_42 [i_9] [1] [i_10] [i_11 - 1] [i_12] [(unsigned short)3] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)57708)), (arr_15 [i_11] [i_10] [(_Bool)1])))) / (max((((/* implicit */unsigned long long int) arr_34 [i_11 + 1])), (var_16))))));
                            arr_43 [i_9] [i_9] [i_9] [i_11] [i_12] = ((/* implicit */int) ((long long int) var_1));
                            var_31 = ((/* implicit */signed char) var_5);
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((var_5) - (((/* implicit */unsigned int) -1788547590)))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)7822))))))))))))));
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_33 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))) | (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8371)) < (((/* implicit */int) (signed char)12))))), (((arr_19 [i_10] [i_9]) & (((/* implicit */unsigned long long int) var_14))))))));
                            var_34 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -1393662274)), (max((max((((/* implicit */unsigned long long int) var_7)), (11814129985092411541ULL))), (((/* implicit */unsigned long long int) var_15))))));
                            arr_47 [i_8 + 1] [i_9] [4] [i_11 - 2] [i_13] [i_13 - 1] [i_10 - 1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_6 [i_8] [i_10] [i_11])) : (((/* implicit */int) (unsigned char)32))))), (9223372036854775807LL)));
                            var_35 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_41 [i_13 - 1] [i_13 - 1] [i_8] [i_8] [i_13 - 1] [i_13 - 1] [(unsigned short)12])), (((((/* implicit */unsigned long long int) 16777215)) ^ (6961468780978489896ULL)))))));
                            arr_48 [i_9] [i_9] [i_10] [i_9] [i_13] [6] [i_11 + 1] = ((/* implicit */unsigned long long int) ((6684397070064702315LL) == (((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_9]), (arr_11 [i_9])))))));
                        }
                        arr_49 [i_8] [i_9] [(_Bool)1] [i_11] [i_11 - 1] [i_9] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_11 - 2] [i_11 - 1] [i_11] [i_9] [i_11 + 1] [i_11 - 2])) ? (((var_6) << (((((/* implicit */int) (signed char)6)) - (6))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (var_14))))) & (((/* implicit */long long int) ((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_12)))) ? (((((/* implicit */_Bool) (short)-8219)) ? (((/* implicit */int) arr_16 [i_8 + 1] [i_8 + 1])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_11)))))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) var_14))));
                        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) max((((/* implicit */long long int) var_4)), (var_14))))));
                        arr_50 [i_8] [i_8] [i_9] [i_8] = (+(((/* implicit */int) ((((/* implicit */_Bool) min((11485275292731061719ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) (~(arr_2 [8]))))))));
                    }
                } 
            } 
        } 
    }
}
