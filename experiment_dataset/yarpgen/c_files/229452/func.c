/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229452
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)255)) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (1886563054343045661ULL)))))), (((/* implicit */int) arr_0 [i_0]))));
                arr_5 [i_0] = ((/* implicit */_Bool) (+(((((_Bool) (_Bool)1)) ? ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))) : ((+(-859051656)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) arr_8 [i_2 + 1] [i_3]);
            arr_12 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned int i_4 = 4; i_4 < 19; i_4 += 1) 
        {
            arr_17 [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (_Bool)1))))) : ((-(arr_9 [i_2] [(_Bool)1]))))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */int) arr_0 [i_2])))))))));
            arr_18 [i_2] = ((/* implicit */long long int) arr_0 [i_2]);
            var_18 = ((/* implicit */unsigned short) 859051656);
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
            {
                arr_22 [i_2 - 1] [i_5] [i_4] [i_5] |= ((/* implicit */unsigned char) arr_8 [i_2] [i_2]);
                arr_23 [i_2 - 1] [i_2] [i_2] = ((/* implicit */int) (unsigned char)165);
            }
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
            {
                var_19 = arr_7 [i_2];
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_6 [i_6])), (var_15)))) ? (((((/* implicit */int) (unsigned char)245)) | (((/* implicit */int) (short)-19334)))) : ((-(((/* implicit */int) arr_6 [i_4])))))))));
                arr_26 [(unsigned short)13] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_7);
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                {
                    arr_29 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2] [i_6])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_2 + 2]))))) : (arr_21 [i_2 + 2] [i_2 + 2])));
                    var_21 |= ((/* implicit */unsigned char) arr_13 [i_6] [i_6]);
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (signed char)3))));
                    arr_30 [i_2] [i_6] [i_4 - 1] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (var_2) : (arr_13 [i_2] [i_2]))), (((/* implicit */unsigned int) ((short) ((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)23))))))));
                }
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_7)))) : ((-(var_8)))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)146)) == ((+(((/* implicit */int) var_11))))));
                    arr_33 [i_2 + 2] [i_2 + 2] [i_2] [i_6] [i_8] = ((/* implicit */_Bool) ((((222910181119917495ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) ? ((-(arr_27 [i_2] [i_4] [i_6] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                }
                for (signed char i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_28 [i_2] [i_2 + 1] [i_2] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_2] [i_2] [i_4 + 1] [i_4 - 4] [i_4 - 1] [i_4 - 4]))) : (arr_28 [i_2] [i_2 + 1] [i_9] [i_2]))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned char)120)))))));
                    /* LoopSeq 4 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */long long int) var_4);
                        arr_38 [i_2 - 1] [i_10] [i_2 - 1] [i_10] [i_2] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((var_0), (((/* implicit */unsigned long long int) var_1))))))) && (((/* implicit */_Bool) ((unsigned int) (unsigned short)37705)))));
                        arr_39 [i_2] [i_4 + 1] [i_6] [i_6] [i_10] [i_10] [i_2] = ((/* implicit */short) arr_6 [i_2]);
                        var_27 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) arr_28 [i_4 - 3] [i_4 - 3] [i_4 - 3] [i_2 - 1])), (arr_11 [i_2] [i_10] [(signed char)9])))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) ((unsigned long long int) (-(2187070632686940924ULL))));
                        arr_43 [i_2 + 2] [i_2] [i_6] [i_9] [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_37 [i_2] [i_2] [i_6] [i_2 + 1]), (arr_37 [i_2 - 1] [i_9] [i_2 - 1] [i_2 + 2]))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */short) var_7);
                        arr_46 [i_2 - 1] [i_4] [i_2] [i_9] [i_2] = ((/* implicit */_Bool) (-((((!(((/* implicit */_Bool) arr_40 [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [3ULL] [i_2])))) ? (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_9] [i_2]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4220999782U)), (var_6))))))));
                    }
                    for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 3) 
                    {
                        arr_49 [i_2] [i_9] [i_13] = ((/* implicit */unsigned int) var_9);
                        arr_50 [i_13] [i_2] [i_6] [i_6] [i_2] [i_2] = ((/* implicit */unsigned char) arr_31 [i_2] [i_6] [(signed char)2]);
                    }
                    arr_51 [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */int) max(((unsigned char)90), ((unsigned char)255)))) * (((/* implicit */int) arr_7 [i_2]))))));
                }
            }
        }
        var_30 -= ((/* implicit */short) max((min((arr_24 [i_2] [i_2 + 2] [i_2]), (((/* implicit */unsigned long long int) arr_3 [2ULL] [2ULL])))), (min((max((2187070632686940924ULL), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_2] [(signed char)0])) : (((/* implicit */int) (unsigned char)144)))))))));
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-3)) * (((/* implicit */int) (unsigned char)255))))) - (((long long int) (_Bool)1))));
    }
    for (int i_14 = 0; i_14 < 17; i_14 += 1) 
    {
        var_32 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)1472)) ? (((/* implicit */int) var_1)) : (((var_5) & (((/* implicit */int) (unsigned char)12))))))));
        var_33 = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_15)) : ((+(((/* implicit */int) (unsigned char)48))))))));
        arr_54 [i_14] [i_14] = min((((signed char) arr_45 [(_Bool)1] [(unsigned char)4])), (((/* implicit */signed char) arr_45 [(signed char)16] [i_14])));
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [(short)2])))))));
        arr_55 [i_14] = ((/* implicit */unsigned long long int) (unsigned short)1472);
    }
    /* vectorizable */
    for (unsigned char i_15 = 1; i_15 < 15; i_15 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 17; i_16 += 2) 
        {
            for (unsigned short i_17 = 1; i_17 < 14; i_17 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_18 = 1; i_18 < 15; i_18 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */_Bool) ((arr_15 [i_15]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17321)))));
                        arr_64 [i_15] [i_15] [i_17] [i_18] = ((/* implicit */unsigned int) var_1);
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) var_2))));
                    }
                    for (unsigned short i_19 = 1; i_19 < 15; i_19 += 2) /* same iter space */
                    {
                        arr_68 [i_15] [i_16] [i_17 + 3] [i_15] = ((/* implicit */unsigned int) (((~(-859051656))) - ((~(((/* implicit */int) arr_41 [i_15] [i_15] [i_17] [i_17] [17U]))))));
                        var_37 = ((/* implicit */_Bool) (unsigned char)249);
                        arr_69 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */short) (+((-(((/* implicit */int) var_15))))));
                    }
                    for (short i_20 = 0; i_20 < 17; i_20 += 4) 
                    {
                        arr_73 [i_15] [i_16] [i_17] [i_15] = (+(((/* implicit */int) (_Bool)1)));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))) - (((524287U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_39 = ((/* implicit */unsigned char) var_8);
                    }
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [i_15 + 2])) ? (((/* implicit */int) arr_72 [i_15] [i_16] [i_16] [i_15])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-31741)) && (((/* implicit */_Bool) (unsigned char)251)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        for (unsigned short i_22 = 2; i_22 < 16; i_22 += 1) 
                        {
                            {
                                var_41 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_72 [i_15] [i_15] [i_15] [i_16])) ? (arr_21 [i_22] [i_16]) : (var_0))) << (((arr_63 [7U] [i_16] [i_17] [5ULL] [i_22 - 2]) - (562525622)))));
                                var_42 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_62 [i_22 - 2] [i_22] [i_22 - 2] [i_22] [i_22] [i_15]))));
                                arr_80 [i_15 + 1] [i_16] [i_17] [i_15] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_15 + 1] [i_16] [i_15 + 1] [i_21] [i_22 + 1] [i_22] [i_22])) ? (((/* implicit */int) arr_37 [i_15 - 1] [i_22] [i_22 - 2] [i_22 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_2)))))));
                            }
                        } 
                    } 
                    var_43 = ((/* implicit */unsigned char) var_1);
                }
            } 
        } 
        var_44 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_16 [i_15])) : (((/* implicit */int) (unsigned char)117))))) >= (arr_15 [i_15])));
        var_45 = ((/* implicit */unsigned short) arr_63 [i_15] [i_15 + 2] [i_15] [i_15 - 1] [i_15 + 1]);
        arr_81 [i_15] [i_15] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (short i_23 = 3; i_23 < 24; i_23 += 4) 
    {
        var_46 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_82 [i_23 - 1] [i_23])))));
        var_47 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_11)) | (((/* implicit */int) var_1)))) >> (((arr_82 [i_23 - 1] [(unsigned short)0]) + (1229198270)))));
    }
    var_48 = ((/* implicit */int) max((var_48), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57534))))) << ((((~(-5935463521952955703LL))) - (5935463521952955698LL)))))));
    var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((~(var_0)))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_15)) + (141)))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 0U)) : (-5935463521952955694LL))))) : (((/* implicit */long long int) var_8))));
}
