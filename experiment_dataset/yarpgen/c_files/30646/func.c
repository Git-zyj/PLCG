/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30646
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_10 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 14386346156980792908ULL)) ? (((/* implicit */int) (signed char)105)) : (-427136767))) & (((/* implicit */int) var_0))))), (max((arr_1 [i_0]), (arr_1 [i_0])))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                arr_8 [i_1] = ((/* implicit */unsigned short) arr_1 [(unsigned char)1]);
                arr_9 [i_1] [(signed char)7] [i_0] [i_1] = ((((_Bool) ((((/* implicit */int) var_4)) <= (427136773)))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [(unsigned short)7] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)79))))) || (((/* implicit */_Bool) (short)2968))))) : (((/* implicit */int) min((arr_6 [i_0] [i_0] [i_1] [i_0]), (((/* implicit */signed char) var_6))))));
            }
            for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                var_11 += ((/* implicit */_Bool) arr_1 [i_0]);
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-1))));
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_0] [(signed char)10] [i_0] [(signed char)10] [i_5] [i_3 - 2])), (arr_4 [i_3 - 1] [i_3 + 1] [i_3 - 1])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_17 [4ULL] [i_1])))), (((((/* implicit */int) (unsigned char)72)) - (((/* implicit */int) (signed char)115)))))))));
                        arr_18 [i_0] [i_0] [i_3 + 1] [i_1] [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)226)), (min((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)72)), (arr_11 [i_4])))), (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_3] [i_4] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))) : (arr_4 [i_0] [i_1] [i_3])))))));
                        arr_19 [(_Bool)1] [(unsigned char)6] [i_3 - 1] [i_1] [(unsigned char)6] = ((/* implicit */short) arr_6 [i_0] [i_1] [i_1] [i_4]);
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)181)), (-427136760)))) ? (arr_2 [i_5]) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_5))))));
                    }
                    for (unsigned int i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        arr_22 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned long long int) max((arr_3 [i_0]), (arr_3 [i_6])))), (arr_4 [i_3 - 2] [i_6 + 3] [i_6 + 3]))));
                        arr_23 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned char)44))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)72)) && ((_Bool)1)))) : (((/* implicit */int) (signed char)0))));
                    }
                    var_15 += ((/* implicit */_Bool) max((min((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0])) >> (((((/* implicit */int) arr_3 [i_4])) - (172)))))), (var_3))), (((/* implicit */long long int) ((arr_2 [i_3]) == (((/* implicit */int) (short)-7)))))));
                }
                for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 2) 
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) -18LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)151)) && (((/* implicit */_Bool) arr_12 [(short)11] [(short)11] [7U] [i_7 - 1] [i_1]))))))));
                    arr_26 [i_1] [i_1] [i_3] [i_7] = var_1;
                    var_17 ^= ((/* implicit */unsigned long long int) min(((unsigned char)70), ((unsigned char)124)));
                }
            }
            var_18 -= ((/* implicit */_Bool) max((((unsigned short) 6560600608786909639LL)), (((/* implicit */unsigned short) arr_15 [i_0] [i_0]))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2862887481437703977ULL)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (signed char)-68))))) || (((/* implicit */_Bool) ((int) var_6)))));
            var_20 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) -6560600608786909639LL)) + (2ULL))));
        }
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            var_21 = ((((/* implicit */_Bool) ((arr_15 [i_8] [i_0]) ? (min((((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_20 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (-8292305005124958923LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_8] [i_8])))))) ? (((int) var_7)) : (((arr_15 [i_8] [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_0] [(signed char)9] [i_8] [i_8])))))) : (((int) var_6)));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1024034014U)) ? (((/* implicit */unsigned long long int) max((arr_14 [i_8] [(unsigned short)2] [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_8] [i_0] [i_0] [i_0])))) : (min((((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_8] [i_8]), (((/* implicit */short) (_Bool)1))))), (var_8)))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((((/* implicit */long long int) arr_15 [i_8] [i_0])), (6560600608786909639LL))))));
        }
        var_24 += ((/* implicit */signed char) ((((/* implicit */int) var_9)) * (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_27 [i_0] [i_0])) : (((/* implicit */int) (short)32767)))) + (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0])) > (((/* implicit */int) (signed char)-4)))))))));
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 4; i_10 < 9; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 11; i_12 += 1) 
                        {
                            {
                                arr_42 [i_10 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_13 [i_0] [i_0] [i_12 - 1] [i_0] [i_10 + 2] [i_10 + 3]), (arr_13 [i_0] [i_9] [i_12 + 1] [i_11] [i_10 - 4] [i_0])))) ? (((((/* implicit */int) var_6)) & (((/* implicit */int) var_9)))) : (65803859)));
                                arr_43 [i_0] [(short)0] = ((/* implicit */unsigned int) arr_15 [i_10 + 1] [i_12 + 1]);
                                var_25 = ((/* implicit */unsigned char) ((((unsigned int) (_Bool)0)) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0])))));
                                arr_44 [i_0] [i_9] [i_10 - 3] [i_11] [i_12] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)0)))), (arr_38 [(short)2] [i_9] [i_10] [i_11] [i_9] [i_11])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)151))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1790)) || (((/* implicit */_Bool) 4051590825U))))) == (((/* implicit */int) arr_34 [i_10 - 2] [i_9] [i_9] [i_9]))))), ((((_Bool)1) ? (arr_1 [i_10 - 4]) : (arr_1 [i_10 + 3])))));
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -6560600608786909639LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6243741164025899964LL)));
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_46 [i_13]))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                {
                    arr_51 [11ULL] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36153))) == (3643523164489974683ULL)));
                    var_29 = ((/* implicit */_Bool) ((int) arr_11 [i_14]));
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned int) (-(arr_39 [i_13] [i_14])));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6560600608786909639LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [9ULL] [9ULL] [9ULL] [i_16]))) : (arr_40 [i_13] [i_13] [i_14] [i_15] [i_14])))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_13] [i_15] [i_13])) ? (((/* implicit */int) arr_36 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_15 [i_13] [11ULL]))))))));
                        arr_54 [i_16] [i_16] = ((/* implicit */unsigned char) var_0);
                    }
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned int) (unsigned short)36153);
                        /* LoopSeq 1 */
                        for (signed char i_18 = 2; i_18 < 11; i_18 += 2) 
                        {
                            arr_59 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_18 + 1] [i_14] [i_18 + 1] [i_17] [i_18 + 1] [i_17] [9LL]))) : (((((/* implicit */_Bool) 7261746778000187388ULL)) ? (arr_0 [8LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            var_34 &= ((/* implicit */unsigned int) (~(arr_48 [i_18 + 1] [i_18 - 1] [i_18 + 1])));
                        }
                        arr_60 [i_15] [i_17] = ((/* implicit */int) arr_41 [i_13] [i_14]);
                    }
                }
            } 
        } 
    }
    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 2) 
    {
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_48 [(signed char)9] [i_19] [i_19])));
        arr_64 [i_19] = ((/* implicit */_Bool) 2685077648U);
    }
    var_36 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)36172)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) : (2685077643U))), (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) max((var_7), (((/* implicit */short) var_2))))) : (((/* implicit */int) min((var_7), (var_0)))))))));
    var_37 = ((_Bool) (short)12553);
}
