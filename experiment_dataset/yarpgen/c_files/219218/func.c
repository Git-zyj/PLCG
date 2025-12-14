/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219218
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
    var_20 = ((/* implicit */short) ((unsigned char) (((!(((/* implicit */_Bool) var_10)))) && (((((/* implicit */_Bool) var_1)) && ((_Bool)0))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_21 = (-(max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_1]))) != (var_19)))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_18)))))));
            arr_5 [i_0] = ((/* implicit */signed char) ((((((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) ^ ((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))) + (2147483647))) >> ((((+(var_4))) + (2080136024199958333LL)))));
            var_22 = ((/* implicit */unsigned char) ((((max((var_13), (((/* implicit */unsigned long long int) var_16)))) + (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (18446744073709551615ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
        }
        for (unsigned short i_2 = 3; i_2 < 8; i_2 += 4) 
        {
            var_23 = ((/* implicit */short) ((((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)111)) - (98))))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_0] [i_2 - 2])))))) & (((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (_Bool)1))))) && ((!((_Bool)1))))))));
            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((arr_6 [i_2]), (((/* implicit */short) var_2))))) ? (min((var_13), (((/* implicit */unsigned long long int) arr_6 [(unsigned char)11])))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [(_Bool)1])))))) < (((/* implicit */unsigned long long int) ((min((var_9), (var_9))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)5])) == (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_3 [0LL] [0LL] [(unsigned short)5])) : (((/* implicit */int) (unsigned char)214)))))))));
            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((min((((/* implicit */long long int) arr_2 [i_0])), (9223372036854775807LL))) != (((var_19) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
        }
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_19) / (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0])) / (((/* implicit */int) arr_8 [(signed char)7] [i_0])))))))) ? (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)7)) % (var_6)))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))) / (var_4))))))))));
        var_27 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), ((+(6400649788280292880ULL)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_13 [0ULL] |= (~((+((~(var_6))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned long long int) arr_16 [i_5] [i_4 + 1] [(unsigned char)21] [i_4 + 1])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_3] [i_3] [i_5])))))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) min((var_7), ((unsigned char)147)))), (((arr_16 [i_3] [i_5] [i_3] [i_3]) - (var_4))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))) % ((~(arr_10 [i_3])))));
                        var_30 *= ((/* implicit */unsigned short) ((arr_10 [i_4 + 1]) - (((/* implicit */long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_15)))))));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) min((var_31), (((((var_11) / (((/* implicit */long long int) var_17)))) & (((/* implicit */long long int) min((((((/* implicit */int) (signed char)127)) | (((/* implicit */int) arr_15 [i_3])))), (((/* implicit */int) var_8)))))))));
        var_32 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)218)))) / ((+(((/* implicit */int) (unsigned char)198))))));
        var_33 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (min((var_17), (((/* implicit */unsigned int) arr_15 [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */short) (_Bool)1))))))))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) (_Bool)1)))))));
    }
    for (short i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_8 = 3; i_8 < 23; i_8 += 1) 
        {
            var_34 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_1), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_11))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))))) >= (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)49)) & (((/* implicit */int) arr_27 [i_7] [i_8])))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (var_5)))))))));
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                for (unsigned int i_10 = 1; i_10 < 21; i_10 += 4) 
                {
                    {
                        var_35 ^= ((long long int) ((((/* implicit */_Bool) (~(arr_32 [23] [19LL] [19LL] [i_10] [i_10])))) ? (((var_14) % (arr_26 [i_10]))) : (max((((/* implicit */long long int) var_9)), (var_5)))));
                        arr_33 [4] [(short)20] [i_9] [4] [4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (18446744073709551615ULL));
                        var_36 = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */int) ((short) (unsigned char)206))), (((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)2047))))))), (((max((((/* implicit */long long int) var_10)), (-3693549518263863236LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_30 [i_7]))))))));
                    }
                } 
            } 
        }
        arr_34 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_13)))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned char)122))))))) ? (((/* implicit */long long int) (~(((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned char)206))))))) : (((((/* implicit */long long int) ((/* implicit */int) max((arr_30 [i_7]), (((/* implicit */unsigned short) arr_27 [i_7] [i_7])))))) / ((-(var_4)))))));
    }
    for (short i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
    {
        arr_39 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))) >= (799841954U)))) != (((((/* implicit */int) (short)0)) >> (((((/* implicit */int) arr_36 [i_11])) + (4603))))))))) != (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_21 [i_11] [i_11])), (var_8))))) ^ (((var_14) | (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_11])))))))));
        var_37 = ((/* implicit */unsigned short) (+(max(((+(((/* implicit */int) var_18)))), (((/* implicit */int) min(((unsigned short)21298), (arr_30 [(short)22]))))))));
        var_38 = ((/* implicit */short) max(((+(var_11))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_37 [i_11])))))));
    }
}
