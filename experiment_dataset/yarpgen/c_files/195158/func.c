/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195158
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29828))) : (5542704135351655596ULL)))))) ? (((/* implicit */int) ((((((/* implicit */int) var_2)) / (((/* implicit */int) var_13)))) > (((/* implicit */int) max((((/* implicit */short) var_13)), (var_11))))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), (var_11))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_1 [16ULL]) ? (((/* implicit */int) arr_1 [14ULL])) : (((/* implicit */int) arr_1 [18]))))) <= (var_10)));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_2 + 1] [i_3] = ((/* implicit */unsigned char) ((unsigned int) max((min((arr_3 [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_2] [i_3]))), (((/* implicit */unsigned long long int) arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 2])))));
                        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */int) (unsigned short)28445)) : (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned short)28441))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [(unsigned char)7])) ? (15749667460644814800ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))))))));
                    }
                } 
            } 
            var_19 = var_10;
        }
        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 4) 
        {
            arr_14 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_0] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_0] [11]))) : (arr_9 [i_4 + 2] [i_4 + 1] [i_4] [i_4 - 3] [i_4 + 1])))));
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) -2))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0]))))) : (min((5542704135351655610ULL), (((/* implicit */unsigned long long int) (unsigned short)37073))))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((arr_17 [i_0] [i_0] [14ULL]) <= (((/* implicit */unsigned long long int) arr_24 [i_0] [i_6] [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_6]))))), ((+(((/* implicit */int) (short)4464))))));
                    var_21 |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_6] [i_0]))) : (arr_10 [i_5] [i_5] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_6]), ((unsigned short)28441))))) : (arr_17 [i_0] [i_6] [i_0])))));
                    var_22 = ((/* implicit */unsigned char) ((short) min((((unsigned short) arr_20 [i_0] [i_5] [i_0] [i_5 + 1])), (((/* implicit */unsigned short) var_11)))));
                    var_23 -= arr_20 [i_0] [i_5] [i_0] [i_0];
                }
                for (unsigned short i_8 = 3; i_8 < 20; i_8 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_5] [i_5 + 3] [i_8 - 3] [i_8 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_23 [12ULL] [i_5 - 1] [i_8 - 2] [i_8 - 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((((((/* implicit */_Bool) arr_21 [i_0] [i_5] [i_6] [i_8])) ? (var_10) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max(((_Bool)1), (arr_1 [i_0]))))))));
                    arr_27 [i_0] [i_5] [i_6] [i_8] [i_8] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (short)-4449)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (short)-4441)))) ^ (((((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_6] [i_8]))) ? (((/* implicit */int) min(((unsigned short)39836), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */_Bool) arr_24 [10U] [i_0] [i_0] [i_6] [i_8])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)39))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) arr_4 [i_0]);
                    arr_31 [i_0] [i_5] [i_6] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) (((~(((((/* implicit */int) (unsigned short)37080)) << (((((/* implicit */int) (unsigned short)65535)) - (65525))))))) / (((/* implicit */int) max((((/* implicit */signed char) arr_26 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_0] [i_5] [i_5])), (arr_23 [i_5 - 1] [i_5 - 1] [i_5] [i_5]))))))) : (((/* implicit */unsigned long long int) (((~(((((/* implicit */int) (unsigned short)37080)) << (((((/* implicit */int) (unsigned short)65535)) - (65525))))))) * (((/* implicit */int) max((((/* implicit */signed char) arr_26 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_0] [i_5] [i_5])), (arr_23 [i_5 - 1] [i_5 - 1] [i_5] [i_5])))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 21; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 2; i_11 < 21; i_11 += 2) 
                    {
                        {
                            var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_0] [i_11] [i_10 + 1])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)23887)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_28 [(signed char)12] [i_6] [(signed char)12] [i_11 - 2])) ? (((/* implicit */int) (unsigned short)45378)) : (((/* implicit */int) arr_38 [i_0] [i_5] [i_6] [i_10] [i_11]))))))) : (arr_9 [i_0] [i_5 + 2] [i_6] [(short)20] [i_11])));
                            arr_40 [i_0] [i_10] [i_6] [i_5 + 1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)0)), (13009960714195650113ULL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        {
                            arr_45 [i_13] [6ULL] [i_13] [i_0] [i_13] [i_13] = ((/* implicit */signed char) var_11);
                            var_27 = arr_33 [i_13] [i_0] [i_6] [i_0] [i_0] [i_0];
                            arr_46 [i_0] [i_12] [i_6] [(_Bool)1] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_42 [i_5] [i_5] [i_12] [i_5]))))));
                            var_28 |= ((/* implicit */signed char) (~(arr_39 [i_0] [i_5] [i_6])));
                        }
                    } 
                } 
                arr_47 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(-1019835506)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0]))))))) : (min((arr_37 [i_5] [i_5] [i_5] [i_5 + 3] [i_5] [i_5 + 3]), (arr_37 [i_0] [i_0] [i_5] [i_5 + 3] [i_5] [i_5 + 3])))));
            }
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    {
                        var_30 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_32 [i_16]))));
                        var_31 = ((/* implicit */unsigned short) arr_10 [i_0] [i_14] [i_15] [i_16]);
                        arr_56 [i_0] = ((/* implicit */signed char) ((unsigned char) arr_19 [i_0]));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_17 = 4; i_17 < 21; i_17 += 3) 
            {
                for (int i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_19 = 2; i_19 < 21; i_19 += 2) 
                        {
                            arr_66 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_14] [i_14] [i_14] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_14] [i_18] [i_0] [i_18] [i_17])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) arr_63 [i_0] [i_0] [(unsigned short)17] [(unsigned short)17] [i_0])));
                            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) arr_55 [i_14] [i_17] [i_18] [i_17])))))));
                        }
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_39 [i_0] [i_14] [i_17 - 4]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 3; i_20 < 19; i_20 += 3) 
                        {
                            var_34 += ((/* implicit */unsigned short) ((arr_24 [i_20 + 2] [i_20] [i_14] [i_20] [i_20]) & (arr_24 [i_20 + 3] [18ULL] [i_18] [i_20] [i_20])));
                            var_35 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) (-(((arr_22 [i_18] [i_0] [16] [i_18]) >> (((/* implicit */int) arr_33 [i_14] [i_0] [i_14] [i_14] [i_14] [i_14]))))))) : (((/* implicit */unsigned int) (-(((arr_22 [i_18] [i_0] [16] [i_18]) >> (((((/* implicit */int) arr_33 [i_14] [i_0] [i_14] [i_14] [i_14] [i_14])) + (80))))))));
                            arr_70 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */int) arr_68 [i_14] [i_14] [i_14] [i_17 + 1] [i_17 - 1] [i_0] [i_14])) : (((/* implicit */int) (signed char)22))));
                            var_36 = ((unsigned short) var_8);
                        }
                        var_37 += ((/* implicit */unsigned long long int) arr_23 [i_0] [14ULL] [i_17] [i_18]);
                        /* LoopSeq 2 */
                        for (short i_21 = 1; i_21 < 21; i_21 += 3) 
                        {
                            arr_73 [i_0] [i_0] [i_18] [i_17 - 2] [i_17 - 2] [i_0] [i_0] = arr_55 [i_0] [i_14] [i_17 + 1] [i_14];
                            var_38 = ((/* implicit */long long int) ((((/* implicit */int) arr_41 [i_21 + 1] [i_21 - 1] [i_21 + 1] [i_17 - 3])) << (((((/* implicit */int) arr_41 [i_21 - 1] [i_21] [i_21 + 1] [i_17 - 3])) - (63262)))));
                        }
                        for (unsigned short i_22 = 2; i_22 < 20; i_22 += 2) 
                        {
                            var_39 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_17 - 2] [i_18] [i_17 + 1] [i_17 + 1])) ? (((((/* implicit */_Bool) arr_62 [i_14] [i_22 + 1])) ? (arr_3 [i_0] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_14] [i_14] [i_17] [i_14] [i_14]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_0] [0U] [i_14] [i_14] [i_18] [i_22 + 2])))))));
                            arr_77 [(unsigned short)12] [i_18] [i_0] [i_14] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_17 - 2] [i_22 + 2] [i_22] [i_22])) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) % (arr_25 [i_0] [i_14] [i_17] [i_18]))))));
                        }
                    }
                } 
            } 
            arr_78 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)24377))));
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) (signed char)3)))) : ((-(var_9)))));
            /* LoopNest 2 */
            for (unsigned short i_23 = 0; i_23 < 22; i_23 += 2) 
            {
                for (unsigned int i_24 = 2; i_24 < 21; i_24 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_25 = 1; i_25 < 20; i_25 += 2) 
                        {
                            arr_89 [i_0] [i_24] [i_24] [i_24] [i_24 - 2] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1094202667958657452ULL)) ? (arr_22 [i_24 - 2] [i_0] [i_24 + 1] [i_25 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_80 [i_0] [i_0]))))));
                            var_41 += ((/* implicit */unsigned int) 11464133819622583845ULL);
                        }
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_80 [i_0] [i_0])))) ? (((/* implicit */int) arr_20 [i_24 - 1] [i_0] [i_14] [i_0])) : (((/* implicit */int) arr_83 [i_24] [i_24 + 1] [i_24] [i_0] [i_24]))));
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((((/* implicit */_Bool) arr_19 [i_23])) ? (arr_19 [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_14] [i_14] [i_24])))))));
                        var_44 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) (unsigned short)65535))));
                        var_45 = ((/* implicit */signed char) var_6);
                    }
                } 
            } 
        }
        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 767271334)) ? (((/* implicit */int) ((_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)8]))) : (((/* implicit */int) var_14))));
    }
    for (signed char i_26 = 0; i_26 < 22; i_26 += 1) /* same iter space */
    {
        var_47 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (arr_79 [(short)10] [(short)10]) : (arr_79 [(signed char)6] [(signed char)6]))) << (((((((/* implicit */_Bool) arr_13 [i_26] [(unsigned char)4] [i_26])) ? (arr_79 [(unsigned char)8] [i_26]) : (arr_76 [i_26] [i_26] [i_26] [i_26] [i_26]))) - (3240652805948312942ULL)))));
        var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) arr_42 [i_26] [i_26] [i_26] [i_26]))));
    }
    var_49 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_11)))) : (((((/* implicit */long long int) var_12)) ^ (-3980544605065572904LL))))), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
    var_50 = ((/* implicit */short) var_8);
}
