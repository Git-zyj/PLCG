/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32407
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 24U)) ? (24U) : (858754460U)))) ? (858754461U) : (((/* implicit */unsigned int) var_11)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1] [i_3])) + ((+(((/* implicit */int) (signed char)-111)))))))));
                        arr_9 [i_0] [i_0] [i_0] [i_3] [i_1] [i_2] = ((/* implicit */unsigned char) ((long long int) 4294967290U));
                        arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) (short)-6871))));
                        var_19 ^= ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) 4294967271U)));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned char) arr_5 [i_0] [i_0] [i_1])))));
                    }
                } 
            } 
        }
        var_21 *= ((/* implicit */short) 858754471U);
        arr_11 [i_0] = ((short) 11389522731839832701ULL);
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) (signed char)-105)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 2) 
    {
        var_23 += ((/* implicit */unsigned int) arr_12 [i_4]);
        arr_14 [i_4] = ((unsigned short) (signed char)112);
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (short i_6 = 1; i_6 < 9; i_6 += 1) 
        {
            {
                arr_19 [i_5] = 7408225045556094256ULL;
                var_24 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_6 [i_6 - 1] [i_6 - 1]))) * ((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) 858754460U);
    var_26 = ((/* implicit */short) (unsigned short)5246);
    /* LoopNest 2 */
    for (short i_7 = 4; i_7 < 20; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    arr_26 [i_7] [i_8] [i_9] = ((arr_1 [i_9] [i_8]) ? (((var_1) ? (((((/* implicit */_Bool) (unsigned short)60289)) ? (arr_3 [i_7 - 3] [i_7] [i_7]) : (((/* implicit */unsigned long long int) 4294967271U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2602780781U)) ? (var_11) : (((/* implicit */int) (short)-1))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)60)), (((((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_8] [i_9] [i_7])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [7ULL] [i_7] [i_8] [i_9] [i_9])))))))));
                    arr_27 [i_7] [i_7] [i_8] [i_8] &= ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)-16384)), ((unsigned short)28732))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18158513697557839872ULL)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)16394))) ^ (var_15))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)77)), ((unsigned short)1)))))))));
                    var_27 = ((/* implicit */unsigned long long int) max((((_Bool) ((((/* implicit */int) (unsigned char)19)) < (((/* implicit */int) arr_6 [i_9] [i_7 - 3]))))), (arr_2 [i_9] [i_7] [i_7])));
                    arr_28 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (unsigned char)224)), (arr_23 [i_7]))) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)65530)) < (((/* implicit */int) arr_2 [i_7] [i_8] [i_9])))))))) ? (((/* implicit */int) arr_2 [i_7] [i_7] [i_7 - 4])) : (((/* implicit */int) ((unsigned char) 4063652851U)))));
                    var_28 ^= ((/* implicit */short) arr_22 [i_8] [i_7]);
                }
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_12 = 1; i_12 < 20; i_12 += 2) 
                            {
                                arr_37 [i_7 - 3] [i_7] [i_8] [i_7] [i_11] [i_12 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */unsigned int) -1242431183)) : (arr_23 [i_7]))) << (((((/* implicit */int) max((((/* implicit */short) (unsigned char)93)), ((short)16394)))) - (16379)))))) ? (((/* implicit */int) ((short) min((((/* implicit */int) (short)-30567)), (var_16))))) : (((((/* implicit */int) max((var_14), (((/* implicit */unsigned short) arr_34 [i_7] [i_7 + 1] [i_8] [i_10] [i_10] [i_11] [i_10]))))) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_11] [i_8] [i_8])), ((unsigned short)50537))))))));
                                arr_38 [i_7] [i_8] [i_10] [i_10] [i_12] = ((/* implicit */short) max((((((_Bool) 858754461U)) ? (((((/* implicit */_Bool) arr_23 [i_10])) ? (((/* implicit */unsigned int) 47023528)) : (3436212835U))) : (min((((/* implicit */unsigned int) (unsigned short)32423)), (var_2))))), (((/* implicit */unsigned int) (unsigned char)178))));
                                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((unsigned int) ((3U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_7] [i_8] [i_10] [i_11] [i_12])))))) != (((/* implicit */unsigned int) var_4)))))));
                                arr_39 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) ((short) 2760483105U)))));
                            }
                            for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                            {
                                arr_42 [i_7] [i_7] [i_8] [i_8] [i_10] [i_11] [i_13] = ((/* implicit */unsigned char) (short)-30567);
                                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_1 [i_11] [i_13])) << (((var_10) - (2068666009U)))))))) || (((/* implicit */_Bool) (short)-24367)))))));
                            }
                            var_31 = (short)24363;
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * ((~(arr_30 [i_7 + 2] [i_8])))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)178))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_34 [i_7] [i_8] [i_7] [i_7] [i_7] [i_7] [i_7 - 4])), (var_0)))) : (((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24370))) : (var_13))))))))));
                var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)0), (((/* implicit */short) max((((/* implicit */unsigned char) var_1)), ((unsigned char)174))))))) ? (((/* implicit */int) ((short) (unsigned short)65530))) : ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5386))) != (13651816340376857639ULL))))))));
            }
        } 
    } 
}
