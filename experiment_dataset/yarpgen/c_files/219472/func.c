/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219472
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
    var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) var_8)) : (var_10)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(((arr_1 [i_0]) + (((/* implicit */int) arr_2 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_2 [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)195)) - (((/* implicit */int) arr_8 [i_0] [i_1])))))))) <= ((+(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))))));
                        arr_12 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2] [i_2]))))) ? ((~(var_7))) : (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0])))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                arr_15 [i_0] [i_4] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_7 [i_0] [i_1])), (var_7))) + (((/* implicit */long long int) var_11))))), (13641828672088878448ULL)));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (min((((/* implicit */long long int) (-(((/* implicit */int) var_13))))), ((-(((arr_0 [i_0] [i_5]) - (((/* implicit */long long int) var_11))))))))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_1))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-85)) + (2147483647))) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_2)) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [(unsigned char)4] [12LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4] [(short)2] [(unsigned short)12]))))))) + (88LL))))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10))) ^ (((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)3])))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    arr_21 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) var_4);
                    var_21 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((min((arr_20 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_17 [i_0] [(signed char)16] [i_4] [i_0])))) << (((min((arr_5 [i_0] [i_1]), (arr_1 [i_0]))) + (1908183028)))))) : (((/* implicit */long long int) ((min((arr_20 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_17 [i_0] [(signed char)16] [i_4] [i_0])))) << (((((min((arr_5 [i_0] [i_1]), (arr_1 [i_0]))) + (1908183028))) - (619406365))))));
                }
            }
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 4; i_9 < 19; i_9 += 2) 
                        {
                            arr_33 [i_0] [i_1] [i_7] [i_0] [i_9 + 1] [i_1] = var_12;
                            arr_34 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / ((((~(arr_0 [i_8] [i_9]))) + (((/* implicit */long long int) ((/* implicit */int) arr_29 [(_Bool)1] [i_7])))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (var_5)));
                        }
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            arr_37 [i_7] [i_10] [i_0] = ((/* implicit */_Bool) arr_19 [i_0] [(signed char)5] [i_7] [i_10]);
                            arr_38 [i_0] [6U] [i_7] [i_1] [i_0] = var_9;
                        }
                        for (unsigned char i_11 = 3; i_11 < 19; i_11 += 3) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_36 [i_0] [i_11 - 3] [i_11] [i_11 - 2] [i_8] [i_0]))))) ? (((((var_13) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_7))) | (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) min((arr_32 [i_0] [i_1] [i_1] [i_7] [i_8] [i_8] [i_11 + 1]), (((/* implicit */int) (_Bool)1)))))));
                            arr_41 [i_0] [i_0] [i_0] [0LL] [i_7] [10ULL] &= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_8] [i_1] [i_0] [i_7] [i_8]))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_35 [i_7] [i_7] [i_1])), (arr_19 [i_0] [i_0] [i_0] [i_0]))))))), ((((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((16LL) - (16LL)))))));
                        }
                        var_24 += ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (+(arr_28 [i_8] [i_8] [i_7])))) ? (max((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13)))))));
                        arr_42 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [(short)15] [i_7] [(unsigned short)7] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [11LL] [i_0])))) == (((/* implicit */int) (!(arr_2 [i_0])))))))) ^ (((arr_25 [i_1] [i_7] [i_8]) / (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (5753297951401740152LL)))) ? (max((arr_28 [i_1] [(unsigned short)16] [i_0]), (((/* implicit */long long int) arr_24 [i_1] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))));
        }
        var_26 = ((/* implicit */short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0]))) + (max((var_11), (4294967295U)))))));
    }
    for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) (unsigned char)53);
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (4294967295U) : (13U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(unsigned short)6] [(signed char)10] [(unsigned short)14] [i_12])) ? (((/* implicit */unsigned int) var_14)) : (4294967295U)))) : (15663928833709426558ULL))), (((/* implicit */unsigned long long int) max((arr_1 [(unsigned char)8]), (((((/* implicit */_Bool) arr_20 [i_12] [(unsigned short)15] [i_12])) ? (arr_13 [(unsigned char)4] [(unsigned char)4] [i_12] [i_12]) : (-1961264521)))))))))));
    }
}
