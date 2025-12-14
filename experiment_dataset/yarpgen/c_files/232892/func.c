/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232892
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) var_5))));
        var_20 = arr_1 [i_0] [i_0 + 2];
        var_21 = ((/* implicit */int) ((unsigned short) ((unsigned int) (signed char)127)));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */short) var_12);
        var_22 ^= ((/* implicit */unsigned char) 303763421);
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_1] [(signed char)2] = ((/* implicit */unsigned char) ((min((8276298416137589316ULL), (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_8 [i_2]))))));
            var_23 &= ((/* implicit */unsigned char) var_12);
            var_24 = ((/* implicit */int) max((((max((((/* implicit */unsigned long long int) (short)-20965)), (8276298416137589316ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_1]))))), (1073741823ULL)));
            arr_11 [i_1] = ((/* implicit */unsigned short) var_3);
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                var_25 = ((/* implicit */long long int) max((var_25), (((long long int) min((arr_12 [i_3 - 1] [i_3 - 1]), (((/* implicit */long long int) (short)-8440)))))));
                var_26 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_4] [i_3 + 1]))), (arr_13 [i_3] [i_4]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)2047), ((unsigned short)35100))))))))));
                arr_16 [i_3 + 1] [i_3 + 1] [4ULL] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)2047)), ((-(((long long int) 7560108973323040924ULL))))));
                var_27 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_4] [i_3 - 1] [i_1] [i_1])) ^ (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_5 [(unsigned short)3]))))))));
            }
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                arr_19 [i_1] [(_Bool)1] [i_3] [i_5] = ((/* implicit */signed char) var_7);
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)16)))))))));
                var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) var_18)), ((unsigned short)2047))), (((/* implicit */unsigned short) (unsigned char)255)))))) ^ (min((((/* implicit */long long int) var_10)), (max((((/* implicit */long long int) (signed char)-40)), (arr_17 [10LL] [(_Bool)1] [(unsigned char)5])))))));
            }
            arr_20 [i_3 - 1] = arr_4 [i_3 + 1];
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) max((arr_14 [(unsigned char)2] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8]), (var_8))))));
        }
        for (long long int i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
                    {
                        arr_30 [i_7] [i_8 + 2] = ((/* implicit */signed char) arr_9 [10ULL] [i_7 + 1] [i_7 + 1]);
                        var_31 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53925))) | (1457698039U))) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_1] [i_6 + 1] [i_7 + 1] [i_7] [i_8] [i_7 + 1])) || (((/* implicit */_Bool) arr_28 [(unsigned char)0] [i_6 + 2] [(unsigned char)0] [i_8 + 3] [i_8 + 2]))))), (((unsigned short) 18446744073709551615ULL))))))));
                        var_32 |= ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                        var_33 = ((/* implicit */unsigned long long int) (short)-7031);
                        var_34 -= ((/* implicit */unsigned char) max((min((min((((/* implicit */int) arr_15 [i_9 + 1] [i_8] [i_1] [i_1])), (var_0))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) var_0))))))), (((/* implicit */int) min((((var_17) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) || ((_Bool)1))))))));
                    }
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((max((922319775U), (arr_32 [2ULL] [7U] [i_7] [i_8 - 1] [i_8 - 1] [7U]))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_1] [8U] [i_1])))))), (arr_31 [(signed char)6] [(signed char)6] [(unsigned short)5])));
                        var_36 = ((/* implicit */int) ((unsigned long long int) min((arr_26 [i_8 + 1] [i_7] [i_7 + 1] [(unsigned short)2] [i_7 + 1] [i_6 + 2]), (arr_26 [i_8 + 4] [i_7] [i_7 + 1] [i_6] [i_6 + 1] [i_6 + 1]))));
                    }
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)234));
                        var_38 = ((/* implicit */signed char) (unsigned short)20104);
                        var_39 = ((/* implicit */_Bool) ((unsigned char) (short)-22031));
                    }
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) (unsigned char)1))));
                    var_41 = ((/* implicit */unsigned char) (~(((arr_13 [i_1] [i_1]) | (((/* implicit */unsigned long long int) arr_21 [i_7 + 1] [i_8 + 4]))))));
                }
                var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((arr_13 [i_7 + 1] [(short)8]), (var_17))), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_24 [i_1] [i_6] [i_1] [i_1])), ((short)-12347)))))))));
                arr_35 [i_1] [i_1] [(unsigned short)10] = ((/* implicit */unsigned int) arr_9 [i_1] [9LL] [i_7]);
            }
            var_43 = ((((/* implicit */int) (unsigned char)237)) * (((/* implicit */int) (_Bool)0)));
        }
        /* vectorizable */
        for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_13 = 1; i_13 < 11; i_13 += 2) 
            {
                for (unsigned char i_14 = 1; i_14 < 11; i_14 += 3) 
                {
                    {
                        arr_44 [i_1] [i_1] [i_13 - 1] [i_14] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned char) arr_24 [i_14] [i_13] [(unsigned char)0] [i_1])));
                        arr_45 [i_14] [i_14] [i_13 - 1] [i_14 - 1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_39 [i_1]));
                    }
                } 
            } 
            var_44 = ((/* implicit */int) var_13);
        }
    }
    for (unsigned char i_15 = 1; i_15 < 17; i_15 += 4) 
    {
        var_45 = ((/* implicit */unsigned short) (unsigned char)1);
        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((arr_47 [i_15]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    var_47 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned short) ((_Bool) var_15)))));
    var_48 *= ((/* implicit */unsigned short) var_16);
}
