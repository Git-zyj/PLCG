/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237189
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
    var_19 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) var_5);
        var_21 = ((/* implicit */unsigned char) (-(arr_2 [i_0])));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) & (((/* implicit */int) (unsigned char)168)))))));
        var_23 = ((/* implicit */unsigned int) (~((~(var_17)))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_24 = (_Bool)1;
        arr_9 [(unsigned char)4] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        arr_12 [i_3] = ((/* implicit */int) arr_6 [(_Bool)1] [i_3]);
        var_25 = arr_2 [i_3];
        var_26 = ((/* implicit */long long int) 1152851672);
        var_27 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (var_9)))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_5))))))));
    }
    for (unsigned char i_4 = 4; i_4 < 20; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_28 = arr_14 [(unsigned char)15];
                            arr_25 [i_4] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) max((arr_17 [i_4]), (((/* implicit */long long int) ((((/* implicit */int) (!(var_1)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)14))))))))));
                            var_29 = ((/* implicit */unsigned char) arr_22 [i_7] [12LL] [(unsigned short)20] [i_7] [i_8] [i_8]);
                        }
                        var_30 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_6] [i_7] [i_7] [i_7]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_4 + 1])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_4])))))))) && (((/* implicit */_Bool) (~(((arr_32 [23LL] [(unsigned char)0] [i_10]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            var_32 = ((/* implicit */_Bool) -1152851673);
                            var_33 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_5] [i_5] [i_10] [i_11]))) < (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((-7790744581441507666LL) + (7790744581441507692LL)))))) ? (min((arr_29 [i_9] [i_5] [i_9] [i_10] [i_11]), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 23; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) arr_21 [6U] [i_5] [i_12] [i_13] [i_5] [(_Bool)1]);
                            var_35 = ((/* implicit */_Bool) arr_22 [i_4] [i_5] [i_4] [i_4] [i_4] [i_4]);
                            var_36 |= ((/* implicit */long long int) (_Bool)1);
                            arr_42 [i_4] [i_4] [i_12] [i_13] [i_4] [i_5] = ((/* implicit */long long int) min((((2047089173U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5] [i_13] [i_14]))))), (((/* implicit */unsigned int) (~(-1152851689))))));
                            var_37 = arr_41 [i_12 - 1] [i_12 - 1] [i_12 - 1] [(unsigned char)8] [i_14] [i_14] [i_14];
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1))))))) ? ((-(((/* implicit */int) (unsigned char)185)))) : (((/* implicit */int) ((unsigned short) (+(0ULL)))))));
            arr_46 [0ULL] [i_15] [(_Bool)1] = ((/* implicit */int) (~(arr_18 [i_4] [15LL] [i_15] [i_15])));
            arr_47 [i_15] = ((/* implicit */_Bool) (~(((unsigned long long int) arr_33 [i_4 + 4] [i_15] [i_4]))));
        }
        /* LoopNest 3 */
        for (unsigned char i_16 = 1; i_16 < 22; i_16 += 1) 
        {
            for (unsigned int i_17 = 1; i_17 < 23; i_17 += 4) 
            {
                for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) min((max((arr_30 [i_18] [i_16 + 1] [i_17] [i_18] [9LL]), (((/* implicit */int) (unsigned char)83)))), (((/* implicit */int) arr_48 [i_16]))));
                        arr_55 [i_4] [i_4] [i_17] [i_17] [i_18] = ((/* implicit */unsigned int) -7790744581441507666LL);
                        arr_56 [i_4] [i_4] [i_4] [i_18] [i_4] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((3865727968U) >> (((arr_39 [0LL] [i_18] [i_17] [i_16] [23LL]) - (11942020036166079700ULL)))))) && (var_9)));
                        arr_57 [20LL] [20LL] [i_17] [i_18] [i_17] [i_17] = ((/* implicit */unsigned long long int) var_10);
                        var_40 = ((/* implicit */unsigned char) (-(arr_51 [i_4] [i_16] [(_Bool)1] [i_17])));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_41 = ((/* implicit */unsigned long long int) var_3);
        /* LoopNest 3 */
        for (int i_20 = 2; i_20 < 23; i_20 += 1) 
        {
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                for (unsigned char i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    {
                        arr_66 [i_19] [i_20] [i_20] [i_22] [(_Bool)1] |= (~(var_8));
                        /* LoopSeq 2 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_67 [i_20] [1ULL] [(unsigned char)9] [i_20] [i_20])))) | (((/* implicit */int) arr_67 [i_19] [(unsigned char)5] [(_Bool)1] [i_22] [i_20]))))) & (((((/* implicit */_Bool) var_11)) ? (arr_58 [i_21 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_69 [7U]))) <= (var_13)))))))));
                            var_43 = ((/* implicit */_Bool) arr_65 [10U] [i_20] [i_21] [10U]);
                        }
                        for (unsigned char i_24 = 0; i_24 < 25; i_24 += 2) 
                        {
                            var_44 |= ((/* implicit */long long int) ((((((/* implicit */int) arr_69 [i_19])) & (((/* implicit */int) arr_69 [i_20 + 2])))) != (((/* implicit */int) max((((/* implicit */unsigned char) arr_70 [i_22])), (arr_63 [i_19] [i_22] [i_24]))))));
                            var_45 = ((/* implicit */unsigned short) var_2);
                            var_46 = ((/* implicit */long long int) arr_61 [i_21]);
                            var_47 = var_2;
                            var_48 = ((/* implicit */unsigned int) var_2);
                        }
                    }
                } 
            } 
        } 
    }
    var_49 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((18446744073709551615ULL) - (18446744073709551599ULL)))));
}
