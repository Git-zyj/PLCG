/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32271
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)24398), (((/* implicit */unsigned short) (short)20222)))))) : (-7957775974528018262LL))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (((~((~(7957775974528018240LL))))) | (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_0 [i_1 - 1])), (max((((/* implicit */unsigned int) arr_5 [i_1 - 1])), (var_15)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                arr_12 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(arr_10 [i_3] [i_4] [i_4])))), (max((((((/* implicit */_Bool) 7957775974528018279LL)) ? (-962766712554373385LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))))), (((/* implicit */long long int) ((((/* implicit */int) var_13)) > (var_10))))))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_4]))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) % (((((/* implicit */int) (short)27987)) | (((/* implicit */int) (signed char)-108)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                /* LoopSeq 2 */
                for (int i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [14] [i_4] [i_4])) * (((/* implicit */int) (short)14848)))) << (((((((-7957775974528018262LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)112))))) + (7957775974528018156LL))) - (5LL)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) -1291416679);
                        arr_18 [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((7957775974528018262LL) + (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50750))) - (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(var_12)))))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            arr_21 [i_3] [i_4] [i_5] [i_6] [i_3] = ((/* implicit */int) ((unsigned char) max((((/* implicit */int) (unsigned short)50743)), (((var_10) / (((/* implicit */int) var_8)))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)14773))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)80))))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_8 = 1; i_8 < 16; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)119)))))))));
                            arr_24 [i_3] [i_5 + 4] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) << (((((/* implicit */int) (unsigned short)50750)) - (50735)))));
                            arr_25 [i_3] [i_3] [i_6] = ((/* implicit */int) arr_3 [i_3] [i_3]);
                        }
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_22 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)104)) ? (arr_13 [i_6] [i_5 + 1] [13LL] [i_3]) : (arr_13 [4U] [i_5 + 2] [(unsigned char)7] [(unsigned char)7]))) << (((max((arr_13 [i_4] [i_5 - 1] [i_5 + 2] [i_6]), (arr_13 [i_3] [i_5 + 4] [i_6] [i_5]))) - (1176766969U)))));
                            var_23 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (~(var_10))))))));
                        }
                    }
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 4; i_11 < 15; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned char)98)))) ? (((/* implicit */int) arr_22 [i_10] [i_10] [i_4] [i_11 + 1] [(unsigned char)10] [i_11 + 1] [i_10])) : (((arr_9 [i_3]) ? (arr_20 [12ULL] [12ULL] [i_10] [i_11 - 4] [i_3]) : (var_10))))))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_13 [i_11 + 2] [i_11 + 1] [i_11 - 1] [i_11 + 2]))));
                        arr_33 [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_11 - 4] [i_3] [i_11 - 1] [i_11 - 1]))));
                        var_26 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_19 [(unsigned char)11] [(signed char)14] [(signed char)14] [(signed char)14] [i_11 - 3])) || (((/* implicit */_Bool) 2097151))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 1; i_13 < 16; i_13 += 2) 
                        {
                            var_28 *= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_7 [i_12]))))));
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_13 + 1] [i_13 + 1] [(signed char)11] [i_13 + 1] [i_13 + 1] [i_13]))));
                            var_30 = ((/* implicit */int) var_8);
                        }
                        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
                        {
                            var_31 -= ((/* implicit */signed char) ((unsigned int) (signed char)-104));
                            var_32 = ((/* implicit */int) arr_13 [i_4] [i_10] [i_12] [i_14]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 3; i_15 < 15; i_15 += 2) 
                        {
                            var_33 = ((/* implicit */long long int) arr_9 [(short)0]);
                            var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (unsigned short)65509)))));
                        }
                        arr_43 [i_4] [i_4] [i_4] [i_4] &= ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (arr_0 [i_10]))) ^ (((/* implicit */int) (unsigned short)26)));
                    }
                    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 1) /* same iter space */
                    {
                        arr_48 [i_16] [i_3] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3]))));
                        arr_49 [i_3] [i_3] [(signed char)13] [i_16] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)10905))));
                        var_35 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32659)) ? (var_2) : (var_7))))));
                        var_36 = ((/* implicit */_Bool) (+(((arr_38 [i_4] [i_4]) + (((/* implicit */int) (unsigned char)145))))));
                    }
                    var_37 ^= 2789257357076855331LL;
                }
                var_38 += ((/* implicit */signed char) max((((/* implicit */int) ((var_15) > (((/* implicit */unsigned int) ((/* implicit */int) (short)13)))))), ((~(arr_8 [i_3])))));
            }
        } 
    } 
}
