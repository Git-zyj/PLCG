/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3602
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
    var_19 = ((/* implicit */short) var_12);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned char) var_2);
            arr_5 [(unsigned char)12] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) max((arr_2 [i_1]), (arr_2 [i_1])))) == ((~(arr_0 [i_0] [i_1])))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) (unsigned short)28672)) && (((/* implicit */_Bool) (unsigned short)36847)));
            arr_10 [i_2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)12093))));
            arr_11 [i_2] = ((/* implicit */unsigned short) arr_1 [i_0]);
            arr_12 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12121))) == (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])) : (var_16)))));
        }
        for (int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            arr_16 [i_0] [i_3] = ((/* implicit */long long int) arr_7 [i_3]);
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        arr_22 [i_0] [i_0] [i_3] [i_5] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3])) ? (arr_0 [i_0] [i_4]) : (((/* implicit */int) arr_19 [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_4])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)28672))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((max((((/* implicit */long long int) 283052133U)), (arr_18 [i_5] [i_4] [i_0]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 3863789213U)) ? (-1797009786) : (((/* implicit */int) (short)3465)))))))));
                        arr_23 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) (-(min((((/* implicit */int) arr_8 [i_4])), ((~(((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))))))));
                        arr_24 [i_5] [i_5] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */short) arr_15 [i_5]);
                        arr_25 [i_5] [i_4] = ((/* implicit */short) ((4011915188U) % (((/* implicit */unsigned int) -774848719))));
                    }
                } 
            } 
            arr_26 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) arr_8 [i_0]);
        }
        for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            arr_29 [i_0] [i_6] [i_6] = ((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned int) (short)-24211)), (((unsigned int) arr_18 [i_0] [i_0] [i_6])))));
            arr_30 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) min((arr_14 [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_6] [i_6])));
            /* LoopSeq 4 */
            for (short i_7 = 4; i_7 < 23; i_7 += 4) /* same iter space */
            {
                arr_33 [i_0] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-24230))))) % (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7 - 3]))) > (-5548300673007154801LL))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_40 [i_0] [i_0] [i_6] [i_6] [i_7 - 3] [i_6] [i_9] = ((/* implicit */unsigned int) var_11);
                            arr_41 [i_0] [i_6] [i_7] [i_6] [i_9] = ((/* implicit */signed char) arr_31 [i_0] [i_8] [i_7] [i_8]);
                        }
                    } 
                } 
            }
            for (short i_10 = 4; i_10 < 23; i_10 += 4) /* same iter space */
            {
                arr_46 [i_6] [i_10] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_6] [i_6] [i_6] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21256))) : (((((/* implicit */_Bool) (unsigned char)59)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28482))))))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    for (unsigned char i_12 = 2; i_12 < 23; i_12 += 2) 
                    {
                        {
                            arr_54 [i_0] [i_6] = ((/* implicit */unsigned char) var_2);
                            arr_55 [i_0] [i_0] [i_10] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((var_12) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3111428874U))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_60 [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(3111428874U))))));
                    arr_61 [i_0] [i_0] [i_10] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 4096138220380285712LL))));
                    arr_62 [i_6] [i_6] [i_10] [i_10] [i_13] = arr_57 [i_0] [i_6] [i_6] [i_10 - 3] [i_13];
                    arr_63 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((arr_31 [i_6 + 1] [i_6 - 1] [i_6] [i_6]) > (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6])))));
                    arr_64 [i_6] [i_13] [i_10] [i_6] [i_0] [i_6] = ((/* implicit */short) (-(((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) % (8665974734867746457LL))) & (((var_8) / (arr_6 [i_10 + 1] [i_10])))))));
                }
                arr_65 [i_0] [i_6] [i_10] = ((arr_13 [i_10 - 3] [i_6] [i_10 + 1]) != (((((((/* implicit */_Bool) (unsigned char)124)) && (((/* implicit */_Bool) var_5)))) ? (arr_45 [i_0] [i_6] [i_0] [i_0]) : (((arr_6 [i_6 + 4] [i_0]) + (((/* implicit */long long int) var_14)))))));
                arr_66 [i_0] [i_6] [i_6] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)51)) <= (((/* implicit */int) (unsigned short)36863)))))) == (((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_6]))) - (arr_58 [i_6] [i_6] [i_6]))))))));
            }
            /* vectorizable */
            for (int i_14 = 3; i_14 < 22; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_75 [i_16] [i_15] [i_6] [i_6 - 1] [i_0] = (-(((/* implicit */int) var_10)));
                            arr_76 [i_6] [i_6] = ((((/* implicit */_Bool) arr_71 [i_14] [i_14] [i_14 + 2] [i_14] [i_14 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_35 [i_14] [i_14] [i_6] [i_14 + 2] [i_14 - 3]));
                            arr_77 [i_6] [i_15] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_13)))) * ((-(arr_35 [i_0] [i_0] [i_6] [i_0] [i_0])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_17 = 1; i_17 < 22; i_17 += 2) 
                {
                    for (long long int i_18 = 2; i_18 < 21; i_18 += 2) 
                    {
                        {
                            arr_82 [i_0] [i_18] [i_14] [i_17 + 1] [i_18] = arr_49 [i_6] [i_14 - 3] [i_18];
                            arr_83 [i_6] [i_6] = 4408535334818701036LL;
                        }
                    } 
                } 
                arr_84 [i_6] = ((/* implicit */int) var_11);
            }
            for (long long int i_19 = 0; i_19 < 24; i_19 += 1) 
            {
                arr_89 [i_0] [i_6] [i_0] = ((/* implicit */signed char) ((unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) arr_70 [i_0] [i_0] [i_0]))) <= (arr_56 [i_0] [i_0] [i_6] [i_0]))))));
                arr_90 [i_0] [i_6] = ((/* implicit */unsigned short) (short)-3466);
                arr_91 [i_19] [i_6] [i_6] [i_0] = ((/* implicit */long long int) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-3466)))));
            }
        }
        arr_92 [i_0] [i_0] &= ((/* implicit */unsigned char) var_9);
    }
    for (unsigned int i_20 = 0; i_20 < 24; i_20 += 4) 
    {
        arr_97 [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)62054)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (3400607896473308442LL))))) : (var_16)));
        /* LoopNest 2 */
        for (unsigned char i_21 = 2; i_21 < 23; i_21 += 2) 
        {
            for (unsigned char i_22 = 1; i_22 < 23; i_22 += 4) 
            {
                {
                    arr_104 [i_22] [i_21] [i_20] = ((/* implicit */int) ((unsigned char) ((((((/* implicit */_Bool) -2559649657040835848LL)) && (((/* implicit */_Bool) arr_88 [i_20] [i_21] [i_22])))) && (((/* implicit */_Bool) ((var_15) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))));
                    arr_105 [i_22 - 1] [i_21] [i_21] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_68 [i_20])) <= (((/* implicit */int) (!(arr_20 [i_20] [i_21] [i_22 + 1]))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    arr_106 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */_Bool) var_4);
                    /* LoopNest 2 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            {
                                arr_111 [i_20] [i_21] [i_20] [i_20] [i_24] [i_24] = ((/* implicit */long long int) arr_21 [i_20] [i_20] [i_21 - 1] [i_22 - 1] [i_23] [i_24]);
                                arr_112 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(608246100091332734LL)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_20] [i_21] [i_22] [i_23] [i_22] [i_24]))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) / (2559649657040835847LL))))))));
                                arr_113 [i_20] [i_20] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((long long int) var_4))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_25 = 3; i_25 < 19; i_25 += 3) 
    {
        arr_117 [i_25 - 2] [i_25] = ((/* implicit */unsigned short) var_0);
        arr_118 [i_25 - 2] = ((/* implicit */unsigned char) arr_78 [8ULL] [i_25 - 1] [i_25]);
    }
    for (long long int i_26 = 0; i_26 < 12; i_26 += 1) 
    {
        arr_122 [i_26] = ((/* implicit */unsigned char) var_9);
        arr_123 [i_26] = ((/* implicit */short) var_2);
    }
    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((var_15) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)7003))) > (-934910622949674925LL))))))))));
}
