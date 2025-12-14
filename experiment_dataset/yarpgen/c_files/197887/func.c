/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197887
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
    var_12 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_13 = min((((/* implicit */int) arr_0 [i_0 - 4])), ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)198))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                {
                    for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_15 = max(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)0)));
                            var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 134152192U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)143))))))) ? ((+(((((/* implicit */int) var_5)) ^ (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(short)11] [i_3] [3ULL] [i_1] [(short)1])) ? (arr_3 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) ((arr_3 [i_1] [i_2] [i_3 + 2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_4])))))))));
                        }
                    } 
                } 
            }
            for (int i_5 = 3; i_5 < 10; i_5 += 3) 
            {
                var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_5] [i_1] [i_0]), (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))), (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_6 [i_5]))), (((/* implicit */unsigned long long int) var_9))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_0] [i_5]))) ? (min((((((/* implicit */int) arr_13 [i_0] [i_0])) / (((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [(short)10] [(_Bool)1] [(short)10])))), (arr_10 [i_0] [i_5 - 1] [i_5 - 1] [(_Bool)1]))) : (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) var_5))))));
            }
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) == (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (unsigned char)0))))) ? ((-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(short)8])))) : ((~(((/* implicit */int) var_5))))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 2) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 4398046511103ULL))));
            var_21 += var_5;
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (_Bool)1))));
        }
        var_23 = ((/* implicit */_Bool) ((arr_8 [i_0]) | (((((/* implicit */_Bool) ((arr_14 [(unsigned char)4] [i_0]) ? (arr_3 [i_0] [i_0] [3U]) : (arr_8 [(unsigned char)3])))) ? (((/* implicit */unsigned long long int) min((arr_12 [i_0] [i_0] [9U] [i_0] [i_0]), (var_0)))) : (((((/* implicit */_Bool) var_5)) ? (arr_5 [(short)4] [(short)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    }
    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) 
    {
        var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)120)) : (var_11)))))), (var_3)));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                {
                    arr_26 [i_7] [16U] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) | (min((var_3), (((/* implicit */unsigned int) arr_19 [i_7]))))))) % (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0)))))));
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_20 [i_7 - 1] [(_Bool)1])) ? (var_7) : (var_7))), (((/* implicit */unsigned int) arr_24 [i_7] [i_7] [i_9])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (arr_21 [6]) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) var_7)))))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_30 [i_7] [i_7] [i_9] [i_10] [(_Bool)1] [7ULL])) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))))));
                            }
                        } 
                    } 
                    arr_31 [i_7] [i_8] [i_7] = ((var_7) % (((/* implicit */unsigned int) min((var_11), (((/* implicit */int) var_4))))));
                }
            } 
        } 
        var_28 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) var_5)), ((-(((((/* implicit */_Bool) var_4)) ? (3588280479069718521LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
        var_29 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)899)) && (((/* implicit */_Bool) 15419503906520897470ULL)))), ((!(((/* implicit */_Bool) var_1))))));
        var_30 -= var_3;
    }
    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_2))));
    var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))) >> (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) var_5)))))));
    var_33 = ((/* implicit */short) var_7);
}
