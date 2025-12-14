/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20744
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) (-(max((18446744073709551613ULL), (((/* implicit */unsigned long long int) 33554431LL))))));
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (var_6))))));
                            var_15 += ((/* implicit */unsigned char) ((long long int) var_9));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_16 *= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0] [i_5]);
                        arr_17 [i_0] [i_4] [(short)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 3ULL))));
                        var_17 = ((/* implicit */int) var_4);
                        var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)6))))), ((~(((/* implicit */int) (unsigned char)16))))));
                    }
                    arr_18 [i_4] = (+(min((min((var_6), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) var_1)))));
                    arr_19 [i_4] [(_Bool)1] [i_1] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (4398042316800ULL))), (((/* implicit */unsigned long long int) max((arr_2 [i_0 + 2] [i_0]), (((/* implicit */short) var_8)))))));
                }
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) <= (((/* implicit */int) var_3))))) | (((/* implicit */int) ((unsigned char) var_12)))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))) >= (((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [0])) : (((/* implicit */int) var_3))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))));
    var_21 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (long long int i_8 = 3; i_8 < 12; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 4; i_9 < 12; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 9; i_10 += 2) 
                        {
                            {
                                arr_31 [i_6] [i_6] [i_8] [i_6] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) (unsigned short)65535)))));
                                var_22 = ((/* implicit */unsigned short) arr_29 [i_6] [i_7] [i_8 + 1] [i_6]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_23 += ((/* implicit */_Bool) ((short) (unsigned short)0));
                        var_24 = ((/* implicit */unsigned int) min((var_9), (var_0)));
                        var_25 = ((/* implicit */int) arr_26 [(unsigned char)10] [(signed char)12] [i_11]);
                        var_26 += ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned char) var_8)), (arr_30 [i_7] [i_8 - 2] [(unsigned char)8] [i_8] [i_11]))));
                        var_27 = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned char) arr_25 [i_6] [i_6])), (arr_24 [i_6] [(_Bool)1] [i_11]))));
                    }
                    var_28 = ((/* implicit */signed char) max((arr_26 [i_8] [i_8 - 3] [i_8]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
                }
            } 
        } 
    } 
}
