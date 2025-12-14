/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205885
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
    var_12 = ((/* implicit */long long int) 1560890691U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)41)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_12 [i_0] = ((/* implicit */unsigned char) var_0);
                    arr_13 [i_0] [(unsigned char)2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) (unsigned short)7)) : (1624529305)))), (((arr_1 [i_2 + 1] [i_2 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */long long int) (-(((/* implicit */int) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))))))));
                        var_14 += ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) > (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) (unsigned char)41)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [6LL] [i_1] [(short)3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (var_4) : (((/* implicit */unsigned long long int) 32768U)))))));
                            arr_24 [i_0] [i_1] [i_1] [i_5] [i_4] [(short)1] [i_5] = ((/* implicit */unsigned long long int) ((arr_5 [1LL] [1U]) - (((/* implicit */unsigned int) var_9))));
                            var_15 = ((/* implicit */unsigned int) arr_18 [i_0] [i_1] [1ULL] [i_4] [i_4] [i_0]);
                            arr_25 [i_5] [i_5] [i_1] [8ULL] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_14 [i_5] [i_1] [i_2 + 1] [i_2] [i_1] [i_1])) : (((/* implicit */int) arr_14 [i_4] [i_2] [i_2 + 1] [1] [i_1] [i_1]))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)41)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207)))))) ? (0U) : (((((/* implicit */_Bool) (unsigned char)33)) ? (1560890697U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1653246707)) ? (var_8) : (0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)8861))))))) : (((((/* implicit */_Bool) (signed char)-7)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33)))))));
                            var_18 = ((/* implicit */unsigned char) arr_4 [i_2] [i_2 + 1] [i_2 + 1]);
                            var_19 = ((/* implicit */long long int) ((-408718941) | (((/* implicit */int) (unsigned short)16383))));
                            var_20 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_14 [i_1] [(short)5] [i_2 + 1] [0ULL] [2] [i_4])) : (var_9)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_4]))))) : (-6393007562262445656LL));
                        }
                        var_21 = ((/* implicit */int) (+(var_4)));
                    }
                    var_22 = ((/* implicit */unsigned short) var_3);
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned int) (unsigned short)49131);
                                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_9])) ? (var_0) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [8]))))), ((-(((((/* implicit */_Bool) 8847787019386686095ULL)) ? (((/* implicit */unsigned int) 262143)) : (arr_9 [i_0] [i_1] [i_8])))))));
                                arr_37 [i_0] [i_1] [i_9] [i_8] [i_9] = ((/* implicit */short) max((2134881410U), (((/* implicit */unsigned int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 4; i_12 < 7; i_12 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) 3236012126482891200ULL);
                                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [(short)9])), (arr_5 [i_10] [3ULL])))) ? (min((((/* implicit */unsigned long long int) (unsigned char)29)), (var_4))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_1)) ? (1615409447U) : (((/* implicit */unsigned int) -1)))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (_Bool)0)) : (1266061833))) / (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)8))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_10] [i_1] [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */int) (signed char)-1)) : (var_0)))) ? (max((15442739934998957564ULL), (((/* implicit */unsigned long long int) (signed char)-56)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)511)))))));
                }
                /* vectorizable */
                for (long long int i_13 = 3; i_13 < 10; i_13 += 2) 
                {
                    arr_52 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 4611668426241343488LL)) > (3529744685336486359ULL)))) >= (-1)));
                    var_28 &= ((/* implicit */unsigned short) (-(8847787019386686087ULL)));
                }
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    for (unsigned char i_15 = 3; i_15 < 9; i_15 += 3) 
                    {
                        {
                            arr_59 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)117))))) ? (arr_36 [i_0] [i_14] [i_15]) : (((/* implicit */unsigned long long int) var_6)))));
                            arr_60 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65024)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2160085886U)) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) arr_16 [i_0] [i_0] [4] [i_0]))))) : (8847787019386686095ULL)));
                            arr_61 [i_0] [(short)10] [i_0] [i_14] [i_15 - 1] = ((/* implicit */short) 72057594037927936ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_29 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (short i_16 = 0; i_16 < 12; i_16 += 2) 
    {
        for (short i_17 = 0; i_17 < 12; i_17 += 3) 
        {
            {
                var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [i_16])) ? (arr_62 [i_16]) : (arr_62 [i_16])))) % (2843212813U)));
                arr_69 [0LL] [0LL] [4] = ((/* implicit */int) 4294967295U);
                var_31 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 72057594037927936ULL)) ? (-1788761863642613299LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)511)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)192)) * (0)))) : ((-(var_8))))), ((-(max((((/* implicit */unsigned int) arr_67 [i_16] [i_16] [4])), (61126304U)))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) 343473104)), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)64537))))), (var_6)))));
}
