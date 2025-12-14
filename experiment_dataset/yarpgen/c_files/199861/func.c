/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199861
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
    var_12 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_12 [i_0] [i_1] [i_0]) : (arr_12 [i_0 - 1] [i_1] [i_0])));
                            var_14 = ((/* implicit */signed char) (-(var_1)));
                            var_15 = ((/* implicit */int) var_3);
                        }
                    } 
                } 
            } 
            var_16 -= ((/* implicit */unsigned short) (+(18053503462988276379ULL)));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-5020759351827019677LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_1 [(signed char)8])))) : (arr_4 [i_0] [i_1] [2])));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_5 [(unsigned short)7] [i_1] [i_0]))));
        }
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_19 += ((/* implicit */unsigned short) ((75424329668231798LL) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_5] [i_0 - 1] [i_5] [i_5])))));
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)39297)) : (((/* implicit */int) (unsigned char)231))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_5]))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (short i_8 = 2; i_8 < 10; i_8 += 4) 
                {
                    {
                        var_20 = (~(((/* implicit */int) var_5)));
                        /* LoopSeq 1 */
                        for (int i_9 = 2; i_9 < 10; i_9 += 2) 
                        {
                            var_21 |= ((/* implicit */long long int) ((unsigned short) ((unsigned char) var_9)));
                            arr_28 [i_0] [i_6] [i_7] [i_6] [4] = ((/* implicit */unsigned short) arr_19 [i_0]);
                        }
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_23 [i_0])) && (((/* implicit */_Bool) arr_26 [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_22 [i_6] [i_6]) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1])) || (((/* implicit */_Bool) (unsigned char)46))));
        }
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((int) arr_19 [i_0])))));
        var_25 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) arr_23 [i_0])))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
    {
        arr_31 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15816394060645623833ULL)) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)135)), ((unsigned short)39297))))));
        var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) 16515072U)) ^ (-4611689756590351479LL)));
        var_27 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)0))));
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)100)) | (((/* implicit */int) var_2))))))) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_30 [i_10])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_9))))))));
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 16; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)15), (((/* implicit */unsigned short) (_Bool)1)))))) & (((unsigned long long int) arr_30 [i_12])))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)39)) | (((/* implicit */int) var_7))))))))))));
                        var_30 = min((((((/* implicit */_Bool) arr_34 [i_10] [i_11 - 1])) ? (((/* implicit */int) arr_34 [(short)16] [i_11 + 1])) : (((/* implicit */int) arr_34 [8ULL] [i_11 + 2])))), ((+(((/* implicit */int) arr_34 [(unsigned char)4] [i_11 + 2])))));
                        /* LoopSeq 3 */
                        for (signed char i_14 = 1; i_14 < 17; i_14 += 2) 
                        {
                            var_31 += ((/* implicit */unsigned long long int) arr_36 [i_10] [i_13] [i_10]);
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (-(min((4253423818493114388LL), (((/* implicit */long long int) arr_29 [i_11 + 1])))))))));
                            var_33 &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (unsigned short)4))))));
                            var_34 = ((unsigned char) 1770183081);
                        }
                        for (short i_15 = 4; i_15 < 16; i_15 += 4) 
                        {
                            arr_46 [7] [i_11] [i_12] [i_11] [i_13] [17ULL] [i_11] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) (signed char)-1)))));
                            var_35 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)34174)) >= (((/* implicit */int) (unsigned short)34823))));
                            var_36 = ((/* implicit */unsigned int) var_4);
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            arr_50 [5ULL] [5ULL] [i_12] [i_12] [5ULL] [(_Bool)1] = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) var_7)))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_44 [(short)6] [i_11] [i_13] [i_16])) != (((/* implicit */int) arr_35 [i_11] [i_13] [14ULL])))) ? ((+(((/* implicit */int) arr_35 [i_11] [i_11] [i_11])))) : (((/* implicit */int) min(((unsigned short)57049), (((/* implicit */unsigned short) (signed char)110)))))))))))));
                            arr_51 [i_10] [i_10] [i_12] [(unsigned short)7] [i_10] [i_10] [(signed char)14] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((signed char) var_1))), (arr_35 [i_10] [i_11] [i_16])))) ? (((/* implicit */long long int) min((((((/* implicit */int) (signed char)-10)) ^ (((/* implicit */int) (short)-19291)))), (((((/* implicit */_Bool) (unsigned char)179)) ? (arr_38 [(_Bool)1] [i_11] [(_Bool)1] [i_13]) : (((/* implicit */int) var_10))))))) : (min((((/* implicit */long long int) 3890584291U)), (4611689756590351480LL)))));
                            arr_52 [i_10] [i_10] [i_12] [i_12] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-17))))) / (((unsigned long long int) arr_34 [i_11 + 2] [i_11 + 1]))));
                        }
                        var_38 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) (short)-32748)) : (arr_49 [i_10])))) ? ((~(((/* implicit */int) arr_47 [i_10] [i_10] [i_10] [i_11 + 1] [i_12] [i_12] [i_11 + 1])))) : (((/* implicit */int) var_11)))) == (arr_49 [i_10])));
                        var_39 &= ((/* implicit */unsigned short) min((((((/* implicit */int) var_2)) < (((/* implicit */int) arr_45 [i_10] [i_11 + 2] [i_11 + 1] [i_11] [i_11 - 1])))), (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_48 [(signed char)0] [i_10] [i_11] [0] [i_13] [(unsigned char)11])) : (((/* implicit */int) (short)-11145))))) && (((/* implicit */_Bool) 1U))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_17 = 0; i_17 < 11; i_17 += 2) 
    {
        var_40 &= ((/* implicit */long long int) ((((/* implicit */int) (signed char)110)) % (-1893446856)));
        var_41 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)65535))) - (((/* implicit */int) ((short) arr_41 [i_17])))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_57 [i_18] [i_18] = ((/* implicit */signed char) arr_37 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]);
        var_42 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_18])) || (((/* implicit */_Bool) (unsigned short)43214))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)14391)) : (((/* implicit */int) var_9))))));
    }
}
