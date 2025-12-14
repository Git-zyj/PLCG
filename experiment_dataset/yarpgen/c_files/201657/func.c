/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201657
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] [(unsigned short)22] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))))) ? (((((/* implicit */_Bool) (unsigned short)58225)) ? (((/* implicit */long long int) 32748174U)) : (-8437074883308655621LL))) : (((((/* implicit */_Bool) (short)-9)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_3 [2U] = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_1 [i_0])))))))), (var_10)));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_17 = ((unsigned int) min(((unsigned short)7310), ((unsigned short)0)));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) ((short) arr_11 [i_2])))));
                var_19 = ((unsigned short) arr_4 [i_3 - 1]);
            }
            for (short i_4 = 3; i_4 < 10; i_4 += 1) 
            {
                var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_1]) : (arr_1 [i_1])))) ? (((/* implicit */int) ((short) arr_11 [i_1]))) : (var_9))), (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [(unsigned char)9] [i_1]))))) : (((/* implicit */int) arr_4 [i_1]))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2099656466U)) ? (((((/* implicit */_Bool) arr_12 [i_4 - 2] [i_4 - 3] [i_4 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_12 [i_4 - 1] [i_4 + 2] [i_4 - 3])))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_13 [(unsigned short)6] [i_4 - 2]) : (-10)))))));
                arr_16 [i_4] [i_1] [i_4] [i_1] = ((/* implicit */_Bool) ((arr_1 [i_4 + 1]) / (min((var_6), (arr_1 [i_4 - 1])))));
                arr_17 [i_1] [i_4 - 1] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_10 [i_4 - 2] [i_4 - 2] [i_4 + 2] [i_4 + 2])))) ? (((/* implicit */long long int) ((arr_15 [i_1]) >> (((((/* implicit */int) ((short) (signed char)-58))) + (69)))))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_4 - 2] [i_4])) ? (arr_10 [i_4] [i_4 - 2] [i_4] [i_4 + 2]) : (((/* implicit */long long int) arr_14 [i_2] [i_4 - 2] [i_4 + 2]))))));
            }
            var_22 = ((/* implicit */short) arr_8 [i_2] [i_1]);
        }
        var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_15 [i_1])))) >= (((((/* implicit */_Bool) (signed char)-126)) ? (arr_9 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))));
    }
    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 4) 
    {
        arr_20 [i_5 + 3] [11U] = ((/* implicit */long long int) var_3);
        /* LoopSeq 2 */
        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 2) 
        {
            arr_24 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_6 + 2] [i_5 + 3])) >> (((((/* implicit */int) arr_5 [i_6 + 1] [i_6])) - (16)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_6] [i_5 - 2])) ? (((/* implicit */int) arr_5 [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_5 [i_6 + 1] [i_6 + 1]))))) : (((long long int) arr_5 [(unsigned char)1] [i_5]))));
            var_24 = ((/* implicit */unsigned char) var_6);
            arr_25 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((127357078152829648ULL), (((/* implicit */unsigned long long int) arr_19 [i_6 + 1] [i_6]))))) ? (((/* implicit */int) max(((short)6813), ((short)6929)))) : (((/* implicit */int) ((short) arr_6 [i_6 + 1] [i_6])))));
            /* LoopSeq 1 */
            for (int i_7 = 2; i_7 < 8; i_7 += 3) 
            {
                arr_28 [i_5 + 3] [i_6] [i_7] [i_6] = ((/* implicit */short) (unsigned char)2);
                arr_29 [i_7] = ((/* implicit */unsigned int) arr_4 [i_5]);
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    var_25 = ((/* implicit */short) ((max((((((/* implicit */int) (signed char)117)) | (arr_15 [i_7 + 4]))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_8])) : (((/* implicit */int) var_8)))))) == (((/* implicit */int) arr_4 [i_5]))));
                    arr_33 [i_5 - 1] [i_6] [i_7 - 2] [i_8] = ((/* implicit */unsigned int) ((long long int) (~((~(-208723503))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 1; i_9 < 10; i_9 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_30 [i_6] [i_8] [i_7] [i_6]);
                        var_27 = ((/* implicit */short) ((max((arr_1 [i_8]), (((/* implicit */long long int) arr_11 [i_5 - 1])))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_21 [i_9] [i_8] [i_6]))))));
                        var_28 = ((/* implicit */signed char) arr_0 [i_5 + 2]);
                    }
                    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_6 + 1])) && (((/* implicit */_Bool) var_12)))))));
                        arr_39 [i_5] [i_10] [i_10] = ((/* implicit */short) arr_14 [i_10] [i_6] [i_6]);
                        var_30 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_5 [i_6 + 1] [i_5 - 1])) ? (((/* implicit */int) arr_5 [i_6 + 2] [i_5 + 1])) : (((/* implicit */int) var_1)))));
                    }
                    arr_40 [i_5] [i_5] [i_6] [i_7] [i_8] = var_4;
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        arr_44 [11U] [i_6] [i_5] [i_6] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_43 [i_5] [i_6 + 1] [i_7 - 1] [i_8] [i_11])), (arr_1 [i_5])))))) ? (arr_34 [i_5] [i_5] [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_5]) : (((((/* implicit */_Bool) ((short) var_4))) ? (arr_9 [i_5 - 1]) : ((~(2099656455U)))))));
                        arr_45 [i_5] [i_5 + 1] [i_6] [i_6] [i_7 + 2] [0U] [i_11] = max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)7338));
                    }
                    for (short i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        arr_50 [i_5] [i_6] [i_7] [i_7] [i_7] [1LL] [i_12] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_5])) ? (arr_31 [(unsigned char)9] [i_6 + 2] [i_8] [i_12]) : (((/* implicit */int) arr_4 [i_7]))))) ? ((~(36204147U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)26568))))))));
                        arr_51 [i_5] [i_6 + 1] [(short)0] [(_Bool)1] [i_12] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_9 [i_5 + 2]) < (arr_9 [i_5 - 1])))), ((~(((long long int) var_0))))));
                    }
                }
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_55 [i_5] [i_13] = ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_54 [i_13]))))) ? ((~(var_4))) : (arr_7 [i_5 + 3] [i_5 - 1])));
            arr_56 [i_5] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_5 - 2] [i_5 + 1]))))) ? (((((/* implicit */_Bool) arr_7 [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19720))) : (arr_34 [i_5 + 3] [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 3] [i_5 + 2]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_5] [i_13] [i_13])))))));
            var_31 = arr_35 [i_13] [i_13] [i_13] [i_13] [(unsigned short)8];
        }
    }
    var_32 = ((/* implicit */signed char) var_4);
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-125)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((((/* implicit */int) var_15)) < (((/* implicit */int) (signed char)-112)))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
}
