/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232544
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), ((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)24)) ^ (((/* implicit */int) (unsigned char)226)))))))));
        var_12 += ((/* implicit */short) var_2);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                arr_9 [i_2] = ((/* implicit */unsigned char) 0U);
                arr_10 [i_0 + 1] [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */int) var_0)) != (arr_4 [i_0 - 1] [i_0 + 1])))), (arr_2 [i_2] [i_2] [i_2])));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)54)) || (arr_12 [i_0] [i_0 - 1] [i_0 + 1] [i_0])))), (((6ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_4] [i_2] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2] [(signed char)12]))) : (arr_6 [i_2] [i_2] [i_2]))))))));
                            var_14 = ((max((((2056077347934873597LL) & (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) 190105027U)))) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) * (var_10))) ^ (max((var_5), (((/* implicit */unsigned long long int) var_0)))))) - (16950861734430870255ULL))));
                            arr_16 [i_0] [i_2] [i_0] [i_0] [i_4] = arr_3 [i_0] [i_0] [i_2];
                        }
                    } 
                } 
                var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((unsigned char) arr_1 [i_0])))) ^ (max((((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_0))))), (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (_Bool)1))))))));
                var_16 += ((unsigned char) ((((((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_0 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_0] [i_1] [i_0 + 1])) + (79)))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_17 = ((/* implicit */long long int) ((max((2487594029748270004LL), (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_5] [i_5] [i_0])))) < (((/* implicit */long long int) ((/* implicit */int) (short)30390)))));
                var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]))))), (((((/* implicit */_Bool) ((unsigned short) arr_13 [i_5] [i_1] [i_5] [i_1] [i_5]))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0 - 1])))))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) var_0);
                        var_20 = ((/* implicit */unsigned char) max((max((max((((/* implicit */unsigned long long int) -1930444439542654139LL)), (7890011772575128347ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((var_9) + (5485677698641100278LL)))))))), (var_10)));
                        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_0]))))), (((unsigned int) ((0U) << (((/* implicit */int) var_2)))))));
                        var_22 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5] [(unsigned char)5])))) << (((max((1410328247U), (1195272828U))) - (1410328224U))))), (((/* implicit */int) (unsigned char)111))));
                    }
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (max((((/* implicit */unsigned long long int) var_2)), (var_3))))))));
                        var_24 = ((/* implicit */short) ((long long int) max((var_9), (((/* implicit */long long int) arr_13 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1])))));
                    }
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
                    {
                        var_25 = var_3;
                        arr_31 [i_1] [i_5] [7U] [i_6] [i_1] = ((((/* implicit */_Bool) ((((((((/* implicit */int) (signed char)-92)) + (2147483647))) << (((18446744073709551610ULL) - (18446744073709551610ULL))))) | (((/* implicit */int) (short)-10759))))) ? ((+(3030390479U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1784212414U)))))));
                    }
                    var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned char) (signed char)-27))))) ? (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)-32767)))) : (((/* implicit */int) (short)3556))));
                    var_27 = ((/* implicit */unsigned int) (+(var_5)));
                }
                for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    var_28 += ((/* implicit */int) (unsigned short)62815);
                    var_29 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])))))));
                }
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((long long int) 18ULL)) : (((/* implicit */long long int) -1364941299)))))));
            }
            for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                arr_37 [i_0] [i_0 + 1] = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)111)), (3030390479U)));
                var_31 += ((/* implicit */short) (+(((/* implicit */int) (short)-10759))));
                var_32 = ((((/* implicit */int) max((arr_19 [i_0 - 1] [i_0 - 1]), (arr_19 [i_0 + 1] [i_0 + 1])))) >> (((max((((/* implicit */long long int) (signed char)-26)), (arr_6 [i_0 - 1] [i_1] [i_11]))) - (4369521967962074430LL))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                var_33 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) >> (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_12]))))) ^ (((var_10) * (((/* implicit */unsigned long long int) var_9)))))) * (((/* implicit */unsigned long long int) min((6268217265535302276LL), (((/* implicit */long long int) arr_15 [i_12])))))));
                var_34 = ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */short) arr_32 [i_0] [i_1] [i_12] [i_1] [i_0 + 1])), ((short)32767)))), (((((/* implicit */int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ^ (((/* implicit */int) arr_2 [i_0 - 1] [i_12] [i_0 - 1]))))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        {
                            arr_45 [i_0] [i_13] [i_1] [i_12] [i_13] [i_13] [i_14] = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_6), (arr_18 [i_0] [i_1] [i_12] [8LL]))))))), (min((((signed char) (unsigned char)255)), ((signed char)-108)))));
                            var_35 = ((/* implicit */_Bool) min((((var_9) | (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0 + 1]))))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_24 [i_0] [i_0 + 1])))))));
                            var_36 = ((/* implicit */unsigned long long int) ((1489596008U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116)))));
                            arr_46 [i_13] = ((/* implicit */signed char) 18125497631730944661ULL);
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                arr_49 [i_15] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) max((max((18125497631730944662ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_1] [i_15] [i_15]))));
                /* LoopSeq 2 */
                for (short i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    arr_53 [i_0] [i_0] [i_0] [i_0] [i_15] [i_0 + 1] = ((/* implicit */short) (signed char)18);
                    arr_54 [i_0] [i_1] [i_1] [i_16] [i_15] = ((/* implicit */unsigned int) var_5);
                    var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0LL)), (11154996431617157593ULL)))) ? (((min((8486959718967779592ULL), (((/* implicit */unsigned long long int) -982113707842898391LL)))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_15] [i_1] [i_15]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_7 [i_0 - 1] [i_1] [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-19), (((/* implicit */signed char) arr_27 [i_0] [i_1] [i_1] [i_15] [i_1])))))) : (var_9))))));
                }
                /* vectorizable */
                for (unsigned int i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (~(6216856769386932651LL))))));
                    var_39 = ((/* implicit */signed char) arr_56 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
        /* vectorizable */
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
        {
            var_40 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_57 [i_0] [i_18 - 1] [i_18]))));
            var_41 = ((/* implicit */unsigned char) 764494973296390034LL);
            var_42 += ((/* implicit */_Bool) arr_40 [i_0]);
        }
        arr_62 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21978))) : (var_10))));
    }
    /* vectorizable */
    for (signed char i_19 = 0; i_19 < 10; i_19 += 2) 
    {
        var_43 += var_10;
        /* LoopSeq 3 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            arr_67 [i_19] [i_20] [i_19] = 16769024U;
            /* LoopSeq 1 */
            for (unsigned int i_21 = 0; i_21 < 10; i_21 += 4) 
            {
                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((/* implicit */int) var_4))))) ? (((var_3) << (((/* implicit */int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))))))));
                var_45 = ((/* implicit */unsigned short) var_3);
                var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_21] [i_19])) << (((4050211770U) - (4050211765U))))))));
                arr_70 [i_19] [i_19] [i_20] [i_21] = ((/* implicit */signed char) (((~(((/* implicit */int) var_0)))) | (((/* implicit */int) var_0))));
            }
            arr_71 [4U] [7ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_20] [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned int) arr_68 [i_19] [i_19])) : (arr_50 [i_19] [i_20] [i_20])));
        }
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            var_47 = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (764494973296390045LL)))) ^ ((((_Bool)0) ? (321246441978606953ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
            var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) var_8))));
            var_49 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (0LL)))));
        }
        for (unsigned char i_23 = 1; i_23 < 8; i_23 += 4) 
        {
            var_50 = ((/* implicit */unsigned char) arr_64 [i_23]);
            var_51 = ((/* implicit */_Bool) arr_36 [i_19]);
        }
        var_52 = ((/* implicit */unsigned short) ((arr_60 [i_19]) ? (((/* implicit */int) arr_3 [i_19] [i_19] [i_19])) : (((/* implicit */int) var_0))));
        arr_77 [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-20547)) || (var_4)));
    }
    /* LoopNest 2 */
    for (unsigned char i_24 = 0; i_24 < 23; i_24 += 4) 
    {
        for (unsigned long long int i_25 = 0; i_25 < 23; i_25 += 2) 
        {
            {
                var_53 += ((/* implicit */unsigned char) (+(4050211770U)));
                var_54 = ((/* implicit */unsigned int) -1);
            }
        } 
    } 
    var_55 = max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))) ^ (8680326241671347536ULL))) >> (min((((/* implicit */unsigned long long int) var_0)), (18446744073709551609ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_2)), ((short)-24251)))));
}
