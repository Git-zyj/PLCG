/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193740
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
    var_12 = ((/* implicit */short) min((min((((/* implicit */int) ((short) (short)-7705))), (((((/* implicit */int) var_3)) * (((/* implicit */int) var_10)))))), (((/* implicit */int) var_1))));
    var_13 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)235))));
    var_14 = (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned short)8218))))))) : (((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_6))))) ? ((~(7884313534238313969LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))));
    var_15 = ((/* implicit */short) var_0);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_2] = ((/* implicit */long long int) arr_9 [i_0] [i_3] [i_3] [i_0]);
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */short) (unsigned char)248);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            arr_22 [i_4] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_7] [i_5]))));
                            var_16 -= ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)233)) || (((/* implicit */_Bool) (unsigned char)235)))))));
        }
        var_18 = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_10)))))), ((+(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))));
    }
    for (long long int i_8 = 2; i_8 < 12; i_8 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) min(((-(arr_25 [i_8 + 1]))), (arr_23 [i_8 - 2])));
        var_20 = ((/* implicit */long long int) (unsigned char)9);
        /* LoopNest 3 */
        for (long long int i_9 = 1; i_9 < 13; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
            {
                for (signed char i_11 = 3; i_11 < 13; i_11 += 4) 
                {
                    {
                        arr_34 [i_8] [i_11] [i_10] [(unsigned short)0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((arr_26 [i_8] [i_9] [i_10]) ? (((/* implicit */int) arr_33 [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9])) : (((/* implicit */int) (unsigned char)248))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_10] [(short)9] [i_10] [i_9 + 1] [i_8 + 2] [i_8 + 1])) * ((+(((/* implicit */int) arr_26 [i_8 - 1] [i_10] [i_11]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8] [i_9] [i_10] [i_11 + 1])) ? (((/* implicit */int) arr_27 [i_9])) : (((/* implicit */int) (unsigned char)23))))) ? (((arr_27 [i_9 + 1]) ? (arr_25 [i_8 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_32 [i_9] [i_9] [i_9] [i_11]))))))));
                        arr_35 [i_8 + 1] [i_9 - 1] [i_11] [i_11] [i_8] = ((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)24)));
                    }
                } 
            } 
        } 
        arr_36 [i_8] [i_8] = ((/* implicit */short) min(((-(((/* implicit */int) arr_27 [i_8 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)24)) || ((_Bool)1))))));
        var_21 = ((/* implicit */signed char) arr_28 [i_8] [(signed char)6]);
    }
}
