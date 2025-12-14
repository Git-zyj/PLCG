/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216374
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] [i_0] [i_2 - 1] |= ((/* implicit */short) (((+(var_12))) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))) : (arr_0 [i_1]))))));
                        arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((long long int) -6680839999847885204LL)));
                        arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_8)))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_4] [(short)16] [i_4 + 3])) ? (((/* implicit */int) arr_8 [i_0] [i_4] [17LL] [i_4 + 3])) : (((/* implicit */int) (signed char)-116))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_20 = (signed char)-103;
                        var_21 = ((/* implicit */long long int) arr_16 [i_0] [i_4 + 3] [i_6]);
                    }
                    arr_21 [i_0] [i_4 + 2] = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_4] [i_5]))) % (var_4)))));
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
    {
        var_22 += ((/* implicit */int) (short)12540);
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_14 [i_7]))));
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                for (long long int i_11 = 2; i_11 < 15; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        {
                            arr_40 [i_12] [i_11] [i_9] [i_9] [i_9] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) arr_17 [i_9] [i_8]))));
                            arr_41 [i_9] [i_11 + 1] = ((/* implicit */short) (-(((/* implicit */int) (short)-18121))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_35 [i_8] [(unsigned char)8] [i_8] [i_8]))));
            arr_42 [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((long long int) var_8));
            var_25 |= ((/* implicit */unsigned char) (-(arr_38 [(_Bool)0])));
        }
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 15; i_13 += 4) 
        {
            for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                {
                    arr_49 [i_8] = ((/* implicit */long long int) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))), ((~(((/* implicit */int) ((unsigned short) var_2)))))));
                    /* LoopSeq 3 */
                    for (short i_15 = 2; i_15 < 14; i_15 += 4) 
                    {
                        arr_54 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (-(min(((-(((/* implicit */int) arr_46 [i_15] [i_13 + 1] [i_14])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
                        arr_55 [i_8] [i_8] [i_8] [i_15] = ((/* implicit */long long int) (unsigned short)0);
                        arr_56 [i_8] = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 2147483647)) : (3500855379605403451LL)))), (10100043972284326815ULL))));
                        arr_57 [i_8] [i_13 - 1] [i_14] [i_14] = ((/* implicit */int) max((var_16), (max((var_2), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        arr_60 [i_14] [i_13] [i_14] [i_16] [i_8] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) (unsigned char)255))) & (((long long int) ((9223372036854775793LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_14] [i_13] [i_16]))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
                        {
                            arr_64 [i_8] [i_8] [(unsigned char)7] [(unsigned char)7] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((unsigned int) ((signed char) var_2)));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((((/* implicit */int) arr_29 [i_13 + 1])) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                        }
                        for (long long int i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                        {
                            arr_67 [i_8] [i_8] [(_Bool)1] [i_16] [(_Bool)1] [i_14] = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_59 [i_8] [i_13] [i_14] [i_14])), (-9223372036854775794LL)))) ? (min((((/* implicit */int) arr_65 [i_8] [i_13] [i_14] [i_14] [i_18])), (var_11))) : (((/* implicit */int) ((unsigned short) var_15))))), (((/* implicit */int) ((_Bool) ((short) arr_9 [i_14]))))));
                            arr_68 [i_8] [i_13] [i_14] [i_13] [(unsigned short)6] [i_14] = ((/* implicit */unsigned char) (+(arr_14 [i_8])));
                            arr_69 [i_8] [i_8] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_16)), (arr_34 [i_18])))), (((unsigned long long int) (unsigned short)65535)))), (((/* implicit */unsigned long long int) ((_Bool) var_1)))));
                            var_27 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_8] [i_14] [i_16] [i_18])) ? (((/* implicit */unsigned long long int) arr_19 [i_8] [11LL] [i_8])) : (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8)))) : (((var_0) ? (((/* implicit */unsigned long long int) arr_63 [i_8])) : (arr_23 [i_8] [i_14])))))));
                        }
                        var_28 = arr_3 [i_16] [i_8] [i_8];
                        arr_70 [i_8] [i_8] [i_16] [i_16] [7U] [i_14] = ((/* implicit */long long int) var_10);
                    }
                    for (unsigned char i_19 = 0; i_19 < 16; i_19 += 4) 
                    {
                        arr_73 [i_8] [i_13] [i_13] [i_14] [10] = ((/* implicit */signed char) (+((-(((/* implicit */int) (unsigned char)0))))));
                        arr_74 [i_8] [i_14] [i_14] [i_14] = ((/* implicit */short) arr_31 [i_19] [i_19]);
                    }
                    var_29 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) arr_7 [i_14] [i_8] [i_14]))), ((-(min((((/* implicit */int) (unsigned char)96)), (arr_66 [i_8] [i_8] [i_14])))))));
                }
            } 
        } 
    }
    var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))));
}
