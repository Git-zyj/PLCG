/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38527
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
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        arr_3 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) max((((/* implicit */int) var_10)), (((((/* implicit */int) var_8)) << (((/* implicit */int) arr_0 [i_0 - 3]))))));
        arr_4 [(short)4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((int) -820047720))) : (((((/* implicit */_Bool) 16632812472452054344ULL)) ? (15598974804542361419ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53)))))));
        var_11 = ((/* implicit */int) max((var_11), (((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)29422)))) << (((arr_2 [i_0 + 2]) + (1103981679))))) << (((((min((((/* implicit */int) arr_1 [7] [i_0 - 1])), (-883920863))) + (883920867))) - (3)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) var_10);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_13 [i_0] [0ULL] [i_1] = ((/* implicit */unsigned char) var_4);
                        var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_0)) - (51)))))) ? (((((/* implicit */_Bool) (unsigned char)175)) ? (9223372036854775784LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 - 1] [i_0 + 2] [(short)8]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [(unsigned char)0] [i_0])) != (((/* implicit */int) var_2))))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) (signed char)112)) : (-1941182780)))) ? (((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0 + 3] [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_0 + 1] [5] [i_2 - 2])) : (((/* implicit */int) arr_7 [i_0 + 4] [i_0 + 4] [i_2 + 1])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0 - 3] [7U] [i_2 - 2])) : (((/* implicit */int) arr_7 [i_0 + 4] [(_Bool)1] [i_2 - 2]))))));
                        var_15 = ((/* implicit */int) var_10);
                    }
                }
            } 
        } 
    }
    var_16 = ((((/* implicit */_Bool) ((int) var_0))) ? (min((((((/* implicit */int) var_8)) % (((/* implicit */int) (short)-16966)))), (((/* implicit */int) var_3)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (((unsigned short) (short)-7703))))));
    var_17 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (var_9)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_6))))))), (var_5)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 2; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_16 [(unsigned char)3]))));
                            var_19 = ((/* implicit */unsigned char) -235394815);
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_5 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_27 [8] [i_4] [i_5 + 2] [i_5 + 2] [i_5 - 1])))))));
                            var_21 -= ((/* implicit */int) arr_27 [(signed char)2] [i_6] [6U] [i_6] [i_6]);
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_27 [i_5 + 2] [i_4] [i_5 - 1] [8] [i_5 + 1])) : (((/* implicit */int) var_2)))))));
        }
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_4])) & (((/* implicit */int) (unsigned short)6669))));
        /* LoopNest 2 */
        for (signed char i_9 = 3; i_9 < 11; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                {
                    var_24 -= ((/* implicit */unsigned short) ((-883920880) != (((/* implicit */int) arr_31 [i_4] [(unsigned char)1] [(unsigned char)1]))));
                    var_25 = ((/* implicit */short) var_8);
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            {
                                arr_44 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(unsigned char)10] [(_Bool)1] [(short)6] [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 883920848)) ? (((/* implicit */int) arr_5 [i_9 + 1] [i_10])) : (((/* implicit */int) arr_5 [i_9 - 3] [i_10]))));
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_11] [i_11]))) : (var_5)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_13 = 1; i_13 < 16; i_13 += 4) 
    {
        var_27 = ((/* implicit */unsigned short) 12167487111652830757ULL);
        arr_47 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_13 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))));
    }
    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 4) 
    {
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (820047719) : (((/* implicit */int) (unsigned char)23))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) ? (min((((((/* implicit */_Bool) arr_11 [i_14])) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) var_1)))), (((/* implicit */int) (signed char)116)))) : (((((/* implicit */_Bool) min((((/* implicit */signed char) var_3)), (var_1)))) ? (((/* implicit */int) arr_12 [i_14] [i_14] [i_14])) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_8))))))))))));
        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [(signed char)2] [i_14])) ? (min((arr_48 [(short)18] [i_14]), (((/* implicit */int) arr_8 [i_14])))) : (((((/* implicit */_Bool) 7585131514099455448LL)) ? (((/* implicit */int) arr_8 [i_14])) : (((/* implicit */int) arr_8 [i_14]))))));
    }
    var_30 = ((/* implicit */unsigned char) 13993242517616740335ULL);
}
