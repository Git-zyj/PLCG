/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224570
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
    var_10 = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))))));
    var_11 *= ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned int) (_Bool)1)), (var_3))) >> (((/* implicit */int) ((999399063U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_12 *= ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_14 = (-(((((/* implicit */int) (unsigned short)3)) + (arr_1 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!((_Bool)1))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(arr_4 [i_1] [i_1])))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)25581)) == (arr_3 [i_1] [i_1]))))) : (var_4)))));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) 3931087623785212642ULL))));
        var_17 ^= ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_18 -= ((/* implicit */unsigned short) (_Bool)1);
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_19 &= ((/* implicit */_Bool) ((((int) ((14515656449924338974ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123)))))) - ((+(arr_7 [i_3])))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_2]))) + ((((_Bool)1) ? (14478248634489982903ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) min(((short)-12343), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_2])) ? (((/* implicit */int) (signed char)119)) : (arr_4 [i_3] [i_3]))) : (((((/* implicit */int) (short)-25533)) + (((/* implicit */int) arr_5 [i_2])))))) : (((/* implicit */int) min(((short)0), (((/* implicit */short) arr_5 [i_3])))))));
            arr_11 [i_2] = ((/* implicit */unsigned int) ((arr_4 [i_3] [i_2]) == ((+(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)0))))))));
        }
        for (short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (unsigned char)156))));
            arr_16 [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2]))))) || (((/* implicit */_Bool) (-(max((((/* implicit */int) (unsigned char)166)), (arr_7 [i_4]))))))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 9; i_6 += 2) 
            {
                for (short i_7 = 1; i_7 < 8; i_7 += 4) 
                {
                    {
                        arr_25 [i_2] [i_5] [4] [i_2] = ((/* implicit */unsigned char) ((((10181647857994818282ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_7 - 1])))));
                        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [(signed char)2] [(signed char)2])) || (((/* implicit */_Bool) arr_3 [i_5] [i_5])))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -4337955704312491484LL)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (short)-19))))))));
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                arr_28 [i_2] [i_5] [i_8] [2] = ((/* implicit */unsigned char) arr_22 [i_2] [i_5] [i_8] [i_8] [i_5]);
                arr_29 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_9 [i_2] [i_5])))) - (((arr_21 [i_8] [i_8] [i_5] [i_2]) / (arr_26 [i_2] [i_8])))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_23 [i_8] [i_8] [i_5] [0LL] [i_2] [i_2])) : (((/* implicit */int) ((unsigned char) 1499918807)))));
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1474607727U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-4)))))) ? (((/* implicit */int) (unsigned char)253)) : (arr_7 [i_2]))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_5))))))));
                var_27 = ((/* implicit */unsigned short) (signed char)-43);
            }
            var_28 = ((/* implicit */_Bool) ((((arr_19 [(short)8] [(short)8] [i_5] [i_5]) + (2147483647))) >> (((arr_4 [i_2] [i_5]) + (1686950462)))));
            var_29 = ((/* implicit */short) ((((/* implicit */int) (short)-9)) | (((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_2] [i_2]))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    var_30 *= ((/* implicit */unsigned short) arr_18 [(_Bool)1] [(_Bool)1]);
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned char)187))))));
                        var_32 &= ((/* implicit */_Bool) ((min((max((902305525U), (((/* implicit */unsigned int) arr_3 [i_11 - 1] [i_12])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-112))))))) % (max((max((((/* implicit */unsigned int) (signed char)-72)), (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned int) ((unsigned char) -5659898718077836798LL)))))));
                    }
                    for (int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
                    {
                        arr_43 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (arr_38 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_13] [i_11]), ((signed char)96))))))))));
                        var_33 ^= ((/* implicit */int) ((((/* implicit */long long int) arr_21 [i_2] [i_10] [i_11] [i_13])) / (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_20 [i_13] [i_11] [i_10] [i_2])))) + ((-(var_7)))))));
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2]))) | (((((/* implicit */_Bool) -1584643105)) ? (arr_34 [i_11 - 1] [i_11]) : (arr_34 [i_11 - 1] [i_2]))))))));
                        var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) max(((short)-27652), (((/* implicit */short) (_Bool)1))))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_36 &= (-(((arr_24 [i_14] [i_11 - 1] [i_10] [i_10]) + (arr_24 [i_14] [i_11 - 1] [i_11] [i_10]))));
                        var_37 *= ((/* implicit */_Bool) arr_0 [i_11]);
                    }
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (((-(arr_13 [i_2]))) <= (((/* implicit */unsigned long long int) arr_40 [i_2] [i_10] [i_10] [i_15] [i_10]))))), (max((((/* implicit */unsigned long long int) ((var_6) >= (((/* implicit */unsigned long long int) -966014335))))), (arr_15 [i_11 - 1] [i_11 - 1])))));
                        var_39 = (-((+(arr_17 [0] [i_11 - 1]))));
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-9582)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) var_4))), (((((/* implicit */unsigned int) -376322452)) - (arr_34 [(unsigned char)1] [i_11 - 1]))))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned short)65520)))), ((-(((/* implicit */int) (signed char)13)))))))));
                        var_42 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_10] [i_10]) % (((/* implicit */int) arr_35 [8LL]))))) ? (((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_45 [i_10] [i_10] [i_10] [i_2]))))) : (((((/* implicit */_Bool) arr_15 [i_11 - 1] [i_11 - 1])) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) (_Bool)1))))))));
                        var_43 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */unsigned long long int) ((unsigned char) arr_18 [i_2] [i_2])))));
                    }
                    var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((unsigned char) (-(arr_19 [i_2] [i_2] [i_11] [i_11 - 1])))))));
                    var_45 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((arr_13 [i_2]), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_2] [i_10]))))) ? (((unsigned int) arr_8 [i_10] [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 387578972)) ? (var_6) : (((/* implicit */unsigned long long int) arr_21 [i_11 - 1] [i_11 - 1] [i_11] [i_2]))))));
                }
            } 
        } 
        arr_54 [i_2] [i_2] = ((/* implicit */int) arr_41 [i_2]);
    }
}
