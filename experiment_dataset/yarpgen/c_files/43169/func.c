/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43169
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) min((((((/* implicit */int) ((unsigned short) var_2))) & ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_7 [0ULL] [i_1] [i_2] [i_3] [i_2] [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (-(((int) arr_13 [i_0 + 2] [(signed char)7] [i_2] [i_2] [i_3 - 1] [i_3] [i_4])))))));
                            var_22 ^= ((/* implicit */signed char) 8191);
                            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 - 1])) ^ (-8192)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_0), (((/* implicit */unsigned long long int) (unsigned short)47432)))) <= (((/* implicit */unsigned long long int) arr_5 [i_0 + 1])))))) : (18446744073709551613ULL)));
                        }
                        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (unsigned char)5))));
                            var_25 = ((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0]));
                            var_26 = ((/* implicit */_Bool) ((short) min((var_0), (((/* implicit */unsigned long long int) arr_15 [i_0] [8ULL] [i_2] [i_3] [i_5])))));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_15 [i_0] [i_1] [i_2] [i_0] [11ULL])))));
                            arr_19 [i_1] [i_3] = ((/* implicit */short) -8194);
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_6] [i_2]))))) + ((+(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                        {
                            var_29 *= ((/* implicit */_Bool) (unsigned short)47432);
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_1))) & (((/* implicit */int) (_Bool)1))));
                            var_31 ^= ((/* implicit */signed char) var_16);
                        }
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                        {
                            arr_25 [i_0 + 2] [i_0 + 2] [(_Bool)1] [10ULL] [(unsigned char)7] |= ((/* implicit */signed char) ((int) max(((+(var_11))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_2] [i_8])))));
                            var_32 = ((/* implicit */unsigned long long int) (~(1450659008U)));
                            var_33 = ((/* implicit */_Bool) ((signed char) (~(max((var_15), (arr_21 [i_0] [i_1] [i_2] [i_3] [i_8]))))));
                            var_34 = ((/* implicit */unsigned int) (~(-1617747042)));
                        }
                        var_35 = ((/* implicit */_Bool) arr_0 [i_2]);
                    }
                    /* vectorizable */
                    for (short i_9 = 2; i_9 < 12; i_9 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */short) var_12);
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            arr_32 [i_10] [(_Bool)1] [i_9 - 1] [i_2] [i_1] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((/* implicit */int) ((short) arr_28 [i_0] [i_1] [i_2] [i_9] [i_1])))));
                            var_37 = ((/* implicit */unsigned long long int) arr_9 [i_0 + 1] [i_1 + 2] [(unsigned short)9] [(unsigned char)2] [i_9 + 1] [i_9 + 1]);
                            arr_33 [6ULL] [6ULL] [i_9] [i_10] = ((/* implicit */short) arr_4 [i_0 + 2] [i_0 - 1] [i_1 - 1] [i_9 - 1]);
                            var_38 ^= ((/* implicit */unsigned long long int) ((signed char) ((short) arr_24 [i_0] [i_0] [i_2] [(signed char)12])));
                        }
                        for (short i_11 = 3; i_11 < 11; i_11 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -8734617315951619218LL)) ? (arr_1 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_4))))))));
                            arr_38 [i_9 - 2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [(unsigned char)11] [i_1] [i_9] [i_11]))) > (var_5)))) >> (((arr_12 [i_0 + 1] [i_0] [i_0 + 2]) - (4161497685212934941ULL)))));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_1))));
                            var_41 = ((/* implicit */_Bool) var_11);
                        }
                        var_42 |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-6)) * (((/* implicit */int) ((signed char) arr_1 [8LL])))));
                        var_43 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                        arr_41 [i_2] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_9] [i_9] [i_0 - 1] [i_0] [i_0])) * (((/* implicit */int) arr_28 [i_2] [i_2] [i_0 - 1] [i_0 + 2] [i_0]))));
                    }
                    for (short i_13 = 2; i_13 < 12; i_13 += 2) /* same iter space */
                    {
                        var_44 = ((short) 8734617315951619224LL);
                        var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_23 [7] [i_2] [i_1] [5] [i_1] [7] [i_0])) - (((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) arr_29 [8ULL] [8ULL] [i_0] [i_0] [i_0 + 1] [i_2]))));
                        var_46 *= var_17;
                    }
                    for (short i_14 = 2; i_14 < 12; i_14 += 2) /* same iter space */
                    {
                        var_47 = ((unsigned long long int) arr_6 [i_0] [i_1 + 2] [i_2] [(unsigned short)1] [i_14 - 1]);
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [(signed char)6] [i_1 + 2] [i_0 + 2] [i_14 + 1] [i_14]) - (((/* implicit */unsigned long long int) arr_13 [(short)8] [i_0] [i_0 + 2] [(short)8] [(_Bool)1] [i_0 + 1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0 + 1] [i_1 - 2] [i_14 - 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_14 + 1]))) % (arr_6 [i_0] [i_1 - 1] [i_0 - 1] [i_14 - 2] [i_0])))));
                    }
                    arr_47 [i_2] [i_1 + 2] [i_0] = ((/* implicit */_Bool) -1854632180296094911LL);
                }
            } 
        } 
    } 
    var_49 = ((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned long long int) var_4))));
    var_50 = var_2;
}
