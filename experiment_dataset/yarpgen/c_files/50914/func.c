/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50914
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
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) var_10)) * (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_14)))))) - (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */long long int) var_14);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) (((+(((arr_2 [i_1] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))))) ^ (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) arr_5 [i_0])) + (var_0))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) (unsigned char)87)) - (87)))))))))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)74)))) == (((/* implicit */int) var_15)))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_23 += ((/* implicit */signed char) arr_11 [i_2] [i_1]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)168)) / (((/* implicit */int) (unsigned short)8929)))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_3] [i_4])) : (((/* implicit */int) var_4))));
                            arr_15 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (unsigned char)169))));
                            arr_16 [i_0] [i_3] [2ULL] [i_3] [i_4] = ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_11 [i_3] [(_Bool)0])))))) : (((arr_0 [i_2] [i_4]) + (((/* implicit */long long int) ((/* implicit */int) var_14))))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */int) var_18)) ^ (((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [i_4])))))));
                        }
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((unsigned short) (-((~(((/* implicit */int) (unsigned char)167))))))))));
                            arr_21 [i_0] [i_0] [i_3] [i_2] [i_0] [i_5] = ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0]))) ? (((((((/* implicit */int) arr_12 [i_5] [(signed char)9] [i_1] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_3] [(signed char)10] [i_2] [i_1])) + (129))))) : (((((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_5] [i_2] [i_1] [i_0])) + (142))))));
                        }
                        var_28 = ((/* implicit */signed char) var_10);
                    }
                } 
            } 
        }
        arr_22 [17] [i_0] &= ((/* implicit */int) var_8);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) 11842808556806585LL));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                {
                    arr_31 [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_7])) - (((/* implicit */int) var_6))));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 306349697)) ^ (arr_2 [i_6] [i_7])));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 18; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            {
                                arr_38 [i_6] [i_8] [i_6] [i_10] = ((/* implicit */short) ((signed char) var_9));
                                var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (arr_2 [i_6] [i_7])));
                                var_31 = ((/* implicit */long long int) max((var_31), (((long long int) ((((/* implicit */int) (signed char)-120)) + (((/* implicit */int) (unsigned char)132)))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned char) arr_19 [i_6] [i_6] [i_6] [i_6] [i_7] [i_8] [i_6]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_11 = 1; i_11 < 16; i_11 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
            arr_42 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (signed char)7))));
        }
        for (int i_12 = 1; i_12 < 16; i_12 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_18))) / (((/* implicit */int) arr_14 [i_12 + 1] [i_12] [i_12] [i_6] [i_6]))));
            arr_45 [i_6] [3LL] [i_12] = ((/* implicit */short) 6280688195898934266LL);
            arr_46 [i_12] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_33 [i_12] [i_12] [i_6] [i_12 - 1] [17]))));
        }
        var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_40 [i_6]) : (181732231183881519ULL)))) ? (arr_20 [7ULL] [i_6] [i_6] [i_6] [i_6] [i_6] [8ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
    }
    var_36 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (short i_13 = 0; i_13 < 16; i_13 += 4) 
    {
        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            for (int i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                {
                    arr_56 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_2 [i_13] [i_14])))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_43 [i_13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_13] [i_13])) ? (arr_24 [i_13] [i_15]) : (arr_24 [i_13] [i_14]))))));
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 21LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [3ULL] [i_13]))) : (((((/* implicit */_Bool) var_8)) ? (arr_19 [i_13] [i_14] [i_14] [i_14] [i_13] [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))) ? (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_15] [i_14] [i_13]))))) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)87)) >= (((/* implicit */int) var_2)))))) * (max((var_12), (((/* implicit */long long int) arr_4 [i_13]))))))));
                }
            } 
        } 
    } 
}
