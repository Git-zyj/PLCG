/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199739
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
    var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))))))));
    var_19 = ((/* implicit */unsigned int) var_10);
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) (-((-(((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_3 [i_0])))) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_1 [i_0]))));
                    var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-(arr_3 [i_0])))))) ? (((/* implicit */int) arr_1 [i_0])) : ((~(((/* implicit */int) (signed char)6))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 3; i_3 < 10; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 4; i_4 < 12; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) arr_8 [i_3] [i_5]);
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_5 [i_3] [i_4 - 4] [i_5]))));
                    var_25 = ((/* implicit */short) arr_12 [i_3] [i_3]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_26 = ((/* implicit */signed char) arr_4 [i_6 + 1]);
            var_27 = ((/* implicit */_Bool) arr_0 [i_3] [i_3]);
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        {
                            var_28 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_6 + 1])) ? (((/* implicit */int) arr_21 [i_7] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_10 [i_6] [i_8]))))))) ? (((arr_7 [i_6 + 1] [i_6 + 1]) ? (((/* implicit */unsigned int) arr_23 [i_3] [i_6] [i_7] [i_8] [i_3] [i_3])) : ((-(arr_14 [i_3] [i_7] [i_7]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) (signed char)-18))))) ? ((~(arr_0 [10LL] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3]))))));
                            var_29 = ((/* implicit */signed char) (~(arr_17 [(_Bool)1] [i_7] [i_9])));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_11 = 1; i_11 < 12; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    {
                        arr_34 [(_Bool)1] [i_3] [i_11 + 1] [(_Bool)1] = ((/* implicit */int) arr_17 [i_3] [(_Bool)1] [i_11 - 1]);
                        var_30 = (-(-184151963));
                        var_31 = ((/* implicit */int) ((arr_1 [i_3]) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_3]))))) ? (((/* implicit */long long int) (+(arr_25 [i_3] [i_10] [(_Bool)1] [(unsigned char)5] [i_3] [(unsigned char)5])))) : (arr_12 [i_12] [i_3 + 3]))) : (((((/* implicit */_Bool) ((arr_1 [i_3]) ? (arr_32 [i_3] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(_Bool)1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_12] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [1LL] [1LL]))) : (arr_13 [i_12])))) : (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */long long int) arr_32 [i_3] [i_3])) : (arr_12 [i_3] [i_10])))))));
                    }
                } 
            } 
            var_32 = (-(((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3])) ? (arr_32 [i_3] [i_3]) : (((arr_5 [(unsigned char)12] [i_10] [i_10]) ? (2617149448U) : (3042401384U))))));
        }
        var_33 = ((/* implicit */signed char) arr_9 [i_3]);
    }
    var_34 = ((/* implicit */signed char) var_3);
}
