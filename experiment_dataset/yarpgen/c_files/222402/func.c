/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222402
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
    var_15 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3559988660450232829ULL)) ? (-1704897743) : (595951992)))));
            var_16 = ((/* implicit */unsigned long long int) (unsigned short)64284);
        }
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                var_17 = ((/* implicit */unsigned char) (~((~(arr_13 [i_0 + 3] [i_0 + 2])))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)55898))), (((/* implicit */unsigned short) arr_12 [i_0] [i_3]))))) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_3])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned char)108))));
                var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((444028225U), (((/* implicit */unsigned int) (unsigned short)65533))))))) ? (((/* implicit */long long int) ((/* implicit */int) (((+(var_13))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0 + 1]))))))) : (var_10)));
            }
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) arr_10 [i_5 - 1]);
                    var_21 = var_2;
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (short)-7446)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)27174)) : (-1274574333))) : (((/* implicit */int) arr_12 [i_0] [i_0 - 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) (_Bool)1))))) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) max((arr_14 [i_0 + 1] [i_0] [i_5 - 2]), (arr_14 [i_0 + 1] [i_4] [i_5 - 2])))))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)162)) == (((/* implicit */int) (_Bool)1)))))) | (min((0ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))))))));
                }
                /* LoopSeq 1 */
                for (short i_6 = 4; i_6 < 14; i_6 += 4) 
                {
                    var_24 = ((/* implicit */short) min(((((_Bool)1) ? (var_0) : (((/* implicit */long long int) arr_13 [i_6 - 4] [i_0 - 1])))), (((/* implicit */long long int) min((arr_5 [i_0 + 1] [i_6 + 2]), (arr_5 [i_0 + 2] [i_6 + 2]))))));
                    var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) var_8))))) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_7))));
                    var_26 = var_9;
                }
                arr_20 [i_4] [i_2] [i_0] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [i_4] [(unsigned char)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 3] [i_2] [i_4]))) : (arr_13 [10] [i_4])))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (var_13)))) : (min((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) | (var_10))))));
                arr_21 [i_0] [i_4] [(signed char)8] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)162)) ? (9134132707391544269ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120)))))));
                arr_22 [i_4] [i_2] [i_4] = ((/* implicit */unsigned short) var_5);
            }
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                var_27 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_19 [i_0] [i_0 + 4] [i_0 + 3] [i_0 - 2] [i_0])) ? (((/* implicit */unsigned int) arr_19 [i_0] [i_0 + 3] [i_0] [i_0 + 4] [13LL])) : (arr_8 [i_0 + 2] [i_0 + 4])))));
                var_28 = ((/* implicit */_Bool) max((var_28), (((((/* implicit */_Bool) (-(arr_16 [i_0] [(unsigned short)2] [(unsigned short)2] [i_0 - 2] [(unsigned short)6])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) max((arr_10 [i_2]), (arr_23 [i_2] [i_2])))) : (((/* implicit */int) var_11)))))))));
                arr_25 [i_0] [i_0 + 3] [(unsigned char)12] = ((/* implicit */unsigned char) arr_17 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 4] [i_0 - 2]);
            }
            var_29 += ((/* implicit */unsigned char) ((min((((/* implicit */long long int) arr_1 [i_0] [i_0 + 2])), (var_3))) < (min((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) var_11)), (var_2)))))));
            /* LoopSeq 4 */
            for (long long int i_8 = 4; i_8 < 13; i_8 += 2) 
            {
                var_30 = ((/* implicit */unsigned short) var_4);
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1229616895U)) || (((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8 - 2] [i_8 - 2] [i_0]))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (var_0))))))))));
            }
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                var_32 = ((/* implicit */unsigned char) (((((+(((/* implicit */int) (signed char)46)))) <= (((/* implicit */int) ((-533653407404523851LL) < (var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) << (((((var_6) + (1257364600))) - (6)))))) <= (var_3))))) : (arr_29 [i_0] [i_2])));
                var_33 *= ((/* implicit */signed char) (((~(((/* implicit */int) min((((/* implicit */short) (unsigned char)145)), (var_5)))))) * (((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 2] [i_0 + 3] [i_0]))));
            }
            for (short i_10 = 1; i_10 < 14; i_10 += 1) /* same iter space */
            {
                arr_36 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-15), ((signed char)31)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-47)), (741632905)))) != (((arr_18 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_2]))) : (17800754250879341150ULL))))))) : (arr_13 [i_0 - 1] [i_10 + 2])));
                arr_37 [(signed char)3] [i_10] = ((/* implicit */unsigned int) var_10);
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    arr_40 [i_0] [i_0] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) arr_38 [i_11] [i_10 - 1] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_38 [i_10] [i_10 + 1] [i_0 + 4]))));
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((-1663270500506322349LL) + (1663270500506322360LL))))))));
                    var_35 = ((/* implicit */unsigned int) min((var_35), (2465008219U)));
                }
            }
            /* vectorizable */
            for (short i_12 = 1; i_12 < 14; i_12 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_0] [i_2] [i_12])) >> (((((arr_5 [i_12 - 1] [i_0]) ? (var_0) : (((/* implicit */long long int) var_6)))) + (1257364595LL)))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        {
                            arr_48 [i_0] [i_2] [i_12] [i_13] [i_12] [i_13] [i_14] = arr_0 [i_0] [i_2];
                            var_37 = ((/* implicit */short) arr_15 [i_12 + 1] [i_0 + 2] [i_12] [i_13]);
                        }
                    } 
                } 
                arr_49 [i_0 + 3] [i_0] [i_0 + 2] [i_12] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_0 + 3] [i_0 - 1]))));
                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2]))));
            }
            var_39 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_3) : (var_2)))) * ((-(arr_44 [i_0] [i_0] [i_0] [i_2]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [(signed char)0] [i_2] [i_2])) ? (((/* implicit */int) min((arr_14 [i_0] [i_2] [i_2]), ((_Bool)1)))) : ((-(((/* implicit */int) var_7)))))))));
            var_40 = ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) ((unsigned char) 12002017350720385329ULL))) - (19))))), ((~(((/* implicit */int) min((((/* implicit */short) var_9)), (arr_12 [i_0] [i_2]))))))));
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                for (int i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    {
                        var_41 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_0] [i_0] [i_0 + 4])) ^ (((/* implicit */int) arr_31 [i_0] [i_0] [i_0]))));
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_0 + 3])))))));
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 - 2] [i_0 + 2])) ? (arr_13 [i_0 + 4] [i_0 + 1]) : (arr_13 [i_0 + 4] [i_0 - 1])));
                        var_44 = ((/* implicit */unsigned long long int) arr_54 [i_0 - 1] [i_15]);
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) arr_33 [i_0] [4U]))));
            arr_56 [15ULL] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_0] [i_0] [10U])))))) <= (var_13)));
        }
        /* vectorizable */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_59 [(_Bool)1] = ((/* implicit */int) ((arr_39 [i_0 - 2] [i_0] [i_0] [i_0 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) var_14)))));
            /* LoopSeq 2 */
            for (signed char i_19 = 0; i_19 < 16; i_19 += 1) 
            {
                var_46 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 8182839440779763885LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) : (-10LL)))));
                var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)7464))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_58 [i_18] [i_0])));
                var_48 += var_1;
            }
            for (unsigned int i_20 = 0; i_20 < 16; i_20 += 4) 
            {
                var_49 = ((/* implicit */long long int) arr_18 [i_0] [i_18]);
                arr_65 [i_20] [i_18] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (unsigned short)60946))));
                arr_66 [i_0 - 1] [i_0 - 1] [9LL] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_55 [i_0 - 2] [i_18] [i_18] [(short)5]))));
                var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_52 [i_0] [i_0 + 2] [i_0] [i_0])))))));
            }
        }
    }
    var_51 = ((/* implicit */_Bool) (unsigned short)4587);
    var_52 = ((/* implicit */unsigned int) 13957977875864561516ULL);
}
