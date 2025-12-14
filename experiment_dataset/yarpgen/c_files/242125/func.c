/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242125
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
    var_10 = ((/* implicit */unsigned long long int) var_3);
    var_11 = (-(((/* implicit */int) (signed char)9)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */int) var_6)) | (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
        var_12 = ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)23)) && ((!((_Bool)1)))))));
        var_13 = ((/* implicit */unsigned short) var_9);
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    {
                        arr_15 [i_1] [i_2] = ((140737484161024LL) | (((/* implicit */long long int) 2282525802U)));
                        var_14 ^= ((/* implicit */short) arr_12 [i_4] [i_3] [i_3] [i_1]);
                        arr_16 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_4]))) ? (((/* implicit */int) max((arr_14 [i_1]), (((/* implicit */short) var_1))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_8))));
                        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_12 [i_2] [i_2] [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned char) arr_11 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                        arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 + 2]))))) | (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_16 = ((/* implicit */unsigned short) 4U);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        {
                            var_17 = (((!(((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_6] [i_7])))) ? (((/* implicit */int) max((arr_8 [i_7 + 1] [i_7 + 1]), (arr_8 [i_7 - 1] [i_7 + 2])))) : ((+(((/* implicit */int) (short)-8137)))));
                            var_18 = ((/* implicit */signed char) ((_Bool) max(((((_Bool)1) ? (((/* implicit */int) arr_8 [i_6] [i_1])) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) -140737484161031LL))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65523)))))));
            }
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_2))));
            arr_25 [i_2] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 + 1])))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            arr_29 [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_1] [i_8]))));
            arr_30 [i_1] = ((/* implicit */short) arr_8 [i_1] [i_1]);
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                arr_34 [i_1] [i_8] &= ((/* implicit */long long int) arr_19 [i_8] [i_9]);
                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1] [i_8] [i_9])) + ((-(((/* implicit */int) (unsigned char)242))))));
                var_22 = ((/* implicit */short) arr_26 [i_1] [i_9] [i_9]);
            }
            var_23 = ((/* implicit */_Bool) (~(312118394562024717LL)));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_10 = 1; i_10 < 23; i_10 += 2) 
        {
            arr_38 [i_10 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_10] [i_1]))) : (arr_21 [i_1] [i_1] [i_1] [i_10])))) ? ((-(((/* implicit */int) arr_23 [i_1] [i_1] [i_10] [i_10] [i_10])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_36 [i_1] [i_10]))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_10 - 1])) && (var_1)));
        }
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)34118)) * (((/* implicit */int) (_Bool)1))))), (arr_40 [(signed char)4])))) || (((/* implicit */_Bool) arr_40 [4]))));
        var_26 = ((/* implicit */int) max(((_Bool)1), ((_Bool)1)));
        arr_41 [i_11] = ((/* implicit */unsigned char) arr_40 [i_11]);
        var_27 = ((/* implicit */short) max(((~(((2LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7613))))))), (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_9))))))));
    }
    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (var_2)))))))))));
}
