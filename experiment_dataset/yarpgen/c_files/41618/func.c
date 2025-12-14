/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41618
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)15716);
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((var_12), (((/* implicit */unsigned char) ((signed char) ((_Bool) (unsigned short)44693))))));
        }
        var_17 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (908835619)));
        var_18 = ((/* implicit */long long int) max(((unsigned short)44693), (((/* implicit */unsigned short) (short)6923))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) var_13);
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) / ((-(((/* implicit */int) (short)17148))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_5])) : (((/* implicit */int) (signed char)77))));
                            var_22 = ((/* implicit */unsigned short) var_6);
                            var_23 = ((/* implicit */unsigned long long int) var_16);
                            arr_19 [i_0] [i_2] [i_3] [(short)0] [i_4] [i_5] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (unsigned short)37750)) : (((/* implicit */int) (short)-22923)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */int) (signed char)-61);
                            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((1099511627775LL), (((/* implicit */long long int) arr_9 [i_0] [i_2] [i_6])))), (((/* implicit */long long int) (unsigned short)20858)))))));
                        }
                        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_26 += ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)12)), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_7] [i_2] [i_2]))))) : (((((/* implicit */_Bool) (unsigned short)44693)) ? (16383LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-81)))))));
                            arr_24 [i_0] [i_2] [i_3] [(_Bool)1] [i_7] [15ULL] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) + (2147483647))) << (((((/* implicit */int) ((unsigned short) 17107314878094697183ULL))) - (58079)))));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_12 [i_8 + 2] [i_8 + 3] [i_8] [i_8])) : (((/* implicit */int) (unsigned short)27793)))) + (2147483647))) << (((max((((/* implicit */int) arr_26 [i_8 + 3] [i_8 - 1] [(_Bool)1])), (((((/* implicit */_Bool) (signed char)-81)) ? (-1968003602) : (((/* implicit */int) (unsigned short)0)))))) - (61870)))));
                            var_28 ^= ((/* implicit */unsigned int) (unsigned short)13);
                            arr_36 [i_0] [i_0] [i_8] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */_Bool) 418030845U);
                            var_29 = ((/* implicit */_Bool) (unsigned short)2138);
                        }
                        for (int i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                        {
                            var_30 = ((418030831U) << (((var_7) - (1071421502U))));
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_26 [i_0] [i_8 - 1] [(signed char)6])) << (2))) << (((((/* implicit */int) (signed char)61)) - (60))))))));
                            var_32 |= ((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((int) -19LL))), (max((17107314878094697196ULL), (((/* implicit */unsigned long long int) (signed char)-81)))))), (((/* implicit */unsigned long long int) ((short) max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)62))))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            arr_45 [i_0] [i_10] = ((/* implicit */int) arr_40 [i_10] [i_10] [i_10]);
                            var_33 = ((/* implicit */unsigned char) 16402LL);
                            var_34 = ((/* implicit */unsigned long long int) (signed char)-31);
                            arr_46 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */int) (unsigned char)63);
                        }
                        arr_47 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)32743))))) + ((+(((((-16384LL) + (9223372036854775807LL))) << (((/* implicit */int) (unsigned char)0))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                for (long long int i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    {
                        var_35 = ((/* implicit */short) ((int) ((unsigned long long int) (unsigned short)2)));
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_15] [i_8] [i_8] [i_14] [i_8] [i_8] [i_8])) << (((((/* implicit */int) arr_38 [i_15] [i_14] [15ULL] [i_8] [i_0])) - (200))))))));
                    }
                } 
            } 
        }
    }
    var_37 = ((/* implicit */unsigned long long int) 9);
}
