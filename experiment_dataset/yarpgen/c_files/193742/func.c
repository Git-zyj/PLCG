/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193742
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
    var_12 = var_6;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_13 = (-((~(5557101876524184555LL))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            var_14 |= ((/* implicit */unsigned char) min((5557101876524184555LL), (((/* implicit */long long int) (~(arr_1 [i_0]))))));
                            var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (arr_9 [i_0] [i_0] [i_3])))) ? (((((/* implicit */_Bool) 5557101876524184555LL)) ? (((/* implicit */int) (unsigned char)198)) : (-1375791397))) : (((((/* implicit */_Bool) arr_9 [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [13] [13] [i_2] [10U] [i_3] [i_0]))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            {
                                var_16 -= ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4]);
                                var_17 = ((/* implicit */unsigned int) arr_11 [i_0] [(unsigned short)4] [i_4] [i_5 + 1] [(unsigned short)11] [i_0]);
                                arr_20 [11ULL] [i_1] [i_1] [i_1] [i_1] [i_0] = max((((/* implicit */unsigned int) (_Bool)0)), (1351088060U));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (int i_8 = 2; i_8 < 23; i_8 += 4) 
                    {
                        {
                            arr_25 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_14 [i_8] [i_0] [i_8 - 2]), (arr_14 [i_8] [i_0] [i_8 - 2])))) ? ((~(((/* implicit */int) arr_14 [i_8 + 1] [i_0] [i_8 + 1])))) : (((/* implicit */int) ((signed char) arr_14 [i_8] [i_0] [i_8 - 2])))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                            {
                                var_18 ^= ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_10) : (-1609759580))) << (((((((/* implicit */int) arr_14 [i_8 + 1] [i_8] [i_8 + 1])) + (86))) - (24))));
                                var_19 = ((/* implicit */long long int) arr_21 [i_0] [i_0]);
                            }
                            for (unsigned char i_10 = 1; i_10 < 24; i_10 += 1) 
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0] [20] [i_0] = ((/* implicit */unsigned short) arr_14 [i_8 + 1] [i_0] [i_8 + 2]);
                                var_20 = ((/* implicit */int) min((var_20), (arr_9 [i_0] [i_7] [i_7])));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_10 - 1])) ? (arr_6 [i_1]) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_0] [i_8 - 2] [i_8 - 2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15808)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [i_0] [i_7])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_0] [i_10] [i_10])) && (((/* implicit */_Bool) arr_12 [i_8] [i_10])))))) : (arr_7 [i_0] [i_1] [i_8 - 2] [(unsigned char)4]))) : (min((0U), (((/* implicit */unsigned int) ((unsigned char) var_5)))))));
                                arr_31 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [(unsigned short)9] [i_1] [i_0])) ? (((((/* implicit */_Bool) arr_16 [i_7] [i_1] [i_7] [i_8 + 2] [i_1] [i_10])) ? (arr_24 [i_10 - 1] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) arr_6 [(short)0])))) : (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((short) arr_29 [i_10 + 1] [i_1] [i_7] [(signed char)23] [i_10] [i_8 + 2])))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned char i_11 = 1; i_11 < 22; i_11 += 1) 
                            {
                                var_22 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 10507418857119451837ULL)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (unsigned char)15))))));
                                var_23 |= ((/* implicit */long long int) (+(((/* implicit */int) min((arr_22 [i_8 - 1] [i_8 - 2] [i_7]), (arr_22 [i_8 + 1] [i_8 + 1] [i_8]))))));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) (_Bool)1))))) ? (arr_34 [i_8 - 1] [i_8 - 2] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11]) : (((/* implicit */long long int) (-(1351088060U))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_0] [i_8] [i_0])))) : (((/* implicit */int) arr_15 [i_0] [i_8] [i_0]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            {
                arr_40 [i_12] [i_12] = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_13] [(_Bool)1])) ? (((/* implicit */int) (short)16249)) : (((/* implicit */int) arr_0 [i_12] [i_12]))))) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_32 [(signed char)22] [(signed char)22] [i_13] [(signed char)22] [i_12] [i_13])), (arr_33 [i_12] [i_12] [i_12] [i_12] [i_12]))))));
                var_25 ^= ((/* implicit */long long int) min((min((((/* implicit */int) arr_15 [i_12] [0U] [i_13])), ((+(((/* implicit */int) var_3)))))), (((/* implicit */int) ((signed char) arr_21 [i_12] [i_13])))));
            }
        } 
    } 
    var_26 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_11)) : ((-(((/* implicit */int) (short)-16250)))))), (var_1)));
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (var_10)))) ? (((/* implicit */int) var_9)) : (var_0)))) ? (var_10) : (var_0)));
}
