/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196878
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
    /* LoopSeq 4 */
    for (short i_0 = 3; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (((+(((((/* implicit */int) var_4)) | (((/* implicit */int) var_2)))))) << (((((/* implicit */int) arr_0 [i_0])) - (18781)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned short)25301)) : (((/* implicit */int) (signed char)-101))));
    }
    for (short i_1 = 3; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (+(((((((/* implicit */_Bool) var_0)) ? (2903544172922938034ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (3136896733U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_13))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_3 [i_1 - 3] [i_1])))) ? (((/* implicit */int) (unsigned short)30057)) : (((/* implicit */int) (signed char)102))));
        var_21 *= ((/* implicit */short) ((unsigned short) min((((((/* implicit */_Bool) (short)24392)) ? (1158070562U) : (1158070545U))), (((/* implicit */unsigned int) arr_1 [(unsigned short)9])))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
        {
            var_22 += ((/* implicit */short) ((unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-107))))) == (2773866878U))));
            var_23 = ((/* implicit */int) ((((((12421525537611387502ULL) >> (((((/* implicit */int) (short)-25096)) + (25157))))) >> (((2432429542320178550LL) - (2432429542320178509LL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        }
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
        {
            var_24 |= ((/* implicit */unsigned char) 524287U);
            var_25 = ((/* implicit */unsigned char) 524278U);
        }
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) (unsigned short)17939);
            var_27 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1]))) : (var_13))) & (((/* implicit */unsigned long long int) min((arr_14 [i_1 - 1]), (arr_14 [i_1 - 2]))))));
            arr_15 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_1 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 + 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : ((+(19U)))))) : (max((((/* implicit */unsigned long long int) ((((var_6) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)25279)) - (25261)))))), (((((/* implicit */_Bool) (unsigned short)32596)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0)))))));
            var_28 = ((/* implicit */unsigned short) min((var_12), (2132648110269258751LL)));
        }
    }
    for (short i_5 = 3; i_5 < 21; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    {
                        var_29 = ((/* implicit */long long int) 3849949320U);
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            arr_31 [i_5] [i_8] [(unsigned char)7] [i_5] [i_5] = var_5;
                            arr_32 [12ULL] [i_6] [(signed char)15] [i_8] [(signed char)15] [(short)21] = ((/* implicit */unsigned int) (+(var_12)));
                        }
                        var_30 ^= ((/* implicit */signed char) 12421525537611387513ULL);
                        var_31 -= (signed char)0;
                    }
                } 
            } 
            var_32 ^= max((((/* implicit */unsigned long long int) var_7)), ((-((-(var_11))))));
        }
        arr_33 [17ULL] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -203471974)), (arr_20 [i_5] [5] [i_5])))) ? ((+(9816892940430777132ULL))) : ((+(87133836742563181ULL)))))));
    }
    /* vectorizable */
    for (short i_10 = 3; i_10 < 21; i_10 += 1) /* same iter space */
    {
        var_33 |= ((/* implicit */short) ((((-1336109837) + (2147483647))) << (((4709638889373925849LL) - (4709638889373925849LL)))));
        arr_36 [1ULL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (((13348985168444444734ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        /* LoopSeq 1 */
        for (unsigned char i_11 = 2; i_11 < 20; i_11 += 1) 
        {
            arr_39 [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_18 [i_11] [11LL] [6U])) & (var_0)))) ? (((((/* implicit */_Bool) (short)1984)) ? (var_0) : (((/* implicit */unsigned long long int) 762055417U)))) : (((var_0) << (((/* implicit */int) (_Bool)0))))));
            var_34 = ((/* implicit */unsigned long long int) var_5);
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2432429542320178550LL)))) ? ((+(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227)))));
            arr_40 [(_Bool)1] [0LL] = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
            arr_41 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (arr_26 [i_11] [i_11] [i_11 + 1])));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                {
                    arr_47 [19U] = ((/* implicit */short) (_Bool)0);
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 1) 
                    {
                        for (long long int i_15 = 3; i_15 < 18; i_15 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4)))))));
                                var_37 = ((/* implicit */unsigned long long int) var_12);
                            }
                        } 
                    } 
                    arr_52 [i_10] = ((/* implicit */int) ((((534522275128011514ULL) << (((/* implicit */int) var_18)))) >> (((((/* implicit */int) (unsigned short)33675)) - (33637)))));
                    var_38 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)21313)) || (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) == (arr_25 [(unsigned short)15] [i_12])))));
                    var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (unsigned short)65511)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_16 = 2; i_16 < 20; i_16 += 1) 
        {
            for (unsigned int i_17 = 1; i_17 < 20; i_17 += 1) 
            {
                {
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_50 [(_Bool)1] [i_10] [i_10] [i_10] [i_16] [i_17])))))));
                    var_41 = ((/* implicit */unsigned short) var_14);
                }
            } 
        } 
    }
    var_42 = ((/* implicit */unsigned char) var_16);
    var_43 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_9))))) ? (((((/* implicit */int) var_16)) | (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_5)))) | (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_8))))))));
    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (signed char)-101)), (3532911892U))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)76))))))))));
    var_45 = ((/* implicit */_Bool) var_14);
}
