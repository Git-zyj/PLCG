/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206687
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_0))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1176369748)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)10))))) ? ((-(-2147483632))) : (((int) (unsigned short)8671))));
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (var_9) : (var_6)))) ? (arr_4 [i_0]) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (427301939) : (((/* implicit */int) var_5)))));
            var_14 = ((/* implicit */signed char) (+(arr_5 [i_0] [i_1 + 1] [i_1])));
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((((/* implicit */_Bool) 310947500)) ? (arr_5 [i_2] [(short)18] [i_0]) : (((/* implicit */long long int) arr_4 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((-2147483613) != (var_10))))))))));
            arr_10 [i_2] = (-(((/* implicit */int) arr_6 [i_0])));
            var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_4)));
            arr_11 [5LL] [i_2] [i_2] = ((/* implicit */unsigned short) arr_0 [i_0]);
        }
        for (long long int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
        {
            var_17 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)87)) > (-344184496)))) : (-2147483603));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) (signed char)-85)) > (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [22LL] [i_3] [i_3])))))))));
            var_19 += ((/* implicit */unsigned short) arr_4 [i_0]);
            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_0 [i_0])))))));
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
        {
            var_21 *= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [(signed char)2])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) (signed char)127)))));
            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [22LL])) ? (((/* implicit */int) (unsigned short)15656)) : (((/* implicit */int) (signed char)10))))) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) var_11)))));
        }
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) -344184500))));
    }
    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_6 = 3; i_6 < 16; i_6 += 1) 
        {
            arr_26 [i_5] [i_6 - 1] [1ULL] = ((/* implicit */_Bool) var_8);
            arr_27 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)175)) != (((/* implicit */int) arr_21 [i_6])))));
            var_24 = ((/* implicit */int) ((signed char) var_4));
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_12 [i_6] [i_5] [i_5])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5] [i_6 + 1]))))) : (((/* implicit */long long int) arr_7 [i_6 + 3]))));
            arr_28 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_6] [i_6 - 3] [i_6 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6 + 2])))))) : (((((/* implicit */_Bool) (unsigned char)150)) ? (arr_23 [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-67)))))));
        }
        for (int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            var_26 *= ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) -427301950)) ? (-310947510) : (((/* implicit */int) (signed char)(-127 - 1))))) == (((/* implicit */int) var_8))))) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_17 [i_5] [i_5] [i_7])) : (((/* implicit */int) arr_20 [(unsigned short)14] [i_7]))))));
            var_27 = ((/* implicit */long long int) min((var_27), (((min((var_9), (((/* implicit */long long int) arr_8 [i_5])))) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_8])) && (((/* implicit */_Bool) arr_7 [i_5]))));
            arr_37 [i_5] [i_8] [(short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -973045099)) ? (344184521) : (((/* implicit */int) (unsigned char)255))))) ? (arr_16 [i_5] [i_8]) : (((((/* implicit */_Bool) arr_34 [i_5] [i_8] [i_8])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_8] [4ULL] [(short)12])))))));
            var_29 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) && (((/* implicit */_Bool) -327239731)))))));
            var_30 = ((/* implicit */unsigned short) arr_35 [(signed char)13] [i_8]);
        }
        for (signed char i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
        {
            var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_5])) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -327239713)) && (((/* implicit */_Bool) (unsigned short)54519))))) >= (((((/* implicit */_Bool) 274877841408LL)) ? (((/* implicit */int) var_8)) : (310947507)))))) : (((/* implicit */int) min((arr_14 [i_5] [i_9] [i_9]), (((/* implicit */short) arr_30 [11LL] [i_9] [i_9])))))));
            /* LoopSeq 1 */
            for (unsigned char i_10 = 1; i_10 < 16; i_10 += 3) 
            {
                arr_44 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_10 + 3])), (arr_24 [i_10 + 1] [i_10 + 1] [i_10])));
                var_32 = ((((/* implicit */int) min((arr_14 [i_5] [(short)0] [i_10 + 1]), (((/* implicit */short) var_12))))) - (((/* implicit */int) min((arr_14 [i_5] [(short)12] [i_10 - 1]), (arr_14 [(short)13] [(unsigned short)5] [i_10 + 3])))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 4; i_11 < 18; i_11 += 2) 
                {
                    for (short i_12 = 1; i_12 < 17; i_12 += 1) 
                    {
                        {
                            arr_49 [(short)4] [(short)4] [i_10] [i_11] [i_12] [i_10] [i_5] = ((/* implicit */short) ((((_Bool) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_12 + 2] [i_11] [i_10])))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)56836)) : (((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) (+(arr_9 [i_9])))) : (((((/* implicit */unsigned long long int) 1045886506231729570LL)) ^ (15921836362658071333ULL)))))));
                            var_33 ^= ((/* implicit */signed char) arr_38 [i_5]);
                            arr_50 [i_5] = ((/* implicit */long long int) arr_48 [i_5] [i_9] [i_9] [(signed char)0] [i_10] [i_11] [(unsigned char)5]);
                        }
                    } 
                } 
            }
        }
        var_34 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_5])) ? ((-(var_9))) : (min((arr_18 [(short)9]), (var_9))))) / (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5] [(signed char)7] [i_5])) | (((/* implicit */int) arr_12 [i_5] [(signed char)11] [16LL])))))));
        var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) | (var_2))), (((/* implicit */unsigned long long int) arr_6 [i_5])))))));
    }
    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (var_4)));
}
