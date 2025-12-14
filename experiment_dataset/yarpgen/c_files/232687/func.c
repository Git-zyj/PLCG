/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232687
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                arr_11 [i_1] [i_0 - 1] [i_1] [i_2] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32027))) : (var_5))))) ? ((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> ((((((_Bool)1) ? (((/* implicit */int) arr_5 [i_1])) : (1528711894))) - (31))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32027))) : (var_5))))) ? ((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> ((((((((_Bool)1) ? (((/* implicit */int) arr_5 [i_1])) : (1528711894))) - (31))) - (16))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))))));
                var_15 = ((/* implicit */int) ((((((/* implicit */int) (short)13726)) > (((/* implicit */int) (unsigned char)125)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_1]))) : (((((/* implicit */_Bool) (unsigned short)57215)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 1528711894))))));
                var_16 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)13725)) : (((/* implicit */int) (_Bool)1)))))))) / (((int) ((((/* implicit */int) (signed char)-18)) % (((/* implicit */int) (unsigned char)128)))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) | (-1017767362)));
            }
            /* LoopNest 2 */
            for (short i_3 = 3; i_3 < 14; i_3 += 4) 
            {
                for (int i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_1] [i_1] [i_4])), ((-9223372036854775807LL - 1LL))))) + (max((((/* implicit */unsigned long long int) var_6)), (arr_17 [i_4] [i_4] [i_3] [i_1] [i_0])))))) ? (((2147483647) >> (((1528711894) - (1528711894))))) : (((/* implicit */int) min((((((/* implicit */_Bool) 8462220763809041655ULL)) && (((/* implicit */_Bool) (short)127)))), (arr_13 [i_4])))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) > (max((arr_12 [i_1] [i_1] [i_3 + 2] [i_1]), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)1)))))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 1; i_5 < 14; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */int) (~(((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((signed char) 18149024945062983651ULL)))));
                        }
                        for (unsigned char i_6 = 3; i_6 < 14; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) -524562457)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) - (max((var_6), (((/* implicit */unsigned int) arr_4 [i_1] [i_4] [i_1])))))) | (((/* implicit */unsigned int) -1885333656))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1461285251)), (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)79)) * (((/* implicit */int) var_4))))) : (7948017247888182941ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) (_Bool)1)))))))))));
                        }
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)-13730)) <= (-1440507720)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 583866645)))))))) ? (max((arr_9 [i_3 + 1] [i_1] [i_1 - 1] [i_4 - 1]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14442)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((2467502149U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) arr_10 [i_1 + 2] [i_0 + 2] [5ULL] [i_0]))))));
        }
        var_25 = ((/* implicit */unsigned long long int) (((((((-(354540116))) + (2147483647))) << (((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(unsigned short)13])) ? (297719128646567949ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (297719128646567949ULL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1461285261)) ? (524562456) : (var_13)))))))));
        var_26 = ((/* implicit */_Bool) var_14);
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)480))));
            var_28 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) (signed char)-60)), (arr_17 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2])))));
            var_29 = ((/* implicit */unsigned short) -524562456);
        }
        var_30 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    }
    var_31 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)6)))) : (var_10));
    /* LoopSeq 1 */
    for (signed char i_8 = 0; i_8 < 14; i_8 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            arr_35 [i_8] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_2 [i_9]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_9] [(short)8] [i_8] [i_8]))))))));
            arr_36 [i_9] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((18446744073709551615ULL) - (9872538548817500176ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8] [i_9])))));
            var_32 = ((/* implicit */short) (signed char)-72);
            arr_37 [i_8] [i_9] |= ((/* implicit */short) max((((/* implicit */int) ((signed char) arr_19 [i_9] [i_9]))), (((((/* implicit */_Bool) (unsigned short)17513)) ? (((/* implicit */int) min(((short)-30485), (((/* implicit */short) (signed char)72))))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-16922))))))));
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            var_33 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)39035)) <= (((/* implicit */int) var_0))));
            var_34 = ((/* implicit */int) arr_3 [i_8]);
        }
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            var_35 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)243)) : (-234608092)));
            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((14423590581792558581ULL) * (((/* implicit */unsigned long long int) ((0LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))))));
            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) max((-1483986569), (((/* implicit */int) arr_41 [i_8] [i_8] [i_11]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_8] [i_8] [i_11])) ? (5785180309751367118ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_11] [i_8] [i_8]))))))));
        }
        for (int i_12 = 1; i_12 < 10; i_12 += 4) 
        {
            arr_47 [i_8] [i_12 + 1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) > (4294967295U)));
            arr_48 [i_8] [11ULL] |= ((/* implicit */unsigned short) ((unsigned char) (unsigned char)13));
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (-(5568586833580986466LL))))) ? ((-(2525108913655953192LL))) : (((/* implicit */long long int) ((int) ((((-1681266528) + (2147483647))) << (((((((/* implicit */int) (signed char)-20)) + (41))) - (19)))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
        {
            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 10190299316529046186ULL)) && (((/* implicit */_Bool) 8738436864239477959LL)))))));
            arr_53 [i_8] [i_8] [i_8] = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)73)) || (((/* implicit */_Bool) arr_17 [i_13] [i_13] [i_8] [i_8] [i_8])))), (((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_13] [i_13])) || (((/* implicit */_Bool) var_11))))));
        }
        arr_54 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10886)) ? ((~((+(8072656135281657058ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_50 [i_8] [i_8]))))))));
        var_40 = ((/* implicit */long long int) min(((signed char)-30), (((/* implicit */signed char) (_Bool)1))));
    }
    /* LoopSeq 2 */
    for (short i_14 = 1; i_14 < 14; i_14 += 3) 
    {
        var_41 = var_7;
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 16; i_15 += 2) 
        {
            for (signed char i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 3) 
                        {
                            arr_67 [i_14] [i_17] [(unsigned char)12] [i_15] [i_15] [i_14] = ((/* implicit */int) ((unsigned long long int) (unsigned short)0));
                            var_42 = ((/* implicit */long long int) ((((((unsigned long long int) (unsigned short)65513)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)63), (((/* implicit */unsigned char) (signed char)102)))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_14])))));
                            var_43 = ((/* implicit */unsigned short) (~(((unsigned long long int) ((((/* implicit */int) (unsigned short)1024)) >> (((((/* implicit */int) (signed char)-25)) + (41))))))));
                            var_44 = (+(((/* implicit */int) (unsigned short)65535)));
                            var_45 = ((/* implicit */signed char) max(((short)-1), (((/* implicit */short) (_Bool)1))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 4) 
                        {
                            var_46 -= ((/* implicit */unsigned int) (-(((-644240487) / (((/* implicit */int) (signed char)-51))))));
                            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)51)) <= (((/* implicit */int) (short)17602)))))));
                        }
                        var_48 += ((/* implicit */signed char) (unsigned short)1);
                    }
                } 
            } 
        } 
        var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (unsigned short)58688))) << (((((/* implicit */int) arr_25 [(short)10])) - (7535))))))));
    }
    for (short i_20 = 0; i_20 < 25; i_20 += 2) 
    {
        var_50 -= ((/* implicit */unsigned short) 205322616983003242ULL);
        var_51 = min(((unsigned char)93), (((/* implicit */unsigned char) (_Bool)1)));
        var_52 = ((/* implicit */unsigned char) ((unsigned short) (short)13608));
        var_53 = (((_Bool)1) ? (((-2011733526) / (((/* implicit */int) (unsigned short)65535)))) : (((1695710167) - (min((1695710162), (((/* implicit */int) (_Bool)1)))))));
    }
}
