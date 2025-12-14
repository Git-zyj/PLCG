/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29966
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
    var_17 = var_3;
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (var_16)))), (arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (max((((/* implicit */int) (signed char)59)), (-316484336))) : (((/* implicit */int) var_11)));
                                var_19 = ((/* implicit */unsigned short) (signed char)7);
                                arr_15 [i_0] [i_0] [i_1 - 1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_2] [8] [8] [i_4])) ? (max((var_13), (((/* implicit */int) ((unsigned short) -423498356))))) : (((((/* implicit */_Bool) var_16)) ? ((~(423498347))) : (((/* implicit */int) arr_6 [i_4] [i_1] [i_0] [i_3]))))));
                                var_20 -= ((/* implicit */unsigned char) arr_9 [7ULL] [i_1] [(_Bool)1]);
                                var_21 = ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0 + 1]);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 423498349)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)235)))) | (((/* implicit */int) arr_7 [i_0]))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_0])) : (423498330)))), (((18446744073709551605ULL) / (var_1))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4))))));
        arr_17 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0])))));
        var_23 = (~(arr_10 [i_0] [(unsigned char)15] [i_0] [i_0] [i_0 - 1]));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 12223992281083123590ULL)) ? (423498360) : (((/* implicit */int) (unsigned char)224)))) + (arr_10 [i_5] [i_6 + 4] [i_6] [i_6 + 3] [i_6 - 3])));
            var_25 |= (~(((/* implicit */int) var_6)));
            var_26 = ((/* implicit */int) ((unsigned char) arr_7 [i_6]));
            /* LoopNest 2 */
            for (unsigned short i_7 = 3; i_7 < 13; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) var_3);
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_7]))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_6 + 4])) ? (var_16) : (arr_19 [i_6 + 2])));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                var_30 = ((/* implicit */unsigned char) ((int) var_14));
                var_31 *= ((((/* implicit */_Bool) arr_26 [i_6] [i_6 + 2] [i_6] [i_6 + 4] [10ULL] [i_6])) ? (((/* implicit */unsigned long long int) arr_10 [i_6] [i_6 + 2] [i_6] [i_6] [i_6])) : (arr_26 [i_6 - 1] [i_6 + 2] [8] [i_6] [i_6] [i_6]));
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) arr_0 [i_6]))));
                var_33 = ((/* implicit */int) arr_8 [i_6] [i_6 - 2] [i_6 + 4]);
            }
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                arr_33 [i_6] [i_6] [i_6] [i_5] = (~(((unsigned long long int) var_6)));
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((signed char) ((arr_26 [(signed char)14] [i_6 - 3] [i_6 + 4] [i_6] [i_6] [i_6]) <= (((/* implicit */unsigned long long int) var_3))))))));
            }
        }
        arr_34 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5])))))) ? (423498329) : (((/* implicit */int) arr_9 [i_5] [i_5] [i_5]))));
    }
    var_35 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_14), ((~(((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            {
                var_36 = arr_3 [i_11] [i_12];
                arr_39 [i_11] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_32 [i_11] [i_11])) ? (((((/* implicit */unsigned long long int) var_14)) + (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (arr_18 [i_11])))))) : (((/* implicit */unsigned long long int) -423498370))));
            }
        } 
    } 
}
