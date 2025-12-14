/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229476
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_18 *= (!(((((/* implicit */_Bool) 3483910471U)) || (((((/* implicit */_Bool) (unsigned char)214)) || (((/* implicit */_Bool) 15417112316833630841ULL)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((var_8) << (((((/* implicit */int) (unsigned short)58475)) - (58458))))));
            var_19 = (unsigned short)58475;
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            arr_18 [i_0] [(unsigned char)2] [(unsigned short)0] [i_4] [i_4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) arr_3 [i_5] [i_2])) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)62))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [(unsigned char)0] [i_2] = ((/* implicit */short) max((((/* implicit */int) (short)28873)), (((((/* implicit */int) arr_8 [i_0] [i_2] [i_3] [i_4])) & (((/* implicit */int) (unsigned char)80))))));
                        }
                    } 
                } 
            } 
            var_20 += ((/* implicit */long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_2]))))) << (((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-27261)))))) / (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_4 [5ULL]))))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (unsigned char)134))));
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)80)) >> (((/* implicit */int) (_Bool)1)))))));
                    arr_25 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-28858)) * (((((/* implicit */_Bool) 14226507327770803473ULL)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_10 [(short)9] [i_2] [(_Bool)1] [2U])) : (((/* implicit */int) arr_22 [i_2] [(_Bool)1]))))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), ((unsigned char)22)));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                    {
                        arr_30 [i_0] |= ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) arr_21 [i_0] [i_2] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) != ((-(17192875747911383383ULL))))))));
                        var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)255)), (var_5)))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) | (17192875747911383383ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9282)))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) min((0ULL), (1253868325798168220ULL)));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) max((((((/* implicit */_Bool) 14766321333663342876ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10)))), (min((((/* implicit */int) arr_3 [i_0] [i_0])), ((-(((/* implicit */int) (_Bool)1)))))))))));
                    }
                }
                for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    var_27 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_32 [i_10] [i_2] [(signed char)4] [i_2] [(signed char)4])), (max((((/* implicit */unsigned short) (short)28873)), ((unsigned short)41122)))));
                    var_28 = ((/* implicit */_Bool) (short)-28874);
                    var_29 = ((/* implicit */_Bool) var_5);
                    arr_36 [i_0] [i_2] [i_6] [i_10] = ((/* implicit */_Bool) 17832157598298858727ULL);
                    var_30 *= ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)30259), ((unsigned short)53591))))) * (14766321333663342876ULL)))));
                }
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-124))))) : (min((min((1253868325798168220ULL), (((/* implicit */unsigned long long int) arr_35 [i_0] [i_0])))), (((/* implicit */unsigned long long int) (unsigned char)255))))));
            }
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_12 = 4; i_12 < 8; i_12 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_38 [i_0] [i_12 + 2]))));
                    arr_42 [i_2] [(unsigned short)5] = ((/* implicit */short) (~(arr_15 [i_12 - 3] [2LL] [i_2] [2LL] [i_2] [i_2])));
                    var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_0]))));
                }
                arr_43 [i_2] = ((/* implicit */unsigned char) var_11);
                var_34 ^= ((/* implicit */unsigned short) (short)-4471);
            }
        }
        arr_44 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) arr_12 [8LL] [i_0]))));
    }
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 3) 
                    {
                        {
                            arr_58 [10U] [i_14] [i_15] [i_16] [i_15] [10U] = ((/* implicit */unsigned char) (+((-((-(arr_50 [i_15])))))));
                            arr_59 [i_13] [i_14] [i_15] [i_15] &= ((/* implicit */unsigned long long int) ((unsigned int) 1286446995U));
                        }
                    } 
                } 
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (!(((_Bool) -9152939752648105524LL)))))));
            }
        } 
    } 
}
