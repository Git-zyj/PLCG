/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29933
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
    var_15 = ((/* implicit */signed char) -8991832764679659455LL);
    var_16 = ((/* implicit */unsigned short) ((var_8) % (((/* implicit */unsigned int) (~(((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [7]) : (arr_1 [i_0] [i_0])));
        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) 5359947314912806933LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_5))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)22172)) : (((/* implicit */int) var_2))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_3] [i_4] [10LL] [i_3] [i_3 + 1] [i_3 + 1])) ? (((unsigned int) arr_11 [i_0] [9ULL] [i_0] [i_1] [i_2] [i_3] [i_4])) : (((arr_5 [i_3] [i_1] [(signed char)15]) % (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) 5359947314912806933LL))));
                                var_21 ^= ((/* implicit */unsigned char) ((arr_1 [i_4 - 1] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
                                arr_14 [(unsigned short)4] [i_1] [i_1] [i_2] [i_2] [i_3 - 1] [7] &= ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 1] [i_2] [i_1]))));
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((arr_19 [i_0] [i_5 + 2] [i_2] [i_5] [i_6] [i_6]) + (((/* implicit */int) var_9)));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((672593354U) << (((-870510441) + (870510449))))))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [(unsigned short)4] [(unsigned short)4] = ((/* implicit */unsigned int) 5359947314912806924LL);
                    arr_24 [i_1] = ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (unsigned char i_8 = 1; i_8 < 16; i_8 += 4) 
            {
                {
                    var_24 = ((/* implicit */long long int) ((unsigned char) arr_1 [i_8 + 1] [i_0]));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_8 - 1])) ^ (((/* implicit */int) (_Bool)1)))))));
                    arr_29 [i_0] [i_8] = ((/* implicit */unsigned int) ((long long int) (unsigned char)43));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned short i_10 = 2; i_10 < 15; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) << (((arr_30 [i_9] [(signed char)13]) - (290050937U))))) / (var_10))))));
                        var_27 = ((/* implicit */unsigned char) arr_35 [i_10 - 2] [i_0] [i_0] [i_0]);
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((int) (_Bool)1)))));
                        var_29 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)53285)) << (((/* implicit */int) (unsigned short)15))));
                        var_30 = ((/* implicit */_Bool) arr_27 [i_10 - 1] [i_10 - 2] [i_9]);
                    }
                } 
            } 
        } 
    }
    for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
    {
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_39 [i_12] [i_12]) >> (((arr_39 [i_12] [i_12]) - (83267978U)))))) ? (((arr_39 [i_12] [i_12]) ^ (arr_39 [i_12] [i_12]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_12] [i_12]))) + (arr_39 [i_12] [i_12]))))))));
        arr_41 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) 8983611918196820593LL)) ? (max((((/* implicit */unsigned int) arr_40 [i_12] [i_12])), (arr_39 [i_12] [i_12]))) : (min((arr_39 [i_12] [i_12]), (((/* implicit */unsigned int) arr_40 [i_12] [i_12]))))));
    }
    for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
    {
        arr_45 [16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_13] [i_13])) ? (((/* implicit */long long int) arr_39 [i_13] [i_13])) : (var_13)))) ? (((((/* implicit */int) (signed char)-98)) & (870510440))) : (((/* implicit */int) var_9))));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            var_32 = ((/* implicit */int) max((((/* implicit */short) var_5)), (var_2)));
            arr_48 [i_14] = ((/* implicit */int) ((max((((((((/* implicit */int) (short)-3)) + (2147483647))) >> (((((/* implicit */int) (short)23594)) - (23576))))), (((/* implicit */int) min(((_Bool)1), (arr_40 [i_13] [i_13])))))) != (((/* implicit */int) (unsigned short)16126))));
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned int) var_6)) : (var_1))))))) >> (((-1420939347) + (1420939368))))))));
        }
    }
    var_34 = ((/* implicit */unsigned char) var_13);
}
