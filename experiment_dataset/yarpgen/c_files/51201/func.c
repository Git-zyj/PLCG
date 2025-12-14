/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51201
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (3057684660251436555ULL) : (15389059413458115061ULL))))));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_8))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (var_2)))) - (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(unsigned char)12])) && (((/* implicit */_Bool) arr_1 [i_0])))))))) : (((((/* implicit */_Bool) (unsigned short)2545)) ? (3057684660251436532ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)53)))))))));
        arr_5 [i_0] = ((((/* implicit */_Bool) (((~(arr_1 [(short)6]))) >> (((arr_0 [i_0] [i_0]) + (8735534973561818143LL)))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16977)) | (((/* implicit */int) (_Bool)0))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) var_9)) : (var_6)))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) arr_2 [i_0])) - (72)))))))));
    }
    for (int i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2545)) ? (14709460990886087251ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) (short)-2416)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1]))))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)32)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_1 - 1])))) : (min((((/* implicit */unsigned int) arr_6 [i_1 + 1] [i_1 - 1])), (arr_9 [i_1 - 2] [i_1]))))) : (((/* implicit */unsigned int) ((int) arr_9 [i_1 - 2] [i_1 + 1]))))))));
        arr_10 [i_1 + 1] = ((unsigned short) (_Bool)1);
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                {
                    arr_16 [i_3] [9LL] = ((/* implicit */short) arr_14 [i_1] [i_1] [i_1]);
                    /* LoopSeq 3 */
                    for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) (~(min((arr_18 [i_2 + 1] [(unsigned char)5] [i_4 + 1] [i_3] [i_3] [i_1 - 1]), (arr_18 [i_2 + 1] [i_2] [i_4 + 2] [i_3] [i_4 + 2] [i_1 + 1])))));
                        arr_20 [i_1 - 1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_1]))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 3; i_6 < 21; i_6 += 2) 
                        {
                            var_17 = 5749201319033192825LL;
                            arr_26 [7] [i_6] [i_6] [i_5] [i_6 - 1] = ((/* implicit */unsigned int) ((unsigned long long int) 4071624282983757914LL));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 4; i_7 < 21; i_7 += 4) 
                        {
                            var_18 -= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 3448245010710031690LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54))) : (3057684660251436554ULL))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [i_1] [i_2] [i_2] [i_5 - 1]))))))))));
                            arr_29 [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [i_5 - 3] [i_1] [i_1])) ? (((/* implicit */unsigned int) var_2)) : (arr_19 [i_1] [i_1] [i_3] [i_5] [i_5])))) ? (((/* implicit */int) ((((/* implicit */int) arr_15 [i_7 + 1] [i_2])) > (((/* implicit */int) arr_17 [i_2]))))) : (arr_23 [i_1] [i_1] [i_3])));
                        }
                        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)22))));
                        arr_30 [i_1] [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) ^ ((+(arr_19 [i_1] [i_2] [18LL] [i_2] [i_1 - 2])))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) arr_32 [i_1 - 2]);
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_36 [i_1] [i_1] [i_1] [i_1 - 2] = ((/* implicit */long long int) ((arr_9 [i_3] [i_3]) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (arr_21 [i_1] [i_2] [i_3 + 1] [i_3 + 1]))))));
                            arr_37 [i_1] [i_1] [i_1 - 1] = ((/* implicit */signed char) ((arr_8 [i_1 + 1]) || (arr_8 [i_3])));
                            arr_38 [i_1] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_35 [(signed char)17] [i_2] [i_2 - 1] [i_2] [i_3 - 1]))))));
                            arr_39 [i_1] [10U] [i_1] [i_2 - 2] = ((1991455439U) << (((/* implicit */int) (unsigned char)0)));
                            arr_40 [i_1] [i_2] [i_3 + 3] [i_1 + 1] [i_3 + 3] [i_2] [i_3 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_2] [2LL]))));
                        }
                        arr_41 [i_3] [i_3] = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1]))) - (2944500014U)))));
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [(_Bool)1] [i_8])) / (((/* implicit */int) ((_Bool) arr_32 [i_1 - 1])))));
                            var_23 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (_Bool)0))))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_9)) : (var_7))) - (18446744073263053689ULL)))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) -2271419718916322381LL);
                            arr_46 [i_1] [i_11] [i_2 + 1] [i_8] [i_11] = ((/* implicit */_Bool) arr_32 [i_2]);
                            var_25 = ((/* implicit */unsigned int) ((arr_24 [i_1] [i_1 - 1] [i_11] [i_2 + 1] [i_3 - 1]) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) ((_Bool) var_4)))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_50 [i_1] [i_1] [i_3] [i_3] [(unsigned char)22] [i_12] [i_12] = ((/* implicit */_Bool) arr_49 [i_1] [i_12] [i_12] [i_8] [i_8] [(signed char)11]);
                            arr_51 [i_2] [i_2] [i_3 + 1] &= (+(((((/* implicit */_Bool) 2461559221U)) ? (arr_19 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_8] [i_12]) : (((/* implicit */unsigned int) var_9)))));
                            arr_52 [i_1] [7U] [i_12] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_2 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))) : (15389059413458115083ULL)));
                            var_26 = (i_12 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */int) arr_15 [i_2 + 1] [i_2])) + (2147483647))) >> (((((((/* implicit */_Bool) arr_44 [i_1 - 1] [i_3] [i_1 - 1] [i_8] [i_12] [i_8] [9ULL])) ? (arr_49 [i_1 - 1] [i_2] [i_12] [i_3] [i_2] [(short)2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))))) - (1518872385U)))))) : (((/* implicit */signed char) ((((((/* implicit */int) arr_15 [i_2 + 1] [i_2])) + (2147483647))) >> (((((((((/* implicit */_Bool) arr_44 [i_1 - 1] [i_3] [i_1 - 1] [i_8] [i_12] [i_8] [9ULL])) ? (arr_49 [i_1 - 1] [i_2] [i_12] [i_3] [i_2] [(short)2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))))) - (1518872385U))) - (3111456358U))))));
                        }
                    }
                    arr_53 [i_1 - 2] [(_Bool)1] [i_3 + 2] [(signed char)13] = ((/* implicit */_Bool) ((signed char) (+(((((/* implicit */_Bool) arr_47 [6ULL] [6ULL] [6ULL] [i_2] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_3] [i_3])))))));
                    arr_54 [6U] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_3] [22] [i_2] [i_2 - 2] [i_2] [i_1] [i_1])) || (var_10))))));
                    var_27 = ((/* implicit */short) (((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_49 [i_3 + 1] [i_3] [i_2] [i_2] [14ULL] [i_1 - 1]))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_1 - 1])))))));
                }
            } 
        } 
    }
    var_28 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)54402))))) ? ((+(((unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((var_10) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
}
