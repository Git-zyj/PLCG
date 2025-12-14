/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242333
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [0LL] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
        arr_3 [i_0] &= ((/* implicit */long long int) (-((+(arr_1 [i_0 + 2])))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) (short)18479)) ? (6824673530678395215ULL) : (((/* implicit */unsigned long long int) -349415916911843983LL)))) ^ (((/* implicit */unsigned long long int) (~(((arr_1 [8LL]) ^ (var_4)))))))))));
        var_20 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_0 + 2]))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (575325711)))) | (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_4 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0]))) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) ((signed char) (signed char)6))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_22 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_4 [i_0 + 4]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) min((((/* implicit */int) var_9)), (-1896974571))))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_0 + 4] [(unsigned short)6] [i_2])) ^ ((+(((/* implicit */int) var_10)))))) == (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_1 [(signed char)1]) : (((int) 18446744073709551604ULL))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_4 = 2; i_4 < 23; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) (~((~(arr_8 [i_1])))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_15))));
                }
                for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 12051630159777922973ULL)))))))) ? (max((arr_1 [i_1 - 1]), (((var_7) ^ (((/* implicit */int) (short)400)))))) : ((+(((/* implicit */int) arr_5 [i_6] [8LL] [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        arr_24 [i_0 + 2] [i_6] [i_6] |= ((/* implicit */short) ((unsigned long long int) arr_17 [i_0] [i_1] [i_6] [i_6]));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0 + 2] [i_4 - 2] [i_4 - 2] [i_4] [i_7])) | (((/* implicit */int) arr_18 [i_0 + 2] [i_4 + 1] [i_6] [i_4] [i_7]))));
                        arr_25 [(signed char)23] [i_0] [i_4 - 2] [i_7] [i_7] [i_4] = ((/* implicit */short) var_11);
                    }
                    var_27 = ((/* implicit */signed char) arr_19 [i_6] [i_4] [i_0]);
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 23; i_8 += 1) 
                    {
                        arr_28 [i_4] [(signed char)14] [i_1 - 1] [i_1 - 1] [i_4] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((unsigned int) var_14))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-11))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_0] [i_1] [i_4 + 2] [i_8] [i_8] [i_0] [(signed char)22])) ^ (((/* implicit */int) var_2))))) == (((6395113913931628661ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)8]))))))))));
                        arr_29 [i_0] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_4 + 2] [i_4 + 2] [i_1 + 1] [i_0 + 4] [i_0] [(signed char)8])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5)))))));
                    }
                }
                var_28 = min((((/* implicit */int) arr_27 [i_4] [i_4] [i_4] [i_4 - 2] [i_4])), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4 + 1] [i_4 + 2])) : (((/* implicit */int) arr_23 [(short)24] [19ULL] [i_4] [i_0] [3ULL] [i_4 + 1] [i_1])))));
            }
            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_18)), (8589934591LL)))) ? ((-(arr_21 [i_0] [i_0] [i_1] [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58)))))))));
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1] [i_1] [i_9] [12]))) ^ (((long long int) ((unsigned long long int) arr_32 [i_0] [10U] [i_9]))))))));
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1 + 1] [i_0 + 3]))))) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-70)), ((unsigned short)52553)))) ? (((/* implicit */int) arr_26 [i_0] [(signed char)8] [i_9] [i_0 + 1])) : ((-(((/* implicit */int) (_Bool)1)))))))))));
            }
            for (unsigned long long int i_10 = 3; i_10 < 23; i_10 += 4) 
            {
                var_32 = ((/* implicit */int) min((arr_21 [i_0] [(signed char)2] [i_0] [i_10] [(signed char)2]), (((/* implicit */unsigned long long int) ((min((var_4), (((/* implicit */int) arr_30 [i_0] [(short)0])))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_17 [i_0 + 4] [i_1] [i_10] [i_10])) == (arr_32 [(short)20] [i_1] [i_10 - 2])))))))));
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_0 + 4] [i_1 + 1])) == (((/* implicit */int) arr_23 [i_0] [(signed char)8] [i_0 + 4] [i_0] [i_0] [i_0] [i_0 + 3])))))) ^ (min((arr_4 [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_18 [i_0] [18] [i_0] [i_10] [i_0])) : (0))))))));
            }
        }
        for (short i_11 = 4; i_11 < 23; i_11 += 1) 
        {
            var_34 = ((/* implicit */signed char) (-(min((((/* implicit */int) arr_5 [i_0] [i_11] [i_11])), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_2))))))));
            var_35 = ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */_Bool) 1023ULL)) ? (((/* implicit */int) var_9)) : (-1407793246))) == (((/* implicit */int) var_9)))));
        }
    }
    for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_13 = 0; i_13 < 24; i_13 += 1) 
        {
            arr_44 [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)21)) | (((/* implicit */int) (short)-26021)))))));
            arr_45 [i_12] [(signed char)2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_43 [i_12] [i_13] [i_12])))))) ? (((/* implicit */int) arr_5 [i_12] [i_13] [i_13])) : (((/* implicit */int) arr_7 [i_13] [i_12]))));
            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) min((((/* implicit */unsigned short) ((signed char) arr_19 [i_12] [i_12] [i_13]))), (arr_12 [13]))))));
            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) arr_31 [i_12]))));
            var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_13 [i_13]), (((/* implicit */unsigned short) (_Bool)1)))))))) ^ ((((+(11ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_33 [i_12] [(signed char)20] [i_13]))))))));
        }
        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_20 [i_12] [i_12] [i_12] [i_12] [i_14] [(unsigned short)16]) ? (((/* implicit */int) arr_20 [i_12] [(signed char)7] [i_14] [i_14] [i_12] [i_14])) : (arr_1 [i_12]))))));
            arr_49 [i_14] [i_14] [(signed char)15] = ((/* implicit */int) max((arr_4 [i_14]), (((/* implicit */unsigned int) ((var_7) ^ (((/* implicit */int) (unsigned short)255)))))));
            arr_50 [i_12] [(signed char)20] [i_12] &= ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (short)-23842)))))), (arr_46 [(signed char)21] [(short)2])));
            var_40 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_12]))) * (1970324836974592ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 111229397U)) ? (1407793238) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_18))))), (((/* implicit */unsigned int) min((max((var_1), (var_3))), (((/* implicit */int) arr_41 [i_14])))))));
        }
        for (short i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            var_41 -= arr_19 [i_12] [i_12] [i_15];
            var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((signed char) ((short) arr_39 [i_12])))), (1038ULL))))));
            var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) var_18)) ^ (var_0))) ^ (((/* implicit */long long int) min((((/* implicit */int) arr_36 [i_12])), (var_6)))))))));
        }
        /* LoopSeq 3 */
        for (short i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)24053)) : (var_13))))));
            var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) arr_53 [i_16] [i_16]))));
            var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) 4183737898U)) : (-9043007983838735741LL))))))), ((+(((/* implicit */int) arr_34 [i_12] [i_12] [i_16])))))))));
        }
        for (int i_17 = 3; i_17 < 23; i_17 += 1) 
        {
            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((signed char)-92), ((signed char)-58)))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_12] [i_17] [i_17 - 3])) == (((/* implicit */int) arr_46 [i_17] [i_17 - 3]))))) : (((/* implicit */int) ((_Bool) arr_46 [i_17] [i_17 + 1])))));
            var_48 = (~(((/* implicit */int) arr_14 [i_17])));
            var_49 = ((/* implicit */short) ((signed char) var_18));
        }
        for (unsigned long long int i_18 = 1; i_18 < 22; i_18 += 1) 
        {
            arr_62 [i_12] [i_18] = ((/* implicit */int) ((long long int) ((unsigned long long int) arr_22 [i_12] [17] [i_18] [17] [i_18 - 1])));
            var_50 = ((/* implicit */int) 18446744073709550592ULL);
            var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_18])) ? (((/* implicit */int) arr_55 [i_12])) : (2047)));
            arr_63 [i_12] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)62730))));
        }
        var_52 = ((/* implicit */signed char) arr_41 [i_12]);
        var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_16)), (var_14)))) ? (((/* implicit */int) var_10)) : ((+(-1896974591)))))))));
    }
    var_54 = ((/* implicit */unsigned short) min((max((((((/* implicit */int) var_5)) | (var_6))), (min((var_15), (((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (424134471))) : (((/* implicit */int) var_12))))));
    var_55 = (!((!(((/* implicit */_Bool) -1896974591)))));
}
