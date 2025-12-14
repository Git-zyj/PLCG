/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234528
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
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned short) max(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11755))) : (-7180847457832331870LL))), (((/* implicit */long long int) ((var_1) && (((/* implicit */_Bool) arr_0 [i_0 - 2])))))));
        var_11 = ((/* implicit */_Bool) (short)-11755);
        var_12 = ((/* implicit */unsigned long long int) var_7);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 += arr_5 [(_Bool)1];
                    arr_7 [i_1] = ((/* implicit */int) var_0);
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_8 [i_3]) : (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_10 [i_3])))))));
        var_14 = ((/* implicit */unsigned char) (-(arr_8 [i_3])));
        arr_12 [i_3] = ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_8 [i_3]));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */unsigned int) arr_14 [i_4] [i_4])) : (var_3)));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) arr_17 [i_6] [i_5] [i_6])) != (((/* implicit */int) var_4)))));
                                arr_27 [i_6] = ((/* implicit */unsigned short) arr_22 [i_8] [i_7] [i_6] [i_4]);
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_4] [13] [i_4] [i_4])) ? (((((/* implicit */_Bool) (unsigned short)24003)) ? (((/* implicit */unsigned long long int) 4611683819404132352LL)) : (1053426379240334434ULL))) : (((/* implicit */unsigned long long int) ((var_6) << (((/* implicit */int) var_1)))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)11743)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)27334))));
                                arr_28 [i_4] [i_5] [i_6] [14LL] [i_7] [i_8] [i_6] = ((/* implicit */_Bool) (short)11743);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_18 [10ULL] [i_5] [i_6])) || (((/* implicit */_Bool) arr_16 [(signed char)9] [i_5] [i_5]))))));
                    arr_29 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_5] [i_6] [i_6] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_4] [i_5] [i_6] [i_6]))) : (var_9)));
                }
            } 
        } 
        arr_30 [i_4] = ((/* implicit */int) ((-7495394289696891516LL) & (5391152923267820843LL)));
        /* LoopSeq 4 */
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_26 [i_9] [i_9] [i_4] [i_4] [i_9] [i_4])) | (var_0)));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) arr_16 [i_4] [i_9] [i_10]);
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_4])))))));
                        arr_38 [i_4] [i_9] [i_11] [(unsigned short)11] = ((/* implicit */unsigned char) 2110826235U);
                    }
                } 
            } 
        }
        for (unsigned short i_12 = 2; i_12 < 14; i_12 += 4) 
        {
            var_23 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_35 [i_12 - 2] [i_4])) < (arr_31 [i_4] [i_4] [i_4])));
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 3159146174235691563LL)) ? (arr_42 [(unsigned short)7] [i_12 + 2] [i_12 - 1] [i_12 + 2]) : (arr_42 [i_4] [i_4] [i_12 - 2] [i_13])));
            }
            for (int i_14 = 2; i_14 < 16; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    for (int i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        {
                            var_26 = arr_22 [4U] [i_15] [(short)6] [(short)6];
                            var_27 = ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) ((((/* implicit */int) (short)11754)) >= (((/* implicit */int) (_Bool)1))));
                arr_51 [(unsigned char)13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_4] [i_4] [i_4] [(signed char)10] [i_4] [i_12])) ? (arr_39 [0ULL] [i_12] [i_4]) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_36 [i_4] [(short)8])) ? (-7495394289696891496LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_4] [i_4] [4ULL] [4ULL] [(signed char)9]))))) : (((/* implicit */long long int) ((var_6) << (((var_6) - (1928283275))))))));
            }
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_12 + 1] [i_12 - 1] [i_12 + 3])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_33 [10ULL] [10ULL] [10ULL] [i_4]))))) : (arr_18 [i_12 + 2] [(signed char)15] [12])));
            arr_52 [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)243);
            /* LoopSeq 2 */
            for (short i_17 = 0; i_17 < 17; i_17 += 4) 
            {
                var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7180847457832331881LL)))))) - (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22008)))))));
                var_31 = ((/* implicit */long long int) arr_46 [i_4]);
                arr_55 [i_4] [11LL] [9] [i_4] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) arr_20 [6] [9ULL] [i_17] [i_17])) != (var_9))));
                var_32 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_49 [i_4] [2ULL] [i_17] [i_17] [i_12 + 1])) ^ (arr_35 [(short)8] [i_12 + 2])));
            }
            for (unsigned int i_18 = 0; i_18 < 17; i_18 += 3) 
            {
                arr_59 [i_12 - 1] = ((/* implicit */unsigned long long int) ((arr_35 [i_12 + 2] [i_12 - 1]) * (arr_35 [i_12 + 2] [i_12 + 2])));
                arr_60 [i_4] [i_4] = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_57 [i_12 - 2] [i_18]))));
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 3; i_19 < 16; i_19 += 3) 
                {
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        {
                            var_33 += ((/* implicit */long long int) ((((/* implicit */int) var_1)) + ((~(((/* implicit */int) (short)-13))))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((_Bool) var_7)))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_50 [i_12] [i_12 + 2])) ? (((/* implicit */int) arr_54 [i_19 + 1] [i_4])) : (((/* implicit */int) arr_50 [i_4] [i_12 - 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 17; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 17; i_22 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) (-((+(arr_18 [i_21] [i_18] [(signed char)1])))));
                            var_37 = ((/* implicit */unsigned long long int) arr_36 [i_4] [i_22]);
                        }
                    } 
                } 
            }
        }
        for (short i_23 = 1; i_23 < 16; i_23 += 3) /* same iter space */
        {
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_65 [i_23 + 1] [i_23 + 1] [15ULL] [i_23] [i_23 - 1] [i_23 + 1] [i_23])) * (((((/* implicit */_Bool) arr_65 [i_4] [i_4] [i_23 - 1] [i_23] [i_23 - 1] [6LL] [i_23])) ? (arr_31 [i_4] [i_4] [(unsigned short)12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
            var_39 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_33 [4] [(_Bool)1] [i_23] [i_23])) ? (arr_45 [(unsigned char)13] [(_Bool)1] [i_4] [i_4] [i_4]) : (arr_36 [1] [i_23])))));
        }
        for (short i_24 = 1; i_24 < 16; i_24 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_25 = 0; i_25 < 17; i_25 += 3) 
            {
                for (long long int i_26 = 0; i_26 < 17; i_26 += 3) 
                {
                    for (unsigned char i_27 = 0; i_27 < 17; i_27 += 4) 
                    {
                        {
                            arr_85 [12LL] [i_25] [i_25] = var_4;
                            var_40 = (!(((/* implicit */_Bool) arr_61 [i_24 - 1] [i_24 - 1] [i_25])));
                        }
                    } 
                } 
            } 
            var_41 = ((long long int) ((var_7) <= (arr_45 [0ULL] [(signed char)3] [i_24 + 1] [i_24] [3LL])));
            arr_86 [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)11756))));
            /* LoopNest 2 */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                for (unsigned char i_29 = 3; i_29 < 14; i_29 += 3) 
                {
                    {
                        var_42 += ((/* implicit */int) (((+(9223372036854775807LL))) % (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        var_43 = ((/* implicit */int) arr_45 [7LL] [i_24 + 1] [i_4] [i_29] [i_4]);
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((15ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38)))))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9))))));
                        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_4] [i_29 - 1])) ? (arr_89 [i_4] [i_4] [0LL] [i_4]) : (arr_89 [i_4] [i_24 - 1] [i_28] [i_29 - 3])));
                        var_46 = ((/* implicit */short) (+(((/* implicit */int) arr_50 [i_24 + 1] [i_24 - 1]))));
                    }
                } 
            } 
        }
        var_47 = ((/* implicit */unsigned long long int) ((long long int) 5938304979732035766ULL));
    }
    var_48 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)11754))))) : (((int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_7)));
}
