/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198594
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
    var_13 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((short) var_7))) - (var_12))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    var_14 = ((/* implicit */signed char) var_2);
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_1)), (var_11)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((unsigned char) ((((/* implicit */int) (unsigned short)65529)) ^ (((/* implicit */int) (signed char)-4))));
        arr_4 [1LL] = ((/* implicit */int) var_1);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 144110790029344768LL)) % (4569064564390314895ULL)))) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)119))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)127)) + (((/* implicit */int) (unsigned char)119))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))) & (arr_6 [i_1 + 1] [i_1 + 1])))));
            var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((unsigned long long int) 1753160304))))) ? ((~(((/* implicit */int) ((signed char) var_1))))) : (((/* implicit */int) var_2))));
            var_19 ^= ((/* implicit */unsigned short) (~(((arr_1 [i_0]) ^ (((/* implicit */int) max((((/* implicit */short) (unsigned char)128)), (var_2))))))));
        }
        /* LoopSeq 3 */
        for (int i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 1) 
            {
                var_20 = ((/* implicit */int) var_1);
                arr_12 [i_2] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_8 [i_0] [i_2] [i_3])) > (2138001074)))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned long long int) var_2);
                            arr_20 [i_2] [i_2] [i_4] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_19 [i_2 + 1] [i_2] [i_6] [i_5] [i_6 + 1]), (((/* implicit */short) var_4))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) ((unsigned char) var_0))))));
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */signed char) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [(short)13] [19U] [i_0] [i_2]))) / (9223372036854775807LL))));
                var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_18 [i_2 - 1] [i_2] [i_2 + 1] [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-121)) && (((/* implicit */_Bool) var_10))))))), (((((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [14LL])), ((unsigned char)127)))) * (((/* implicit */int) ((unsigned short) var_10)))))));
            }
            for (short i_7 = 0; i_7 < 23; i_7 += 2) 
            {
                var_24 = (i_2 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-2839)) + (2147483647))) << (((((((int) arr_5 [i_2])) + (75))) - (18)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 18413614203736953211ULL)))) : (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_9)))) ? ((~(arr_21 [i_0] [i_0] [i_2] [i_7]))) : (((/* implicit */unsigned int) ((int) arr_19 [i_0] [i_2] [i_7] [i_7] [i_7])))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-2839)) + (2147483647))) << (((((((((((int) arr_5 [i_2])) + (75))) - (18))) + (41))) - (10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 18413614203736953211ULL)))) : (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_9)))) ? ((~(arr_21 [i_0] [i_0] [i_2] [i_7]))) : (((/* implicit */unsigned int) ((int) arr_19 [i_0] [i_2] [i_7] [i_7] [i_7]))))))));
                arr_24 [i_7] [i_2] [i_7] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_4)))))) ? (((/* implicit */unsigned long long int) 65504U)) : (18446744073709551615ULL)));
                var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))));
                var_26 = ((/* implicit */short) arr_14 [7]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    var_27 = ((/* implicit */long long int) ((int) var_4));
                    arr_29 [i_2] = ((/* implicit */unsigned int) var_6);
                }
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    var_28 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0] [i_2] [13] [(short)13] [i_9])) || (((/* implicit */_Bool) (unsigned char)1)))))))) ? (max((((((/* implicit */_Bool) arr_14 [i_0])) ? (arr_25 [i_0] [1ULL] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) -5546473880544787880LL))))))));
                    var_29 = max((((/* implicit */int) var_7)), (var_10));
                    arr_32 [i_0] [i_2] [i_7] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3374857106U)) ? (arr_11 [i_2] [i_2 - 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0])))))) ? (((unsigned long long int) (_Bool)1)) : (arr_25 [i_2] [i_2 + 1] [i_2]))), (((/* implicit */unsigned long long int) var_11))));
                }
                for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    var_30 = ((/* implicit */long long int) arr_0 [(short)17]);
                    var_31 = ((/* implicit */signed char) ((short) ((arr_3 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))))));
                }
                for (signed char i_11 = 1; i_11 < 22; i_11 += 1) 
                {
                    var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)18872))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 2) 
                    {
                        var_33 |= ((/* implicit */long long int) var_0);
                        arr_43 [i_7] [i_2] [22ULL] [i_7] [(short)4] = ((/* implicit */short) max((((((/* implicit */_Bool) max((arr_22 [i_0] [i_2] [i_0]), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (var_3))))) : (max((((/* implicit */unsigned long long int) var_6)), (8383019990790975934ULL))))), (((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (signed char)113))))))));
                    }
                    arr_44 [16LL] [i_7] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) max((1067017497237156904ULL), (((/* implicit */unsigned long long int) (signed char)-47)))))));
                }
            }
            arr_45 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+((-(((unsigned long long int) var_6))))));
        }
        for (int i_13 = 1; i_13 < 22; i_13 += 1) /* same iter space */
        {
            var_34 ^= ((/* implicit */short) (signed char)119);
            arr_49 [i_0] [i_0] = ((/* implicit */int) (-(arr_46 [i_13] [i_13 - 1])));
            /* LoopSeq 1 */
            for (long long int i_14 = 3; i_14 < 21; i_14 += 2) 
            {
                var_35 = ((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_13] [i_14 - 3] [i_14]);
                arr_52 [i_14] [i_13 + 1] = ((/* implicit */short) ((((/* implicit */int) max((arr_28 [i_0] [i_13 + 1] [i_14 + 2] [i_14 - 1] [i_14 - 1]), (arr_28 [i_0] [i_0] [i_13 - 1] [i_14 - 1] [i_14 + 1])))) ^ (((/* implicit */int) var_7))));
            }
        }
        for (int i_15 = 1; i_15 < 22; i_15 += 1) /* same iter space */
        {
            arr_56 [i_0] [i_0] [3ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))));
            var_36 |= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_11)))));
            var_37 &= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((((/* implicit */long long int) var_3)), (((((/* implicit */long long int) -1215307792)) + (arr_50 [i_0] [2ULL] [i_15] [i_15]))))));
            arr_57 [i_0] [i_15] = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) var_2)))));
            /* LoopNest 3 */
            for (short i_16 = 1; i_16 < 22; i_16 += 1) 
            {
                for (int i_17 = 1; i_17 < 22; i_17 += 4) 
                {
                    for (int i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_7))) <= ((~(((/* implicit */int) var_3)))))))));
                            arr_68 [i_0] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (short)20762)) || (((/* implicit */_Bool) ((int) (signed char)-113)))));
                        }
                    } 
                } 
            } 
        }
        arr_69 [i_0] [i_0] = ((/* implicit */signed char) ((short) arr_11 [4] [i_0] [i_0]));
    }
    for (short i_19 = 2; i_19 < 19; i_19 += 4) 
    {
        arr_73 [i_19] [i_19] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_7)))));
        arr_74 [i_19 - 1] [i_19 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */int) (unsigned char)48)) % (((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_7)) : (((int) arr_37 [i_19 + 4] [i_19 - 1] [i_19 + 4] [i_19 + 2] [i_19 - 2]))));
    }
}
