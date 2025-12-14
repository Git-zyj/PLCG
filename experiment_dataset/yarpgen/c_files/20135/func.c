/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20135
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_2 [12LL] |= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (unsigned char)236))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) < (9ULL))))) : (var_7)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_17 &= ((/* implicit */unsigned short) arr_5 [(unsigned short)1] [i_1]);
            arr_6 [i_0] = ((/* implicit */long long int) (unsigned short)63983);
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned char)4))) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))));
                        arr_16 [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned char) ((signed char) ((8125597036682342183LL) <= (((/* implicit */long long int) var_9)))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((arr_7 [i_4] [i_3 - 1] [i_3 - 1]) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) arr_7 [i_4] [i_3] [i_3 + 1])))))));
                        }
                        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_21 -= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) var_14)) : (arr_17 [i_0 - 1] [(_Bool)1] [i_0 - 1] [i_2] [i_3 - 1] [i_4])));
                            arr_22 [i_0 + 1] [i_0] [i_3] [i_4] [12] = ((/* implicit */_Bool) arr_5 [i_0 - 1] [i_3 - 1]);
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (_Bool)1))))))));
                        }
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? ((-(arr_3 [i_2] [i_3] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 4; i_7 < 14; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) arr_7 [i_0] [i_2] [0]);
                            arr_25 [i_0 - 1] [i_0] [i_0 - 1] [i_0] = var_8;
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(signed char)7] [i_0 + 1] [(unsigned char)8] [i_0 + 1] [(signed char)7] [i_0])) ? (((/* implicit */int) (signed char)-31)) : (arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 - 1])));
                            var_26 = ((/* implicit */unsigned char) arr_9 [i_2] [(_Bool)1]);
                        }
                        for (long long int i_8 = 2; i_8 < 14; i_8 += 4) 
                        {
                            var_27 -= ((/* implicit */signed char) ((_Bool) -2334418930370780271LL));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_21 [i_0] [i_0])) ^ (var_9))) : (((((/* implicit */_Bool) (signed char)-19)) ? (arr_15 [10LL] [i_2] [i_2] [i_2]) : (((/* implicit */int) var_1))))));
                            arr_28 [i_0] [i_2] [i_3] [i_4] [i_8 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) 17ULL))));
                            var_29 = ((/* implicit */unsigned char) (short)-32765);
                            var_30 |= ((/* implicit */unsigned int) (unsigned char)150);
                        }
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((var_11) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((int) var_7))) : (arr_5 [i_0 + 1] [i_0 + 1]))))));
        }
    }
    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_10 = 2; i_10 < 23; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    {
                        var_32 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)60698)) ^ (((/* implicit */int) (unsigned char)146))))) : (8ULL));
                        var_33 = ((/* implicit */unsigned char) arr_33 [i_9] [0U]);
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) var_16))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            arr_42 [i_13] [i_10] [i_11] = ((/* implicit */unsigned int) -16LL);
                            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((unsigned short) var_2)))));
                            var_36 ^= ((((/* implicit */_Bool) arr_32 [i_10 - 2])) ? (arr_32 [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                        }
                        for (int i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_35 [i_10] [i_10 + 2] [i_10] [i_10]))));
                            arr_47 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)158), ((unsigned char)99)))) ? (((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */int) arr_35 [i_9] [19] [i_10 + 1] [i_10 - 1])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((var_9) < (((/* implicit */int) arr_35 [i_10] [i_10 + 1] [i_10 + 2] [i_10 + 2])))))));
                        }
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2334418930370780256LL)));
    }
    var_39 = ((/* implicit */unsigned char) ((unsigned short) var_4));
    var_40 = ((((/* implicit */_Bool) (unsigned char)255)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-31946)));
    /* LoopSeq 1 */
    for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_16 = 0; i_16 < 25; i_16 += 2) 
        {
            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) arr_40 [i_15] [i_16] [(unsigned char)7] [i_15 - 1] [(signed char)24]))));
            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_43 [i_16] [i_16] [i_15]))))) ? (arr_44 [i_15] [i_16] [i_15 + 3] [i_16] [i_15] [i_15 + 3] [(unsigned char)3]) : (((/* implicit */int) ((((/* implicit */long long int) var_7)) >= (var_0))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_17 = 1; i_17 < 24; i_17 += 2) 
        {
            var_43 = ((/* implicit */unsigned int) arr_29 [(unsigned short)15]);
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))));
        }
        var_45 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_48 [i_15] [i_15]))))) ? (3U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [i_15] [i_15] [i_15] [(unsigned char)0])))))))));
    }
}
