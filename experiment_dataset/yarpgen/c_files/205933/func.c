/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205933
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
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-89)) && (((/* implicit */_Bool) (unsigned short)1579))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8454))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 1]))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_15 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9357111786257727535ULL)) ? (var_8) : (var_8)))) ? ((+(((/* implicit */int) (unsigned short)63957)))) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 1] [i_1 - 1]))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            arr_19 [i_0] [i_2] [i_2] [i_3] [i_1] [i_2] [i_4 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) var_3)))))));
                            arr_20 [i_0] [i_1 + 1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_5);
                            var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */int) (signed char)125)) != (((/* implicit */int) (signed char)91))))));
                            arr_21 [i_1] [i_1 + 2] [i_2] [i_3] [i_4] = (+(((/* implicit */int) var_0)));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 ^= ((/* implicit */_Bool) (signed char)-127);
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_3] [i_5] [i_2] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_29 [i_0] [i_1 + 2] [i_1] [i_2] [(unsigned short)3] [i_1] [i_6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_6 [i_0] [5LL] [14U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1 + 1] [i_1] [i_1 + 2]))) : (((unsigned long long int) (unsigned short)65535))));
                            var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
                        }
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)1579)))))));
                        arr_30 [i_1] [i_1 + 2] [i_3] [i_3] [i_1] = ((/* implicit */signed char) (+(var_7)));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
            arr_31 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 2; i_7 < 12; i_7 += 4) 
            {
                arr_34 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_5))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-123)))))));
                var_20 -= ((/* implicit */_Bool) (+(var_9)));
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 3) 
                {
                    var_21 &= (!(((/* implicit */_Bool) var_6)));
                    var_22 += ((/* implicit */unsigned long long int) arr_28 [i_8 - 2] [i_8] [i_8] [i_8 - 2] [i_7 + 3]);
                }
                for (unsigned char i_9 = 1; i_9 < 15; i_9 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_39 [i_7 + 4])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (unsigned char)31))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    var_24 = ((/* implicit */long long int) (+((-(((/* implicit */int) var_5))))));
                }
                for (unsigned char i_10 = 1; i_10 < 15; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        arr_46 [i_0] [i_1] [i_7] [i_10 - 1] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_41 [i_1])));
                        arr_47 [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (16252928U)))) && (((/* implicit */_Bool) ((short) var_2)))));
                        arr_48 [i_0] [i_1 - 1] [i_7 - 2] [i_1] [(signed char)7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_7 + 1] [i_10 - 1] [i_1 + 1]))));
                        arr_49 [i_1] [i_0] [i_1] [i_1] [i_1] [i_10] [i_11] = ((/* implicit */int) var_11);
                        arr_50 [i_1] [i_1] = ((unsigned char) var_3);
                    }
                    for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        arr_53 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_18 [i_1] [i_1] [(_Bool)1] [(unsigned short)2])) : (((/* implicit */int) arr_18 [i_1] [i_12] [i_7 - 1] [i_1]))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((arr_52 [i_10 - 1] [i_1 - 1] [i_10 - 1] [i_1 - 1] [1] [i_1 - 1] [i_7]) > (var_8))))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 12; i_13 += 3) /* same iter space */
                    {
                        var_26 ^= 3446697207252439785ULL;
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) 253952))));
                        arr_57 [i_0] [i_0] [(unsigned short)15] [i_7 + 1] [i_1] [i_13 + 1] = ((/* implicit */unsigned short) ((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80)))));
                    }
                    for (unsigned char i_14 = 1; i_14 < 12; i_14 += 3) /* same iter space */
                    {
                        arr_61 [i_0] [i_0] [i_1 - 1] [i_7] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_37 [i_1 - 1] [i_1] [i_10 - 1] [i_10 - 1] [i_14 + 3])));
                        var_28 = ((/* implicit */long long int) var_6);
                        arr_62 [i_10] [i_1] [3U] [i_10] [13LL] [i_1] [14LL] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                    }
                    arr_63 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_10] [i_10] [(unsigned char)14] [i_1] [i_10 + 1])) ? (((/* implicit */int) arr_54 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_1] [i_10 - 1])) : (((/* implicit */int) arr_54 [i_10 + 1] [14LL] [i_10] [i_1] [i_10 + 1]))));
                    arr_64 [i_0] [6U] [i_7 + 2] [i_10] [i_1] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28277))) : (((((/* implicit */_Bool) (signed char)6)) ? (8157819031416741944LL) : (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_10 - 1] [i_1] [i_10 - 1] [11U])))))));
                    var_29 = (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) arr_9 [i_1] [i_7] [i_10 - 1])) : (var_4))));
                    arr_65 [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_10 - 1] [i_10 + 1] = ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_11)));
                }
            }
        }
        for (signed char i_15 = 2; i_15 < 13; i_15 += 3) 
        {
            arr_68 [i_15] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_15 - 1] [(_Bool)1] [i_15 - 1] [i_15 - 1] [i_15 + 3]))));
            arr_69 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)1579))));
        }
        var_30 += ((/* implicit */unsigned short) ((unsigned char) arr_33 [i_0]));
    }
    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
    {
        arr_72 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) & (((/* implicit */int) var_5))))) ? (min((14914977528540938376ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) * (9457233929944870988ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) var_10))))))));
        /* LoopSeq 1 */
        for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) max((((7568498075156362922ULL) | (arr_8 [i_16] [i_17]))), (((/* implicit */unsigned long long int) (_Bool)1)))))));
            arr_75 [i_16] [(unsigned short)5] [i_16] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */short) var_0)), (var_5))), (((/* implicit */short) arr_26 [i_16] [i_17] [i_16] [i_16] [i_16] [i_16] [i_16])))))) : (((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28276)) ? (((/* implicit */unsigned long long int) -7341768744054897016LL)) : (arr_42 [i_16] [i_17] [i_17] [i_17]))))));
            arr_76 [i_16] [i_16] = ((/* implicit */unsigned char) 0ULL);
        }
    }
}
