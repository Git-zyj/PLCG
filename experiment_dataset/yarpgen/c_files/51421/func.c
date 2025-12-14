/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51421
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
    var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) -1578203724619867727LL)) ? (((/* implicit */long long int) 3997704913U)) : (var_2))))), (((/* implicit */long long int) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 += ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_14)));
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) (-(-8244087644134804515LL)));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8244087644134804515LL)) && (((/* implicit */_Bool) (unsigned char)252))));
                                var_18 &= ((((/* implicit */_Bool) (+(-1578203724619867747LL)))) && (((/* implicit */_Bool) arr_9 [i_3 + 1] [i_3] [i_3] [i_3] [i_3])));
                                var_19 |= ((/* implicit */unsigned int) (~(3748712578502233263LL)));
                            }
                        } 
                    } 
                    arr_16 [8U] [i_2] |= ((/* implicit */short) (~((~(((/* implicit */int) (unsigned char)11))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 18; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                {
                    arr_23 [i_0] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) -508519978))));
                    arr_24 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_6] [i_5 - 3] [(_Bool)1] [i_5] [(unsigned char)2])) ? (arr_13 [i_6] [i_6] [i_6] [i_5 - 3] [i_0] [2LL] [i_0 + 3]) : (arr_13 [i_6] [i_5] [i_5] [i_5 - 3] [i_5 - 3] [i_5] [i_5 - 2])));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_7 = 2; i_7 < 18; i_7 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0 - 2] [i_0] [i_7 + 1]) / (-8976949624732127906LL)));
            /* LoopNest 3 */
            for (short i_8 = 3; i_8 < 16; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    for (long long int i_10 = 1; i_10 < 18; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (((~(arr_4 [i_0] [(short)13] [i_10]))) <= (((((/* implicit */_Bool) arr_33 [i_8] [18ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (8976949624732127890LL)))));
                            var_22 = ((/* implicit */short) ((arr_14 [i_10] [i_10 - 1] [i_10] [i_10] [i_10] [i_10] [i_10]) + (arr_9 [(signed char)13] [i_10 + 1] [i_10] [14] [1])));
                            arr_36 [i_0] [i_0] [(short)6] [i_8] [i_9] [14LL] |= ((/* implicit */long long int) arr_27 [i_8 - 2]);
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)3)))) / (-996352452))))));
                            arr_37 [i_0 - 2] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */int) ((arr_6 [i_7 - 1] [i_8 + 2] [17U]) ^ (arr_6 [i_7 - 1] [i_8 + 2] [15ULL])));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_11 = 2; i_11 < 16; i_11 += 3) 
            {
                for (long long int i_12 = 2; i_12 < 17; i_12 += 4) 
                {
                    {
                        arr_42 [i_12] [7ULL] [6U] [i_0] = ((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_12 - 1] [i_11]) > (arr_2 [i_11 + 2])));
                        arr_43 [5ULL] [i_7] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -508519970)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (2721084320939639279LL)));
                        arr_44 [i_7] &= ((/* implicit */int) var_1);
                    }
                } 
            } 
        }
    }
    for (long long int i_13 = 1; i_13 < 12; i_13 += 2) 
    {
        var_24 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(3997704887U)))) ^ (((arr_22 [(unsigned char)4] [i_13] [i_13 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_13] [i_13] [i_13 - 1])))))));
        /* LoopSeq 2 */
        for (unsigned char i_14 = 3; i_14 < 10; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                for (unsigned char i_16 = 1; i_16 < 12; i_16 += 4) 
                {
                    {
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)2))))) ? (((/* implicit */int) arr_47 [(signed char)12])) : ((-(-508519978))))))));
                        var_26 = ((/* implicit */int) max((var_26), (var_6)));
                        var_27 -= ((/* implicit */int) ((((/* implicit */_Bool) ((9753621863736313036ULL) - (((/* implicit */unsigned long long int) -2344300691011002647LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)32767))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4691177802542137783LL)) ? (2147483647) : (((/* implicit */int) arr_46 [10ULL] [i_16]))))), (arr_9 [i_13] [i_14 - 3] [i_14 - 2] [i_15] [i_16 + 1])))));
                        /* LoopSeq 1 */
                        for (short i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            arr_58 [i_13] [i_16] = ((/* implicit */unsigned long long int) arr_17 [i_13 + 1] [i_13]);
                            arr_59 [i_13] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 1462428892U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4552))) : (4678783708252511918ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 996352452)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (8U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [2ULL] [i_13 - 1]))) : (((((/* implicit */_Bool) (unsigned char)4)) ? (4294967287U) : (3997704941U)))))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) min(((~(((((/* implicit */_Bool) arr_48 [i_13] [i_13] [12ULL])) ? (63LL) : (-3482773130260337745LL))))), (((/* implicit */long long int) ((int) (+(((/* implicit */int) (signed char)93)))))))))));
                            var_29 |= ((/* implicit */long long int) arr_21 [(signed char)12] [i_14] [i_14]);
                            var_30 ^= ((/* implicit */unsigned char) ((((_Bool) min((arr_22 [(unsigned char)16] [i_16] [i_17]), (((/* implicit */unsigned long long int) (unsigned char)156))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [i_15] [i_15] [i_15] [6] [i_16] [i_16 - 1])))) : ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_2)) : (14181997798055555393ULL)))))));
                        }
                    }
                } 
            } 
            arr_60 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_6 [(short)17] [i_14 + 1] [16ULL]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((~(arr_52 [i_13] [5ULL] [i_13 - 1])))));
            var_31 = arr_4 [i_13 - 1] [i_14 + 1] [(_Bool)1];
        }
        for (int i_18 = 2; i_18 < 12; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
            {
                for (long long int i_20 = 0; i_20 < 13; i_20 += 1) 
                {
                    {
                        var_32 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((long long int) (signed char)0))), (((((/* implicit */_Bool) arr_52 [i_18 - 2] [i_13 + 1] [i_13])) ? (((/* implicit */unsigned long long int) arr_48 [6ULL] [i_13 + 1] [6ULL])) : (arr_52 [i_18 - 2] [i_13 + 1] [i_13 + 1])))));
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(var_9)))))) ? ((+(((/* implicit */int) arr_32 [i_13])))) : (((/* implicit */int) ((signed char) (+(1430827668)))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_21 = 3; i_21 < 12; i_21 += 4) 
                        {
                            arr_70 [i_13 + 1] [i_13] [6LL] [(_Bool)1] [i_21] [6] = ((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)7))))));
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_13 - 1] [i_18 - 1] [i_19] [i_20]))))))));
                            var_35 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_13] [i_18]))) - (var_9))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_13 + 1] [i_18] [i_18 - 2] [i_19] [i_20] [i_21])) ? (((/* implicit */int) (unsigned char)119)) : (13))))));
                            arr_71 [i_13] [(unsigned short)0] |= ((/* implicit */long long int) arr_31 [(_Bool)1] [i_19] [1ULL] [i_21 - 1]);
                        }
                        for (unsigned long long int i_22 = 2; i_22 < 11; i_22 += 2) 
                        {
                            var_36 -= ((/* implicit */unsigned int) ((long long int) (+(((/* implicit */int) min((arr_5 [i_13 - 1] [i_18] [i_19]), (((/* implicit */unsigned char) (_Bool)1))))))));
                            var_37 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_13])) ^ (((((/* implicit */_Bool) -825711408)) ? (-87418740) : (((/* implicit */int) (signed char)-11))))))) ? (((((/* implicit */_Bool) (~(arr_17 [i_13] [i_22 + 1])))) ? (min((arr_17 [i_13] [i_13 - 1]), (arr_17 [i_13] [i_20]))) : ((~(((/* implicit */int) (unsigned short)24368)))))) : (min((((/* implicit */int) ((unsigned short) arr_9 [i_13 - 1] [i_13] [i_13] [18LL] [i_13]))), ((~(((/* implicit */int) (unsigned char)255)))))));
                            var_38 *= ((((arr_48 [i_13 + 1] [(_Bool)0] [i_22]) > (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_22] [i_22 - 2] [i_22] [(unsigned char)9] [(_Bool)1] [i_22] [i_22]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 0LL)))) ^ (min((276764091U), (((/* implicit */unsigned int) (unsigned short)1854)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_49 [i_22])))));
                        }
                        /* vectorizable */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_39 *= ((/* implicit */_Bool) ((signed char) var_15));
                            arr_76 [8LL] [i_19] [i_20] [i_23] |= ((/* implicit */long long int) ((_Bool) -7960531440906589748LL));
                            var_40 = ((/* implicit */unsigned long long int) arr_72 [i_13 + 1] [i_18 - 2] [i_18] [i_18] [i_18 + 1]);
                            var_41 *= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_18] [i_19] [(_Bool)1]))) : (var_3))));
                            arr_77 [i_23] [i_13] [5] [i_19] [(unsigned char)12] [i_13] [i_13] = ((long long int) arr_51 [i_13] [i_18 - 2] [(short)0] [i_20]);
                        }
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1430827652)) ? (((/* implicit */long long int) 310172132U)) : (-7716994062988316780LL)))) ? (((5388167510562214433ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_18 + 1] [i_18 + 1] [i_18] [i_18] [i_18 + 1] [i_18 - 1] [i_13 + 1])))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) arr_72 [i_13] [(unsigned char)3] [i_19] [i_19] [i_20])) ? (((/* implicit */unsigned long long int) ((int) var_14))) : (arr_52 [i_13] [i_18] [i_19])))));
                        arr_78 [i_13] [4ULL] [i_13] [i_13 - 1] [i_13] [4U] &= ((/* implicit */short) (-((-(((var_10) << (((9006196004570940106ULL) - (9006196004570940077ULL)))))))));
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned long long int) arr_69 [i_18] [i_18 - 2] [i_13] [i_13] [i_13]);
            var_44 ^= ((/* implicit */long long int) arr_75 [i_13] [i_18] [(unsigned short)4] [i_18] [6ULL]);
        }
        /* LoopNest 2 */
        for (signed char i_24 = 0; i_24 < 13; i_24 += 1) 
        {
            for (long long int i_25 = 0; i_25 < 13; i_25 += 4) 
            {
                {
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (min((min((((((/* implicit */_Bool) (unsigned short)47757)) ? (14346161384198223757ULL) : (((/* implicit */unsigned long long int) 16777215)))), (((/* implicit */unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (_Bool)1)))))))))));
                    var_46 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)0)) ? (9006196004570940106ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((((/* implicit */_Bool) 1582850830U)) ? ((~(8885051329791651015ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_13 + 1])))))));
                    var_47 |= ((/* implicit */long long int) var_14);
                }
            } 
        } 
        var_48 ^= ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) ((unsigned char) arr_39 [i_13] [i_13 + 1] [i_13]))))));
    }
    var_49 = min((min((min((9440548069138611500ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) (-(2093311235)))))), (((/* implicit */unsigned long long int) var_6)));
    var_50 |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))), (((/* implicit */int) var_11))));
    var_51 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_15) + (2147483647))) << (((((unsigned long long int) 1032072322031946493LL)) - (1032072322031946493ULL)))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_13))))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (min((var_5), (((/* implicit */unsigned short) var_14)))))))));
}
