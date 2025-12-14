/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217525
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
                {
                    for (signed char i_4 = 2; i_4 < 23; i_4 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [21ULL] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0] [i_0])))) | (((((/* implicit */_Bool) arr_11 [i_1] [i_4 + 1] [i_2] [18ULL] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_2] [(signed char)5] [i_4 + 1] [i_0]))))));
                            var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_2 [i_3 - 1] [i_2] [i_3 + 1])))) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) ((arr_9 [2U] [2U] [i_0] [i_3] [i_4 + 1]) | (((/* implicit */long long int) ((arr_6 [i_0] [i_1] [i_2]) / (((/* implicit */int) (unsigned char)27))))))))));
                            arr_13 [i_0] [i_1] [(unsigned char)6] [i_0] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1]))) : (32ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) <= (max((var_7), (((/* implicit */unsigned long long int) arr_4 [i_1])))))))));
                            var_16 = ((/* implicit */unsigned char) arr_11 [i_3] [(short)4] [i_2] [i_3] [i_0]);
                            var_17 = ((/* implicit */long long int) (short)10576);
                        }
                    } 
                } 
            } 
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0])), ((unsigned short)6098))))));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (short i_6 = 2; i_6 < 20; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-17470), ((short)21700))))) / (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1063081029)), (var_13)))) ? (((((/* implicit */_Bool) var_4)) ? (18446744073709551615ULL) : (arr_18 [i_0] [i_1] [5ULL] [(short)12] [(short)12] [6]))) : ((~(var_8)))))));
                            var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) -281191912))) || (((/* implicit */_Bool) ((unsigned long long int) var_13)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 3) 
                    {
                        {
                            arr_30 [(short)20] [i_8] [i_9] [(unsigned short)2] [(short)2] &= ((/* implicit */short) (~(18446744073709551608ULL)));
                            var_20 *= ((/* implicit */short) ((min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)37631)))) + (((((/* implicit */_Bool) arr_11 [i_10 - 2] [(short)4] [(short)4] [(short)4] [(unsigned char)12])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (18446744073709551607ULL))) : (18446744073709551589ULL)))));
                        }
                    } 
                } 
            } 
        }
        var_21 = ((/* implicit */unsigned char) (-(var_6)));
        arr_31 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((min((((/* implicit */int) (unsigned char)129)), (arr_6 [0ULL] [0] [i_0]))) / (((/* implicit */int) ((unsigned char) var_1)))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) -536093098)) ? (7094362344918919014ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26941)))))) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (((/* implicit */short) var_2))))))))));
        /* LoopNest 3 */
        for (unsigned char i_11 = 3; i_11 < 21; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                for (short i_13 = 3; i_13 < 23; i_13 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (arr_37 [i_13] [i_0] [i_0]) : (arr_0 [i_0])))) ? (((long long int) arr_38 [i_13 - 2] [i_0] [i_0] [i_11] [i_0] [i_0])) : (((/* implicit */long long int) ((((/* implicit */int) arr_33 [i_0] [i_11] [i_12])) >> (((((/* implicit */int) var_3)) - (62)))))))) * (((/* implicit */long long int) (+(((int) (unsigned short)0)))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_14 = 1; i_14 < 22; i_14 += 2) 
                        {
                            var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (min((arr_8 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_36 [i_11 + 2] [i_0] [i_14])))))) << (((max((max((((/* implicit */unsigned long long int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_0])) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) arr_41 [(short)8] [i_11 + 2] [i_11 + 2]))))))) - (16423817417013447676ULL)))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 4294967280U))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_4))));
                        }
                        for (signed char i_15 = 1; i_15 < 23; i_15 += 4) /* same iter space */
                        {
                            var_26 ^= ((/* implicit */_Bool) 6494417226310069328LL);
                            arr_48 [i_0] [i_11] [i_0] [i_13] [i_13 + 1] [i_15] [i_15 + 1] = arr_37 [i_12] [i_13] [i_12];
                            arr_49 [(short)2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_40 [i_0] [i_0])), (((18446744073709551589ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_15] [i_0] [i_12] [i_0]))))))), (min((((/* implicit */unsigned long long int) (signed char)106)), (max((var_8), (arr_24 [8LL] [i_13] [i_12] [i_13 - 3])))))));
                            var_27 -= ((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) >> (((var_7) - (13163249005161154924ULL)))))), (0ULL))));
                        }
                        for (signed char i_16 = 1; i_16 < 23; i_16 += 4) /* same iter space */
                        {
                            arr_52 [i_0] [i_11] [4ULL] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) var_8))) + (2147483647))) << (((((/* implicit */int) (unsigned short)15006)) - (15006)))))) - (511ULL)));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (0ULL))))));
                            var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_0] [i_16 - 1] [(signed char)10] [i_13 - 3] [(signed char)14]))))) ? (((/* implicit */int) min((arr_27 [i_0] [i_11] [i_12] [16LL] [i_13] [i_16 + 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7)))))))) : (((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_0] [(short)11] [i_0] [i_0]))));
                        }
                        for (signed char i_17 = 1; i_17 < 23; i_17 += 4) /* same iter space */
                        {
                            var_30 = ((unsigned char) var_11);
                            var_31 = min((((/* implicit */unsigned long long int) (unsigned char)255)), (17965995800897255078ULL));
                        }
                    }
                } 
            } 
        } 
    }
    var_32 = var_10;
}
