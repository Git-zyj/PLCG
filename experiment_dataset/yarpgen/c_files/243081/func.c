/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243081
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */int) ((short) arr_3 [(unsigned char)5] [i_1] [i_1]))) % (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-28548))))))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)40)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */int) arr_5 [i_2] [i_5]);
                        arr_16 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) max(((_Bool)1), (var_17))))));
                        arr_17 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) min((((arr_14 [i_2] [i_3] [i_4] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) (~(((int) (short)-32750)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_12))));
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_5)))))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (min((((var_7) * (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_15))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned char)7)))))))));
            var_24 |= ((/* implicit */short) ((signed char) ((var_16) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            arr_25 [(signed char)4] [i_7] [i_7] &= ((/* implicit */int) ((unsigned char) max((((/* implicit */short) (unsigned char)189)), ((short)32764))));
            arr_26 [i_2] = ((/* implicit */unsigned char) max((max(((-(((/* implicit */int) (unsigned short)4427)))), (((/* implicit */int) var_6)))), (((/* implicit */int) var_3))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_7] [i_7])) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) ((_Bool) min((var_3), (((/* implicit */short) (signed char)14)))))))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_7))));
                arr_32 [i_2] [i_8] [i_2] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_8 [i_2]))))));
            }
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                var_27 = ((/* implicit */int) ((unsigned short) ((short) (unsigned char)194)));
                /* LoopSeq 1 */
                for (int i_11 = 2; i_11 < 19; i_11 += 1) 
                {
                    arr_38 [i_2] [i_10] [i_2] [i_2] [i_2] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((long long int) 0U))) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) var_6)))));
                    arr_39 [i_10] [i_8] [i_10] [i_11 + 3] |= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)14))));
                }
            }
            for (short i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) var_2))));
                arr_42 [i_2] [(unsigned short)14] = ((/* implicit */unsigned long long int) min((max((var_2), (((/* implicit */int) arr_12 [i_2])))), (((/* implicit */int) (!(arr_12 [17U]))))));
                arr_43 [i_2] = ((/* implicit */short) (unsigned char)252);
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    {
                        arr_49 [i_2] [i_8] [i_13] [(_Bool)1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_12 [i_2])) : (((/* implicit */int) (short)32256)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
                        {
                            var_29 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_2]))));
                            var_30 = ((/* implicit */unsigned short) (signed char)-119);
                        }
                        for (signed char i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
                        {
                            arr_56 [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_23 [i_2])) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) (unsigned char)95))))));
                            arr_57 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = min((((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_2] [(short)19] [i_14] [i_2]))) > (arr_29 [i_2] [1] [i_2] [i_14]))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (4970355531537376481ULL))))))), (var_10));
                            var_31 += ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) var_8)) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15268))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) (unsigned char)169)) ? (250186589) : (((/* implicit */int) (unsigned short)15268)))))))));
                        }
                        /* vectorizable */
                        for (signed char i_17 = 0; i_17 < 22; i_17 += 1) /* same iter space */
                        {
                            arr_60 [i_2] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (7498512007419623876LL) : (((/* implicit */long long int) ((/* implicit */int) (short)30872))))) == (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
                            var_32 -= ((/* implicit */short) ((unsigned short) 1526663202U));
                            var_33 = ((/* implicit */int) max((var_33), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [i_2] [(unsigned char)7] [i_13] [i_2] [(unsigned char)13]))))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) var_4))))));
                        }
                        arr_61 [9ULL] [i_2] [18] = ((/* implicit */unsigned int) var_2);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_18 = 2; i_18 < 21; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 22; i_19 += 4) 
                {
                    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 3) 
                    {
                        {
                            arr_70 [i_2] [i_2] [i_8] [i_18] [(short)21] [i_2] = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))), (7434717615217612400ULL));
                            var_34 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_35 [i_8] [14U] [i_18 - 2] [(short)6] [i_18 - 1]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_22 = 1; i_22 < 20; i_22 += 4) 
            {
                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 61898547)), (min((min((0ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((var_2), (251727126)))))))))));
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(arr_14 [i_2] [i_2] [(short)0] [i_22 - 1])))) - (6229386039671887483ULL)));
            }
            arr_77 [i_2] [i_2] [(signed char)21] = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) var_16)) ? (5520506793847324517ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))), (((/* implicit */unsigned long long int) (unsigned char)165))))));
        }
        for (unsigned char i_23 = 0; i_23 < 22; i_23 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_24 = 0; i_24 < 22; i_24 += 3) 
            {
                var_37 = ((/* implicit */unsigned char) var_8);
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-12)) || (((/* implicit */_Bool) (unsigned short)16582)))))));
            }
            var_39 = ((/* implicit */long long int) max((((unsigned short) arr_8 [i_2])), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4603))) == (6055743680339222023ULL))))));
            arr_84 [i_2] [i_2] [i_23] = ((/* implicit */int) var_7);
            arr_85 [i_2] [i_23] = ((/* implicit */short) max((((unsigned long long int) (unsigned char)115)), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)43)))));
        }
    }
    for (unsigned char i_25 = 0; i_25 < 22; i_25 += 1) 
    {
        arr_88 [i_25] = ((/* implicit */unsigned short) var_1);
        var_40 = ((((/* implicit */int) var_1)) % (((/* implicit */int) min(((unsigned short)50267), (((/* implicit */unsigned short) (unsigned char)8))))));
        arr_89 [i_25] [i_25] = ((/* implicit */unsigned short) ((unsigned int) ((short) 524287U)));
    }
    for (signed char i_26 = 3; i_26 < 14; i_26 += 1) 
    {
        arr_93 [i_26] = ((/* implicit */long long int) arr_48 [i_26] [i_26] [i_26] [i_26] [(signed char)0] [i_26]);
        var_41 = ((/* implicit */short) ((max((arr_30 [i_26 - 2]), (arr_30 [i_26 - 1]))) < (max((((/* implicit */int) (short)32767)), (arr_30 [i_26 - 1])))));
    }
}
