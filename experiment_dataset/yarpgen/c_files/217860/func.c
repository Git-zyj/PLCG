/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217860
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */int) (~(min((((/* implicit */long long int) (unsigned char)27)), (min((((/* implicit */long long int) 2147483647)), (-5637700103786772643LL)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_19 ^= min((((/* implicit */long long int) min((max((343559604), (((/* implicit */int) (unsigned char)29)))), (((((/* implicit */int) arr_5 [i_1])) >> (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) - (53)))))))), ((+(max((0LL), (var_3))))));
            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) ((short) (short)-5698))) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))))), (((unsigned long long int) ((unsigned short) arr_5 [i_1])))));
        }
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) 2864927105U)) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_2] [10])))) : (((long long int) (unsigned char)172))));
        var_21 &= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_2] [i_2])) != (((/* implicit */int) arr_2 [i_2] [i_2]))));
        var_22 -= ((/* implicit */signed char) arr_0 [i_2]);
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 23; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 2; i_4 < 21; i_4 += 1) 
            {
                arr_14 [i_2] [12] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)8246)))) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) var_1))));
                var_23 = ((/* implicit */int) arr_4 [i_2] [i_3] [i_4]);
                var_24 ^= ((/* implicit */_Bool) var_8);
            }
            for (signed char i_5 = 3; i_5 < 20; i_5 += 1) 
            {
                arr_17 [i_3] [i_3] [i_3] [i_2] = arr_5 [i_3];
                var_25 = ((/* implicit */unsigned char) arr_8 [i_3] [i_5]);
            }
            var_26 ^= ((/* implicit */int) ((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_13 [20] [i_3 + 1]))))) == (((/* implicit */int) ((unsigned short) arr_8 [i_3] [i_2])))));
        }
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            for (short i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                {
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_1))));
                    arr_24 [i_2] [i_6] [i_7] = ((/* implicit */int) arr_23 [i_7]);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        var_28 = ((/* implicit */signed char) (-(((/* implicit */int) (short)562))));
        /* LoopSeq 2 */
        for (short i_9 = 3; i_9 < 10; i_9 += 1) 
        {
            arr_32 [(short)8] &= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) arr_30 [(unsigned char)2])), (arr_6 [i_9 - 2] [i_9 + 1]))));
            var_29 = ((/* implicit */_Bool) max((arr_6 [i_9 - 3] [i_9 - 3]), (((/* implicit */long long int) ((unsigned char) 0LL)))));
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_11 = 1; i_11 < 9; i_11 += 4) 
            {
                var_30 += ((((((((/* implicit */_Bool) 490166954)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) arr_0 [i_8])))) < ((+(343559604))))) ? ((-(((/* implicit */int) min((((/* implicit */short) arr_29 [i_11])), (arr_1 [i_11] [i_8])))))) : (arr_19 [11LL]));
                arr_40 [i_8] [i_10] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned char) var_8)), ((unsigned char)87))))) ? (((((/* implicit */_Bool) ((343559601) ^ (((/* implicit */int) arr_31 [i_8] [i_10] [i_11]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_11 + 1] [i_11 + 2] [i_11]))) : (((unsigned int) arr_1 [i_11] [i_8])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)24492), (((/* implicit */short) arr_0 [i_11 + 1]))))))))));
            }
            for (int i_12 = 1; i_12 < 10; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 1; i_13 < 9; i_13 += 4) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_49 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned char)46), (arr_23 [i_12 - 1])))) ? (((((/* implicit */_Bool) arr_35 [i_13] [i_13] [i_14 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((arr_48 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_13 + 1] [i_12] [i_10] [i_8]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_14 - 1])))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((347959681), (((/* implicit */int) (short)1536))))) ? (((((/* implicit */_Bool) arr_4 [i_13 + 1] [i_13 - 1] [i_12 + 2])) ? (((unsigned int) (short)32767)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_13 + 1] [i_14 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_8] [i_8])) ? (((/* implicit */int) arr_30 [i_8])) : (((/* implicit */int) arr_3 [i_8] [i_8]))))) ? (((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) (unsigned short)63999)) : (((/* implicit */int) (unsigned char)151)))) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_0))))))))));
                            var_32 = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
                arr_50 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */unsigned int) 547868561)) : ((~(arr_45 [i_12 + 2] [i_10]))))));
                arr_51 [i_8] = ((/* implicit */unsigned int) ((int) (short)-24495));
            }
            /* LoopSeq 1 */
            for (signed char i_15 = 2; i_15 < 10; i_15 += 2) 
            {
                arr_54 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_8])) ? (((/* implicit */int) arr_8 [i_8] [i_10])) : (((/* implicit */int) min((((short) (short)-32192)), (((/* implicit */short) arr_29 [i_15])))))));
                arr_55 [i_8] [i_15] [i_10] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)24)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-4)), (arr_31 [i_8] [i_10] [i_8])))) : (min((((/* implicit */int) var_1)), (-1889690721)))))) ? (min((((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_15 - 2] [i_10] [i_10])) || ((_Bool)1)))), (((((/* implicit */_Bool) arr_20 [i_8] [i_10] [15LL])) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned char)178)))))) : (min((((/* implicit */int) (unsigned char)17)), ((-(((/* implicit */int) arr_52 [i_8]))))))));
            }
            arr_56 [i_8] [(unsigned short)0] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_45 [i_8] [i_10])) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_34 [0] [i_10])) ? (arr_26 [i_8]) : (((/* implicit */int) arr_39 [i_10] [i_8])))))) << (((((/* implicit */int) var_10)) - (10043)))));
            arr_57 [(signed char)8] &= ((/* implicit */unsigned char) ((((/* implicit */int) (short)20633)) != (((/* implicit */int) (_Bool)1))));
        }
        var_33 -= var_17;
    }
    var_34 ^= ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (unsigned char)253))))), ((-(((/* implicit */int) (unsigned char)32))))));
}
