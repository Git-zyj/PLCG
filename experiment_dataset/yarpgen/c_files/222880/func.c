/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222880
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
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (var_10))) % (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != ((~(((/* implicit */int) arr_4 [i_0]))))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */int) var_14)) == (var_13)))))))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_5 [i_0]))))))) ? (((/* implicit */unsigned long long int) var_16)) : (((arr_8 [i_2 - 1] [i_2 - 1] [i_1] [i_2 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_2 [i_0] [i_0] [i_2 - 1])))))));
                var_21 += ((/* implicit */int) var_1);
            }
        }
        for (short i_3 = 3; i_3 < 16; i_3 += 2) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_9)))), (min((var_13), (((/* implicit */int) var_12))))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_2)), (var_14)))), (max((arr_7 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_5 [14])) : (((/* implicit */int) arr_4 [i_0])))))));
            arr_12 [(signed char)4] [i_3] [i_3 - 2] = ((/* implicit */int) ((((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (short)-24223)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) ? ((-(var_16))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned int) var_9)), (arr_6 [i_3 - 3] [i_3] [i_0] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (3858988104U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) arr_3 [i_3 - 3] [(short)5])) : (((/* implicit */int) max((((/* implicit */short) arr_0 [i_3 - 2])), (var_9))))))))))));
        }
        for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            arr_15 [i_4] [i_4 + 3] = ((/* implicit */_Bool) ((((var_3) || (min((var_3), ((_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_4 + 1])) * (((/* implicit */int) arr_5 [i_0]))))) : (min((min((var_8), (((/* implicit */long long int) var_9)))), (((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
            arr_16 [i_4] = arr_0 [3U];
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((max((arr_6 [i_4 - 1] [i_4 + 3] [i_4 + 3] [(unsigned short)10]), (arr_6 [i_4 + 2] [i_4 + 3] [i_4 + 2] [14ULL]))), (var_15))))));
        }
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_25 *= ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_5])) ? (arr_9 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (var_0))))))))));
            arr_19 [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_18 [i_0]) : (((/* implicit */unsigned int) var_13))))), (min((var_4), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) max((max((arr_9 [(signed char)2] [i_0]), (var_11))), (((/* implicit */unsigned int) min(((short)8905), (((/* implicit */short) var_2))))))))));
        }
        arr_20 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_0]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                arr_31 [i_8] [i_6] [i_7] [i_6] = arr_6 [i_6] [(_Bool)1] [i_6] [i_8];
                var_26 = ((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_7] [i_8])))))));
                arr_32 [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) % (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
            }
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5118937850410453293LL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) || (arr_34 [i_6] [i_7] [i_9])));
                var_28 = ((/* implicit */short) arr_0 [i_6]);
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_7])) || (((/* implicit */_Bool) arr_4 [i_6]))));
            }
            arr_35 [i_7] [i_7] [i_6] = ((/* implicit */long long int) 938214698U);
            var_30 += ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_14 [i_6])) && (var_2))));
            var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-27347)) % (((/* implicit */int) (_Bool)1))));
        }
        /* LoopSeq 3 */
        for (short i_10 = 3; i_10 < 6; i_10 += 4) 
        {
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [(short)6] [i_10 + 1] [(_Bool)1] [i_10 - 1])) ? (((/* implicit */int) ((short) var_9))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))));
            /* LoopSeq 2 */
            for (long long int i_11 = 2; i_11 < 9; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10] [i_10 - 2] [i_11 - 2])) ? (arr_39 [i_6] [i_10 - 3] [i_11 - 1]) : (arr_39 [i_6] [i_10 + 3] [i_11 - 1]))))));
                    var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) var_4)))));
                    arr_42 [i_11] [i_11] [i_11] [i_12] = ((short) 2147483647);
                    var_35 -= ((/* implicit */unsigned long long int) var_7);
                }
                arr_43 [i_6] [i_11] [i_10 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 570944517978293601LL)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)1650)))) : (((/* implicit */int) var_5))));
                arr_44 [i_10] [i_10] [i_11] [i_11] = (!(var_2));
            }
            for (short i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                var_36 = var_3;
                var_37 &= ((/* implicit */short) ((((/* implicit */int) arr_14 [i_10 + 2])) != (((/* implicit */int) arr_14 [i_10 - 2]))));
            }
            var_38 = ((/* implicit */short) (!(arr_3 [i_10 - 3] [i_10 + 4])));
        }
        for (short i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_48 [i_14]))));
            var_40 = ((/* implicit */short) arr_28 [i_6] [i_6] [i_6] [i_6]);
        }
        for (int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            var_41 = ((/* implicit */long long int) (~((+(((/* implicit */int) (_Bool)1))))));
            arr_52 [i_6] [(unsigned short)1] [i_15] = ((/* implicit */unsigned char) arr_21 [i_6]);
        }
        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6])) ? (((/* implicit */int) (short)24238)) : (((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6])))))));
    }
}
