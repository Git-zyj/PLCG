/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230257
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) var_6))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_11 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) * (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0))))))) && (((((/* implicit */_Bool) min((arr_0 [i_0]), ((signed char)-5)))) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [7LL] [i_2] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) arr_6 [i_2] [i_1] [(unsigned short)22]))))) : (((/* implicit */int) min((arr_6 [i_0] [(_Bool)1] [i_2]), (arr_6 [i_0] [i_1] [i_2]))))));
                    arr_11 [i_0] [8] [i_0] [i_2] = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)7)))))) * ((~(((/* implicit */int) arr_0 [i_0]))))));
                    arr_12 [i_0] [i_0] = ((/* implicit */short) min((((((((/* implicit */int) (signed char)-4)) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [(unsigned char)17])) + (1623))))), (((/* implicit */int) (unsigned short)29156))));
                }
            } 
        } 
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4)))))))))));
        var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [(unsigned short)13] [i_0]), (((/* implicit */unsigned long long int) (signed char)17))))) && (((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (signed char)-5)))))))), (((unsigned long long int) min((arr_2 [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                {
                    arr_20 [i_5] [i_4] [i_5] = ((/* implicit */signed char) ((short) ((((/* implicit */int) (signed char)-84)) * (((/* implicit */int) (signed char)-21)))));
                    arr_21 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-13)) < (((/* implicit */int) (unsigned short)29164)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_9 [(short)1] [6ULL] [i_5] [i_4])))))) / (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)12)), (arr_16 [i_4] [i_5])))) || (((/* implicit */_Bool) arr_16 [i_4] [i_4])))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((((/* implicit */_Bool) 15680953892884872194ULL)) ? (((/* implicit */int) (unsigned short)29149)) : (arr_19 [i_5 + 3] [i_3])))))) ? (((/* implicit */int) ((unsigned short) ((unsigned int) (_Bool)1)))) : (min((((((/* implicit */int) (unsigned short)29156)) + (618365821))), (((/* implicit */int) ((((/* implicit */int) (signed char)35)) >= (((/* implicit */int) (unsigned char)4)))))))));
                        var_15 = ((/* implicit */unsigned long long int) (-(min((min((((/* implicit */long long int) (signed char)72)), (-7457436061427181643LL))), (((/* implicit */long long int) ((unsigned short) (signed char)5)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_8 = 4; i_8 < 16; i_8 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 2] [i_8 + 1])) ? (((/* implicit */int) ((signed char) 17133010394518210952ULL))) : (((/* implicit */int) arr_23 [i_3 - 1] [i_8] [i_5] [i_7] [i_8 + 2])))))));
                            var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_7] [i_8 + 2] [i_5] [i_4] [i_5 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_27 [i_5 + 2] [i_5 - 1] [i_5 + 4] [i_8])) : ((~(((/* implicit */int) (_Bool)1))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_18 = ((/* implicit */short) 2594113411281307083LL);
                            var_19 = var_5;
                            arr_31 [i_5] [(_Bool)1] [i_5 + 4] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_3] [i_3 + 1] [i_3 + 1] [i_5 + 3])) < (((/* implicit */int) arr_2 [i_3] [i_3 + 1]))));
                            arr_32 [i_7] [i_4] [(unsigned short)4] [i_7] &= ((/* implicit */signed char) arr_19 [i_5 + 2] [i_3 + 1]);
                            var_20 = ((/* implicit */unsigned short) arr_4 [i_3]);
                        }
                        var_21 = ((/* implicit */long long int) (unsigned short)65528);
                        var_22 = ((/* implicit */unsigned long long int) arr_13 [i_5 + 4]);
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        arr_35 [i_3] [i_5] [i_5 + 1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) arr_8 [i_10] [i_5 + 2] [i_3 - 1] [i_3]))));
                        arr_36 [i_10] [i_4] [7U] [i_5] [17LL] = ((/* implicit */signed char) (((((_Bool)1) ? (var_4) : (((/* implicit */int) (unsigned char)109)))) != (((((/* implicit */int) arr_2 [i_3 + 1] [i_3])) / (((/* implicit */int) var_6))))));
                    }
                    /* vectorizable */
                    for (short i_11 = 4; i_11 < 16; i_11 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_38 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])) / (arr_30 [i_3] [i_4] [i_4] [i_5 + 2] [i_11]))) << (((((((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_37 [i_5] [i_5] [i_5] [i_11])))) - (65301)))));
                        arr_40 [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (arr_16 [17LL] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3 - 1] [i_5] [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) var_2);
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    {
                        arr_49 [i_12] [i_14] [i_13] [i_12] [i_12] = ((/* implicit */_Bool) (+(((((1701870958U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3]))))) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_3] [i_12] [(signed char)10] [i_12])))))))));
                        arr_50 [i_12] [i_12] [i_3] [(short)14] = ((/* implicit */signed char) 2593096329U);
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (unsigned char)80))))) - (((((/* implicit */int) (unsigned char)108)) | (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */int) (signed char)117)), (var_8)))))));
}
