/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24522
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)7);
        arr_5 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-124))));
        var_18 *= ((/* implicit */_Bool) -4515923814268843480LL);
        arr_6 [(unsigned short)15] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 8066026408779763308ULL)) && (((/* implicit */_Bool) 2147483647)))));
        var_19 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0] [8])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1] [i_1])) >= (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) arr_0 [i_1] [i_1])))))))));
        var_21 |= ((/* implicit */long long int) var_15);
        var_22 += ((/* implicit */short) (unsigned char)238);
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) ((unsigned long long int) (unsigned char)232))));
        arr_14 [i_2] = ((/* implicit */short) arr_2 [i_2] [4]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_7 [i_3])))), (((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)40)), (arr_11 [(signed char)0] [i_3])))) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [(signed char)10])) : (var_13))) - (77)))))));
        arr_17 [(_Bool)1] = ((/* implicit */signed char) arr_3 [i_3] [i_3]);
        var_24 = ((/* implicit */long long int) var_1);
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            arr_27 [i_6] [i_6] [i_3] [i_3] [i_3] [i_6] = ((((/* implicit */_Bool) var_7)) ? ((~(arr_12 [i_4] [(_Bool)1]))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_16 [i_7] [0U])), (var_8)))))));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) -583310954))))) >> (((((/* implicit */int) ((signed char) (unsigned char)238))) + (19))))) / (((/* implicit */int) ((unsigned char) ((arr_12 [i_3] [i_3]) >= (((/* implicit */unsigned long long int) 2109881685765533576LL))))))));
                            var_26 += ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [10])) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (signed char)31))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_20 [i_5] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5] [5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [i_5] [i_4]) < (((/* implicit */unsigned int) var_13)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) arr_1 [i_6])))))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_15))));
                        }
                        var_28 *= ((/* implicit */unsigned short) ((min((((/* implicit */int) ((unsigned short) arr_25 [(unsigned short)1] [i_5] [i_3] [i_3] [i_3]))), (((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned char)146)))))) != (((/* implicit */int) min((((/* implicit */unsigned short) arr_24 [i_4] [i_4])), ((unsigned short)61260))))));
                        var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_3]))));
                        var_30 = (+(((/* implicit */int) ((unsigned char) (signed char)3))));
                    }
                    for (long long int i_8 = 2; i_8 < 10; i_8 += 1) 
                    {
                        arr_30 [i_8 - 1] [(signed char)7] [(signed char)7] [(unsigned short)3] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)58612)) ? (((((/* implicit */_Bool) (short)-6504)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1296778346U)))) : (var_16))) : (((/* implicit */long long int) min((min((((/* implicit */int) var_2)), (648420742))), (((/* implicit */int) (!(((/* implicit */_Bool) 3294618691278897690LL))))))))));
                        arr_31 [i_8 - 2] [(short)9] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_22 [(_Bool)1])) | (((/* implicit */int) arr_9 [i_8 - 1] [i_8 - 1]))))), (((long long int) min((var_9), (((/* implicit */unsigned char) arr_9 [i_4] [i_4])))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        arr_34 [i_9] [i_5] [i_4] = ((/* implicit */unsigned long long int) var_4);
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (~(min((((long long int) arr_23 [i_9] [i_5] [i_4] [i_3] [i_3] [i_3])), (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)238)), (221471543)))))))))));
                    }
                    arr_35 [i_3] [i_3] [(signed char)10] [i_3] = ((/* implicit */_Bool) min((arr_10 [i_5]), (arr_10 [4U])));
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (!((!(((_Bool) arr_23 [8U] [(_Bool)1] [(signed char)9] [i_3] [i_3] [i_3])))))))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (var_0)))) ? (((/* implicit */int) (unsigned char)109)) : (-1135152642)))) ? (((((/* implicit */unsigned long long int) ((var_16) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114)))))) % (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
