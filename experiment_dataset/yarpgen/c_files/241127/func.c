/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241127
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_1])))) != (((/* implicit */int) ((var_1) <= (((/* implicit */int) arr_6 [i_0]))))))));
                    arr_11 [i_2] = ((/* implicit */unsigned char) arr_0 [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) : (var_9)))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((unsigned short) var_1)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_17)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((_Bool) (unsigned short)240)))));
    /* LoopSeq 4 */
    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 3; i_4 < 21; i_4 += 3) 
        {
            arr_16 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((8677922352932077670ULL), (((/* implicit */unsigned long long int) (unsigned short)240))))) ? (((/* implicit */unsigned long long int) (-((-(arr_13 [(unsigned char)17])))))) : (((unsigned long long int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (signed char)96)))))));
            var_21 += ((/* implicit */long long int) ((unsigned char) 6745201157048487619ULL));
            arr_17 [i_4] [0] = ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */int) arr_15 [(unsigned char)13] [i_4] [13U])) - (((/* implicit */int) arr_15 [i_3 + 2] [i_4] [i_4])))) / (var_1))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 20; i_6 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [18] [i_4] [i_5]))) % (((unsigned int) arr_19 [i_3]))))) - (max((((arr_22 [i_3] [i_4] [i_5] [i_6] [i_5] [i_4]) << (((((/* implicit */int) (unsigned short)240)) - (240))))), (((/* implicit */long long int) arr_21 [i_3] [i_4] [3LL] [i_4]))))));
                        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [(unsigned short)18] [i_4] [(_Bool)1] [i_4])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (arr_12 [i_3 - 1] [i_4])));
                        var_24 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_12 [6LL] [(short)3])), (((((/* implicit */long long int) (-(((/* implicit */int) arr_20 [16U] [16U] [(unsigned char)20]))))) - (max((arr_13 [i_3]), (arr_23 [i_3] [i_5] [i_3] [i_3])))))));
                        arr_24 [i_3 + 1] [i_3 + 1] [i_4] = ((/* implicit */int) ((arr_12 [i_3 + 2] [18LL]) ^ (var_8)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
        {
            arr_28 [i_3] [i_3 - 1] [i_7 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7])) ? (((/* implicit */unsigned int) 1325582484)) : (arr_12 [i_3] [i_3])))) ? (6745201157048487619ULL) : (((/* implicit */unsigned long long int) (-(arr_22 [i_3 + 1] [i_3 + 1] [i_7] [i_7 + 1] [i_7] [i_7]))))));
            var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_13 [10U])) & (arr_19 [i_3])));
            arr_29 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_18 [i_3] [(signed char)16] [i_3]);
        }
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_3]))))) ? ((+(arr_22 [i_3] [i_3] [i_3] [i_3] [13LL] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 11701542916661063997ULL)))))), (((long long int) ((int) arr_21 [i_3] [(unsigned char)3] [i_3] [i_3])))));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3221739711U)))))))))));
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((6745201157048487618ULL), (((/* implicit */unsigned long long int) arr_26 [i_3])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_32 [i_3] [i_3] [i_8 + 1])))) > ((+(arr_26 [i_3]))))))) : (max((((/* implicit */unsigned long long int) arr_26 [i_8])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3] [i_8] [i_3 - 1]))) % (arr_19 [i_3])))))));
        }
        arr_34 [i_3] = ((/* implicit */unsigned short) 470611034759921200ULL);
        var_29 = ((/* implicit */_Bool) var_4);
        var_30 = ((/* implicit */unsigned long long int) arr_25 [i_3] [i_3] [i_3]);
    }
    for (int i_9 = 3; i_9 < 9; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            var_31 = min((((/* implicit */long long int) (+(var_6)))), (((((((/* implicit */int) arr_1 [i_10])) == (((/* implicit */int) arr_33 [i_9 - 2] [i_9 - 2])))) ? (max((((/* implicit */long long int) arr_15 [i_10] [i_10] [i_9 + 4])), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_9] [i_10] [i_10])) : (((/* implicit */int) (unsigned short)65530))))) ? (max((var_14), (((/* implicit */unsigned long long int) arr_8 [10U])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_9] [i_9])))))))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 2) 
            {
                arr_44 [i_11] &= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 11701542916661064003ULL)) && (((/* implicit */_Bool) arr_15 [i_9] [i_11] [i_11])))));
                var_33 = ((/* implicit */unsigned short) ((signed char) (+(((((/* implicit */int) arr_1 [i_9])) + (((/* implicit */int) (unsigned short)0)))))));
                var_34 = ((/* implicit */int) arr_19 [i_9]);
            }
        }
        arr_45 [i_9] = ((/* implicit */unsigned short) var_3);
        var_35 = ((long long int) ((unsigned short) (-(arr_40 [i_9] [6ULL] [i_9]))));
    }
    for (int i_12 = 3; i_12 < 9; i_12 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) arr_32 [i_12 - 3] [i_12 - 3] [i_12 - 3]))));
        arr_48 [i_12] = ((/* implicit */unsigned char) ((((int) (!(((/* implicit */_Bool) arr_32 [(unsigned short)19] [(unsigned short)19] [(unsigned short)19]))))) & (((/* implicit */int) ((((/* implicit */int) arr_7 [i_12] [(short)4] [i_12 + 2])) <= (((/* implicit */int) ((signed char) arr_46 [i_12] [i_12]))))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 4; i_13 < 16; i_13 += 4) 
    {
        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)223))))) : (((/* implicit */int) arr_27 [i_13])))))));
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_13])) ? (((/* implicit */int) arr_8 [i_13])) : (((/* implicit */int) arr_8 [i_13])))))));
    }
}
