/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31952
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0]))) ? (max((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_3 [(unsigned short)2] [i_0])) - (87))))), (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1]))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) : (((arr_0 [i_0]) << (((((/* implicit */int) arr_2 [i_0])) - (72))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [11ULL] [i_0])))));
            var_13 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [(unsigned short)6])), (4663405103648037817ULL)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (var_5)))))))));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0]))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (unsigned char i_4 = 4; i_4 < 8; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_3] [4] [i_0] = ((/* implicit */unsigned long long int) ((arr_15 [i_4 + 3] [i_4 - 3] [i_5]) << (((((/* implicit */int) var_7)) - (25002)))));
                            arr_18 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((var_1) % (((/* implicit */int) var_6)))));
                            arr_19 [i_0] [i_0] [i_3] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_13 [i_4 + 2] [i_4 + 2] [9] [i_4 - 1] [i_0])) : (((/* implicit */int) var_6))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_6 = 1; i_6 < 11; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                var_15 = (+(((/* implicit */int) min((arr_14 [i_0] [i_6] [i_7] [i_6 + 1]), (arr_14 [0ULL] [i_6 + 1] [i_7] [i_7])))));
                var_16 = ((/* implicit */signed char) min((arr_4 [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_21 [i_0] [i_6] [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    arr_27 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_6 - 1]);
                    var_17 *= ((/* implicit */unsigned char) arr_6 [(_Bool)1] [i_6 - 1] [i_7]);
                    arr_28 [(signed char)0] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */int) arr_3 [i_0] [i_0])), (var_1))), (((/* implicit */int) max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_4 [i_0])), (((((((/* implicit */int) arr_12 [i_6 + 1])) + (2147483647))) << (((((unsigned int) var_2)) - (56U)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        arr_31 [i_0] [i_6] [i_7] [i_0] = ((/* implicit */short) ((((arr_7 [i_6 + 1]) != (arr_7 [i_6 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (((((/* implicit */_Bool) arr_26 [i_0] [i_6 - 1] [i_8] [i_9])) ? (arr_26 [i_0] [i_6] [i_0] [i_9]) : (arr_26 [i_0] [i_6] [i_7] [i_8])))));
                        arr_32 [i_0] [i_6] [(unsigned short)7] [i_8] = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) (unsigned short)46584)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7] [i_8] [4ULL]))))), (((/* implicit */unsigned long long int) arr_20 [i_6] [i_6 + 1] [i_7])))), (((/* implicit */unsigned long long int) max((arr_20 [i_0] [i_7] [i_9]), (arr_20 [i_0] [i_7] [i_8]))))));
                    }
                }
            }
            for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 2) 
            {
                var_19 += ((((/* implicit */_Bool) max((arr_0 [i_10]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_20 [(_Bool)0] [i_6] [i_10])) : (1058518972))))))) ? (((/* implicit */int) arr_30 [i_10])) : (((/* implicit */int) arr_34 [i_10] [i_6 + 1] [i_10])));
                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_10 + 1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_10 + 2]))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
                var_21 = ((/* implicit */signed char) (-(((/* implicit */int) ((-7955263344942988435LL) == (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)32752))))))))));
            }
            arr_35 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)1] [i_6 - 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_22 [i_0] [i_0] [(unsigned short)9] [i_6 - 1])), (var_10)))) : (((/* implicit */int) (!((_Bool)0))))))));
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_6 + 1] [i_6 - 1] [i_6 + 1])) <= (((/* implicit */int) arr_14 [i_0] [i_6 + 1] [i_6 + 1] [i_6 + 1])))))) % (((((/* implicit */_Bool) max((arr_6 [(_Bool)1] [i_6] [(_Bool)1]), (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */unsigned long long int) var_1)) & (var_5))) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_6] [i_11]))))));
                var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_3)), (var_10)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32752))) % (var_5)))));
                arr_38 [(signed char)7] [i_6] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) (signed char)-110))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_8))) : (((((/* implicit */_Bool) var_8)) ? (arr_37 [i_11] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) arr_15 [i_0] [i_6] [i_11])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0]))) | (var_4)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_11] [i_6 - 1] [i_0]))) : (arr_26 [i_6] [i_6] [i_0] [i_0])))))));
            }
        }
        var_24 = ((/* implicit */unsigned char) max((max((-7520813298681561847LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((arr_5 [2U] [i_0] [2U]), (((/* implicit */short) var_6))))))))));
        var_25 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))));
    }
    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) ((4294967287U) | (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */signed char) arr_41 [i_12]))))))));
        var_27 = ((/* implicit */_Bool) max((((unsigned int) arr_39 [i_12])), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)8310)) ? (((/* implicit */int) arr_41 [10U])) : (((/* implicit */int) arr_41 [17])))), (595033263))))));
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_39 [i_12])))) * (((/* implicit */int) ((((/* implicit */int) arr_39 [i_12])) == (((/* implicit */int) arr_39 [i_12])))))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15169)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)221))));
    }
    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
    {
        var_30 ^= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_41 [i_13])), (arr_40 [i_13] [i_13]))) / (max((arr_40 [i_13] [i_13]), (2219106100510025451ULL)))));
        var_31 = ((/* implicit */_Bool) ((((((arr_40 [i_13] [i_13]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_13]))))) ? (max((var_1), (((/* implicit */int) var_3)))) : ((+(((/* implicit */int) arr_41 [i_13])))))) % (max((((((/* implicit */_Bool) (unsigned short)16682)) ? (((/* implicit */int) arr_39 [i_13])) : (((/* implicit */int) arr_41 [i_13])))), (((((/* implicit */int) var_7)) & (var_1)))))));
        arr_44 [i_13] [16ULL] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551584ULL))))), (min((arr_40 [i_13] [i_13]), (((/* implicit */unsigned long long int) arr_41 [i_13]))))));
        var_32 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (min((arr_40 [i_13] [i_13]), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) (signed char)-71))));
    }
    var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)43660)), (3417081684020167183LL)));
}
