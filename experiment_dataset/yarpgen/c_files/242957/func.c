/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242957
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_13 |= ((/* implicit */signed char) ((((max((((((/* implicit */int) arr_1 [(_Bool)1] [i_0 + 2])) * (var_8))), (((/* implicit */int) arr_0 [20ULL] [i_0 - 3])))) + (2147483647))) << (((((((/* implicit */int) (signed char)-78)) + (99))) - (21)))));
        var_14 = ((/* implicit */_Bool) ((unsigned short) (_Bool)0));
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_15 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 4]))) * (arr_3 [i_1] [i_1])));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            arr_7 [i_2] = ((/* implicit */signed char) (+(((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_2 [i_1] [i_1]))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                arr_11 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_3] [i_3]))));
                var_17 |= ((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_1])) == (var_8))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) && (((/* implicit */_Bool) ((int) (signed char)116)))));
            }
        }
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            var_19 = ((/* implicit */int) (-(14829669796100019497ULL)));
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                var_20 += ((/* implicit */short) (+(-1621270203)));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((short) arr_1 [i_1 + 1] [i_1 - 4])))));
            }
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) * (((/* implicit */int) (unsigned short)54056))));
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    arr_25 [i_4] = ((/* implicit */short) var_7);
                    var_23 = ((/* implicit */unsigned long long int) arr_17 [i_4] [i_4] [8] [8U]);
                    var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */int) arr_8 [i_7] [i_1 - 4] [i_1] [i_7])) != (((/* implicit */int) (short)-4))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_29 [i_4] [i_4] [i_4] [i_6] [i_8] = ((/* implicit */unsigned char) arr_1 [(_Bool)1] [(_Bool)1]);
                    var_25 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) / (((/* implicit */int) (unsigned short)65535))));
                }
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1 + 2] [i_1] [i_1])) ? (((/* implicit */int) arr_27 [i_1 + 1] [i_1 + 3] [i_9] [i_1])) : (((/* implicit */int) arr_27 [i_1] [i_1 + 2] [i_6] [i_1])))))));
                    arr_33 [i_1 - 3] [i_1 - 3] [i_4] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (((((/* implicit */_Bool) arr_28 [i_1] [i_1 + 3] [i_1 - 3])) ? (var_11) : (((/* implicit */unsigned long long int) var_3))))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_38 [i_1] [i_1] [i_1] [8ULL] [i_1] |= ((/* implicit */long long int) ((_Bool) (unsigned char)121));
                        var_27 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                        var_28 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1]))) & (arr_37 [i_1] [i_1 + 2] [i_1 - 3] [i_1 - 3] [i_1])));
                        arr_39 [i_4] [i_6] [i_4] = ((/* implicit */unsigned long long int) (short)-32763);
                    }
                }
                var_29 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((var_11) != (((/* implicit */unsigned long long int) 1935553166U))))) / (((/* implicit */int) arr_4 [i_1 + 2]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    var_30 = ((/* implicit */unsigned short) ((arr_9 [i_1] [i_1] [i_1 - 3] [i_1 - 2]) <= (arr_28 [i_1 - 4] [i_1 - 1] [i_1 + 1])));
                    var_31 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_28 [i_1] [i_1] [i_1])) ^ (arr_18 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_1] [i_1])) != (var_12))))) : ((((_Bool)1) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_1])))))));
                    arr_42 [i_4] [(signed char)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (872543939) : (((/* implicit */int) (unsigned char)128))));
                }
            }
            for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_1 + 2])) != (((/* implicit */int) arr_6 [i_1 - 4])))))));
                arr_46 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_1])) + (((/* implicit */int) var_7))))) ? (arr_19 [i_1 + 1] [i_1 + 1] [i_1]) : (((/* implicit */unsigned int) -95577606))));
                var_33 = ((/* implicit */unsigned short) ((arr_9 [(_Bool)1] [i_12] [(short)0] [i_1 - 2]) | (var_12)));
            }
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) (unsigned short)58349))));
        }
        arr_47 [11U] = arr_45 [(unsigned char)3] [(unsigned char)3] [i_1 - 4];
    }
    var_35 = ((/* implicit */int) var_4);
}
