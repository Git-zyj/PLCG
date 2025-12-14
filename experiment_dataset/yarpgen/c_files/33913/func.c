/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33913
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
    var_11 = ((/* implicit */int) ((((((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_3))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))) != (((/* implicit */long long int) ((/* implicit */int) (((+(var_3))) != (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (2583916302310854LL)))))))));
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((17743199456777836053ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_9) == (var_10)))) >= (((/* implicit */int) ((unsigned char) var_1))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = -524547254;
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) arr_4 [i_0] [i_1])) : (arr_0 [i_0] [i_0])));
                var_14 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            arr_17 [(_Bool)1] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_9)))) ? (arr_16 [i_4 - 1] [i_4] [i_4] [(unsigned char)4]) : (((/* implicit */unsigned long long int) arr_9 [i_1]))));
                            var_15 = ((/* implicit */unsigned char) var_5);
                        }
                        for (signed char i_6 = 3; i_6 < 23; i_6 += 2) 
                        {
                            var_16 = arr_7 [i_0] [17] [(unsigned short)8] [(unsigned short)8];
                            var_17 = ((/* implicit */int) var_2);
                            var_18 = ((/* implicit */_Bool) ((int) var_0));
                        }
                        arr_20 [(unsigned char)8] [i_1] [18ULL] [i_1] = ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_18 [i_4 - 1] [i_4 - 1]))));
                        var_19 ^= ((/* implicit */unsigned char) (+(var_3)));
                        arr_21 [(unsigned char)18] [i_0] [23ULL] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) arr_16 [i_0] [i_4 - 1] [i_3] [i_4]));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 2; i_7 < 24; i_7 += 2) 
                        {
                            arr_26 [(signed char)23] [i_4] [18] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_1)) >= (703544616931715545ULL)));
                            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_7 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_25 [i_7] [i_7 - 1] [i_7 + 1] [i_7] [i_7])) : ((~(((/* implicit */int) (_Bool)1))))));
                        }
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)126))));
        }
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            var_22 &= ((/* implicit */unsigned long long int) ((arr_11 [(signed char)20] [16LL] [(unsigned short)1] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)13)) >= (((/* implicit */int) arr_18 [i_0] [(_Bool)1]))))))));
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 22; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_23 += ((/* implicit */unsigned long long int) ((var_5) / ((+(((/* implicit */int) arr_25 [i_0] [i_8] [i_9] [i_10 - 1] [i_11]))))));
                            arr_37 [i_0] [i_8] [(unsigned short)20] [14ULL] [i_8] [14ULL] [i_0] = ((((/* implicit */int) ((17743199456777836070ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_8] [i_8])))))) * (((/* implicit */int) (signed char)48)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_12 = 1; i_12 < 21; i_12 += 2) 
                {
                    var_24 = ((/* implicit */signed char) (+(arr_27 [i_12 - 1])));
                    var_25 = ((/* implicit */long long int) ((unsigned char) var_6));
                    var_26 = ((/* implicit */unsigned long long int) var_4);
                }
            }
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1572985376)) ? (((((/* implicit */_Bool) 6941702214030247926LL)) ? (((/* implicit */int) arr_31 [i_8] [i_0] [i_0])) : (var_1))) : (((((/* implicit */int) (_Bool)1)) >> (0ULL))))))));
            var_28 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_35 [16LL] [i_8]))));
        }
        for (short i_13 = 3; i_13 < 23; i_13 += 2) 
        {
            var_29 = (unsigned short)38323;
            /* LoopSeq 1 */
            for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    for (unsigned int i_16 = 1; i_16 < 23; i_16 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((int) (-(var_3))));
                            var_31 += ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_6)))));
                            var_32 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)115)) - (var_1)))) ^ (arr_41 [i_0] [i_13 - 3] [i_14 + 1])));
                            arr_49 [i_15] [i_15] [22ULL] [i_15] [i_13] = arr_32 [i_0] [i_13] [(unsigned short)5] [19ULL] [i_16] [i_16 + 2];
                        }
                    } 
                } 
                var_33 = ((((/* implicit */_Bool) arr_40 [i_13 + 2] [i_13] [i_14 - 1])) ? (arr_40 [i_13 + 2] [i_14] [i_14 + 3]) : (arr_40 [i_13 + 1] [(signed char)16] [i_14 + 1]));
            }
            var_34 *= ((/* implicit */unsigned char) ((signed char) (unsigned char)204));
        }
        arr_50 [i_0] [i_0] = ((/* implicit */int) arr_11 [(_Bool)1] [i_0] [i_0] [i_0]);
        var_35 = ((/* implicit */short) var_3);
    }
}
