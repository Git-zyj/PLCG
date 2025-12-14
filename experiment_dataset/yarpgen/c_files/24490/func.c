/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24490
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
    var_12 = max(((unsigned char)43), ((unsigned char)255));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_1 [0]))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)24))));
                        var_14 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (_Bool)1))))));
                        arr_13 [i_0] = ((/* implicit */unsigned short) (unsigned char)198);
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_15 = (!(((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_4] [i_1] [i_1] [i_1])));
                            arr_19 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_2] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_1] [i_5] [i_5])))))));
                            var_16 = ((/* implicit */signed char) (+(((/* implicit */int) (!(arr_11 [i_0] [i_1] [i_0] [i_1]))))));
                        }
                        for (signed char i_6 = 1; i_6 < 18; i_6 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6] [i_6 + 1] [i_6] [i_6]))));
                            var_18 = ((/* implicit */short) (!(((((/* implicit */int) arr_12 [(_Bool)0] [i_1] [(_Bool)0] [i_4] [(unsigned char)16])) == (arr_1 [i_6])))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)213)) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) 6755399441055744LL)))))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) 
                        {
                            arr_26 [(unsigned char)20] [i_1] [i_0] [i_4] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((((/* implicit */int) (short)-3072)) == (((/* implicit */int) (_Bool)1))))));
                            arr_27 [i_7 - 1] [i_1] [17LL] [i_1] [i_1] [17LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)213))));
                        }
                        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) arr_17 [i_1] [i_4])))));
                        arr_28 [i_0] [i_0] = ((/* implicit */int) ((signed char) (-(((/* implicit */int) (short)-5362)))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 19; i_8 += 1) 
                    {
                        var_21 |= ((/* implicit */_Bool) ((((arr_25 [i_0] [i_2] [i_0] [i_1] [(unsigned char)9] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_1]))))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-116))))));
                        arr_33 [i_8] [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_8])) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (short)5351))))));
                    }
                }
            } 
        } 
        arr_34 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 1; i_10 < 19; i_10 += 2) 
            {
                for (unsigned char i_11 = 4; i_11 < 18; i_11 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) (-(arr_7 [i_11 - 3] [i_10 - 1] [i_10 - 1])));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (short)0))));
                    }
                } 
            } 
            arr_41 [i_0] = ((/* implicit */short) (((~(arr_4 [i_9]))) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_0] [i_9] [i_0]))))));
        }
        for (int i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            var_24 = ((((/* implicit */_Bool) arr_35 [i_0])) ? (arr_4 [i_0]) : (((/* implicit */long long int) arr_7 [i_12] [i_12] [i_12])));
            /* LoopSeq 3 */
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                arr_48 [i_13] [i_12] [i_12] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)-27195))))));
                /* LoopSeq 2 */
                for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), ((-((-(((/* implicit */int) (unsigned char)11))))))));
                        var_26 = ((/* implicit */unsigned char) (!((_Bool)1)));
                    }
                    /* LoopSeq 2 */
                    for (int i_16 = 1; i_16 < 20; i_16 += 2) 
                    {
                        arr_55 [i_0] [i_0] [i_0] [i_12] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_16 + 1] [i_16] [i_16 + 1] [i_16 + 1] [i_16]))) / (((((/* implicit */_Bool) (unsigned char)155)) ? (1388698448866980792LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_14] [i_14])))))));
                        arr_56 [i_0] [i_12] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_14] [i_12]))));
                    }
                    for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)42))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)216))))))))));
                        var_29 = (((+(0))) * (((/* implicit */int) arr_11 [i_0] [i_0] [i_13] [i_0])));
                        var_30 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (short)14))));
                    }
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_31 -= ((((/* implicit */int) ((unsigned short) -1))) != (((/* implicit */int) (_Bool)1)));
                    var_32 = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [8U] [8U]))));
                }
            }
            for (signed char i_19 = 0; i_19 < 21; i_19 += 3) 
            {
                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)158))))) >= (((long long int) arr_7 [i_0] [i_0] [(_Bool)1])))))));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    for (unsigned char i_21 = 2; i_21 < 20; i_21 += 2) 
                    {
                        {
                            var_34 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_21] [i_21 - 2] [i_21 - 1] [i_21 - 2]))) < (arr_4 [i_21 - 2])));
                            arr_73 [(_Bool)1] [(_Bool)1] [i_12] [i_21] [i_21] = ((/* implicit */unsigned short) ((-1627660482) > (((/* implicit */int) (unsigned char)63))));
                            arr_74 [i_0] [i_12] [i_0] [i_21] = ((/* implicit */unsigned short) (_Bool)1);
                            var_35 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) != (((/* implicit */int) (short)14))));
                        }
                    } 
                } 
            }
            for (long long int i_22 = 0; i_22 < 21; i_22 += 2) 
            {
                arr_77 [i_12] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 5)) ? (-1) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_12] [i_12] [18])))) >= (((/* implicit */int) (short)255))));
                arr_78 [i_12] [i_22] [i_12] [i_12] = ((/* implicit */short) arr_54 [2] [i_12] [i_22] [i_22]);
                var_36 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_60 [i_0] [i_12] [i_22]))));
            }
        }
    }
    for (unsigned char i_23 = 3; i_23 < 19; i_23 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_24 = 0; i_24 < 22; i_24 += 2) 
        {
            for (unsigned char i_25 = 1; i_25 < 19; i_25 += 1) 
            {
                {
                    var_37 *= ((/* implicit */short) (+((+((-(((/* implicit */int) (short)0))))))));
                    arr_87 [i_23] [i_24] &= ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_85 [i_23] [i_24] [i_25] [i_23])) : (((/* implicit */int) (unsigned char)255))))))));
                    arr_88 [i_25 + 1] [i_23] [i_23] [i_23] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13821)) ? (((/* implicit */int) (short)-21775)) : (((/* implicit */int) arr_81 [i_23 + 1])))))))), (max((max((((/* implicit */unsigned long long int) arr_85 [i_23] [i_23] [(short)4] [i_23 - 3])), (arr_79 [i_23] [i_24]))), (((/* implicit */unsigned long long int) ((short) arr_80 [i_23])))))));
                }
            } 
        } 
        arr_89 [(unsigned char)3] [i_23] = ((/* implicit */unsigned short) ((((long long int) ((unsigned short) (short)-13821))) ^ (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (unsigned char)70))))))));
    }
    var_38 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) min((var_5), (var_11)))) != ((-(((/* implicit */int) var_2))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_10))))))));
}
