/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240041
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) (short)-21248)))))) == (min(((~(arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65511)))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 -= ((/* implicit */short) arr_9 [i_3] [i_1] [(unsigned short)1]);
                                arr_15 [i_0] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) max(((unsigned short)3), ((unsigned short)65525))))))));
                                arr_16 [i_0] [i_2] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)234))))))) ? (max(((-(((/* implicit */int) arr_4 [i_3] [i_3] [i_4])))), (min((-888558835), (((/* implicit */int) (unsigned char)56)))))) : ((+(((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (1535378) : (((/* implicit */int) (unsigned short)10))))) : ((~(arr_5 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)30))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)209);
                                arr_24 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (unsigned short)65515);
                                var_20 ^= ((/* implicit */unsigned int) arr_19 [i_2] [10ULL] [i_5] [i_2]);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                            {
                                arr_33 [7] [i_0] [7] [i_9] [7] [i_9] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)65535);
                                var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) var_3))))));
                                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_13))));
                            }
                            arr_34 [i_0] [(unsigned char)2] [i_7] [0] [0] = ((/* implicit */signed char) (unsigned short)17);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
                        {
                            {
                                arr_44 [i_0] [i_10] [i_1] [14ULL] [i_10] [i_11] [i_12] &= ((/* implicit */unsigned char) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) != (8623702082009652995ULL))) ? (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (var_3))))) : (-773929140102047462LL)))));
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0] [i_10] [i_10]))));
                                arr_45 [i_0] [(unsigned short)4] [i_1] [i_10] [(short)4] [(short)4] |= ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_12), (arr_22 [i_0] [16LL] [16LL] [i_10] [i_12]))))))) <= (((((/* implicit */int) arr_41 [(_Bool)1] [(unsigned char)16] [(unsigned char)16] [i_10] [i_12])) / ((-(((/* implicit */int) arr_42 [i_1] [i_11] [i_10] [i_1] [i_0]))))))));
                                arr_46 [i_0] [15ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 15596110770919110514ULL))) ? ((+(((((/* implicit */long long int) ((/* implicit */int) var_5))) * (-773929140102047476LL))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
                {
                    var_24 = ((/* implicit */short) (!((_Bool)1)));
                    arr_49 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13)) * (((/* implicit */int) (short)1571))));
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
                    {
                        var_25 -= ((/* implicit */_Bool) var_14);
                        arr_52 [0ULL] [0ULL] [i_0] [(unsigned char)11] [9LL] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            var_26 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_55 [8ULL] [i_0] [i_1] [i_0] [i_13] [i_15] [i_15])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (10772412903912494499ULL)));
                            arr_56 [5ULL] [i_0] [i_13] = ((/* implicit */unsigned char) (unsigned short)17);
                            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_13])) && (((/* implicit */_Bool) arr_14 [i_13] [i_13]))));
                            var_28 = ((/* implicit */unsigned long long int) 0LL);
                            var_29 ^= ((/* implicit */short) (signed char)2);
                        }
                    }
                    for (int i_16 = 0; i_16 < 18; i_16 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            arr_62 [i_16] [i_17] [i_0] |= ((((/* implicit */int) (unsigned char)52)) | (((/* implicit */int) arr_42 [i_0] [i_1] [i_13] [i_16] [i_17])));
                            var_30 = (-(((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_0] [i_0])));
                            arr_63 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (unsigned short)96)))));
                        }
                        var_31 ^= ((/* implicit */short) 12617218836588041065ULL);
                    }
                }
            }
        } 
    } 
    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_12))))))) > (((max((7750467596429021979ULL), (((/* implicit */unsigned long long int) var_14)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) (signed char)26))))))))))));
}
