/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232627
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
    var_11 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_12 += ((/* implicit */unsigned char) (unsigned short)19422);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_10 [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_2] [i_0 - 2] = ((/* implicit */short) ((arr_6 [i_2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_3]))))) : (1743934846)));
                        arr_11 [i_0] [i_0] [i_0] [i_3] &= ((/* implicit */_Bool) 1743934867);
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */_Bool) -1743934838);
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            var_13 = ((/* implicit */unsigned int) (unsigned short)19443);
            var_14 -= ((/* implicit */_Bool) 1743934841);
        }
    }
    for (unsigned int i_5 = 4; i_5 < 13; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            arr_20 [i_6] = ((/* implicit */unsigned short) min((31973498), (((/* implicit */int) (unsigned short)19416))));
            var_15 = ((/* implicit */signed char) max((arr_14 [i_5 - 2] [i_5 - 2] [i_5 - 1]), (((/* implicit */unsigned int) -2088260504))));
            /* LoopNest 2 */
            for (signed char i_7 = 2; i_7 < 12; i_7 += 2) 
            {
                for (short i_8 = 4; i_8 < 13; i_8 += 2) 
                {
                    {
                        var_16 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_5]))));
                        var_17 = ((((/* implicit */_Bool) max((7617489832238571257LL), (((/* implicit */long long int) (_Bool)1))))) ? (arr_14 [i_5 - 3] [i_7 - 1] [i_7 - 1]) : (((arr_14 [i_5 - 1] [i_7 - 1] [i_7 + 2]) | (arr_14 [i_5 + 1] [i_7 - 2] [i_7 + 1]))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_8 - 2] [i_5 - 2]))))) ? (arr_2 [i_7] [12]) : ((+(var_7)))));
                    }
                } 
            } 
        }
        var_19 = ((/* implicit */signed char) (unsigned short)46076);
    }
    for (unsigned int i_9 = 4; i_9 < 13; i_9 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_10 = 4; i_10 < 12; i_10 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_11 = 2; i_11 < 13; i_11 += 4) 
            {
                arr_35 [7U] [i_10 - 2] [i_11 - 2] [i_11 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (unsigned short)46122)), (3645647862U))) << (((var_4) + (6728572940402702349LL)))))) ? (11416830078140301675ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_9 + 1] [i_11 + 1])) ? (-4375645241757661652LL) : (((/* implicit */long long int) var_3))))) ? (((/* implicit */int) ((var_4) <= (((/* implicit */long long int) var_5))))) : (((/* implicit */int) (short)27353)))))));
                arr_36 [i_11 - 2] [i_11 - 2] = ((/* implicit */unsigned char) 4375645241757661652LL);
                arr_37 [i_9 - 3] [i_9 + 1] [i_10 - 2] [11U] = ((/* implicit */unsigned long long int) (unsigned char)8);
            }
            for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_9] [i_12] [i_13]))))) ? (max((((/* implicit */long long int) (signed char)24)), (arr_21 [i_9 - 1] [i_9] [i_9 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */unsigned long long int) 4375645241757661654LL)) > (3ULL))))))))))));
                    /* LoopSeq 3 */
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
                    {
                        var_21 &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_14 [i_13] [i_10] [i_9 - 2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9]))))), (((/* implicit */unsigned int) (unsigned short)16380))));
                        arr_47 [i_9 - 1] [i_14] [i_10 + 1] [i_9 - 3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3707617028U)) ? (((/* implicit */unsigned long long int) 209824489U)) : (var_1))))));
                        var_22 = ((/* implicit */unsigned int) arr_1 [i_9]);
                    }
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) 2315189866U);
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((arr_9 [i_9 - 4] [i_9 - 4] [i_10 - 1] [i_9 + 1]) - (5732845319336024727LL)))))) ? (((/* implicit */long long int) -1743934846)) : (((((/* implicit */_Bool) (unsigned char)54)) ? (arr_9 [i_12] [i_10 - 3] [(_Bool)1] [i_9 - 1]) : (arr_9 [i_9 - 4] [i_10 - 4] [i_9 - 4] [i_9 - 1])))));
                        var_25 = ((/* implicit */signed char) max((18446744073709551613ULL), ((~(18446744073709551613ULL)))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_9] [i_10 + 2] [i_10 + 2] [i_13])) ? (((/* implicit */long long int) 329492775U)) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_15]))) : (((((/* implicit */_Bool) arr_44 [i_10 - 3] [i_10 - 3] [i_12])) ? (arr_27 [i_9] [i_9] [i_12] [i_10 + 2] [i_9] [i_9]) : (((/* implicit */unsigned long long int) 1979777429U)))))))));
                        arr_50 [i_9] [i_10 + 2] [i_9] [i_13] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) arr_24 [i_10] [i_9 - 2] [i_9 + 1]))))));
                    }
                    for (long long int i_16 = 0; i_16 < 14; i_16 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)10))))));
                        arr_53 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(6047048945767466110ULL)))) ? ((~(((/* implicit */int) max(((short)25840), (((/* implicit */short) (unsigned char)193))))))) : ((~(((/* implicit */int) arr_40 [i_9] [i_10] [i_12]))))));
                    }
                }
                for (unsigned short i_17 = 4; i_17 < 11; i_17 += 1) 
                {
                    arr_57 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)22215))) - (((((/* implicit */_Bool) arr_39 [i_9 - 3] [i_10 + 1] [i_17 - 1])) ? (((/* implicit */long long int) 774159378U)) : (-3465452021366406588LL)))));
                    var_28 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)-32767)) ? (2841478480U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31286)))))));
                    arr_58 [i_9 - 2] [1U] [1U] [i_12] [i_17] [i_17 + 1] = ((/* implicit */signed char) (+((-(((/* implicit */int) arr_16 [i_12] [i_10 - 4]))))));
                }
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) -8413922897397548903LL))));
                var_30 = (((((_Bool)1) ? (((/* implicit */int) arr_17 [i_9 + 1])) : (((/* implicit */int) arr_17 [i_9 - 2])))) < (((/* implicit */int) (unsigned short)11)));
                arr_59 [i_9] [i_10 + 1] [1LL] [i_10 - 1] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_4 [i_10 - 1] [2LL] [i_10 - 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
                    {
                        {
                            var_31 *= ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                            arr_65 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 - 3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)5981))) != (((((/* implicit */_Bool) arr_55 [i_9] [i_10 - 2] [i_10 - 2] [i_10] [i_10] [0LL])) ? (((/* implicit */unsigned long long int) 3828068345U)) : (16ULL))))))) >= (1338932972U)));
                            arr_66 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] = ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) 1073741824U)) ? (-1807966644) : (((/* implicit */int) var_8))))))) : ((-9223372036854775807LL - 1LL)));
                        }
                    } 
                } 
            }
            var_32 = ((/* implicit */_Bool) (short)24099);
            var_33 -= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19457))));
            arr_67 [i_9] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */unsigned long long int) arr_5 [i_9 - 3] [i_10 + 2] [i_10 + 1])) : (var_2))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
        }
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-16970))))) ? ((~(((/* implicit */int) (unsigned short)18)))) : ((~(((/* implicit */int) arr_24 [i_9 - 2] [i_9 + 1] [i_9 - 4]))))));
    }
    /* LoopNest 2 */
    for (short i_20 = 2; i_20 < 18; i_20 += 4) 
    {
        for (unsigned char i_21 = 4; i_21 < 18; i_21 += 3) 
        {
            {
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (~(3561722329870960810ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1199014149U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (17733637845760764878ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))) : (((((/* implicit */_Bool) 2956034317U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32744))) : (2956034303U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_69 [i_20 - 2])) + (((/* implicit */int) (unsigned char)67)))))));
                arr_74 [13U] [13U] = ((/* implicit */long long int) var_7);
                arr_75 [i_20 + 1] [i_21 - 3] [i_21 - 4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (595334543240164507LL)))) == (min((17183561508256632613ULL), (((/* implicit */unsigned long long int) arr_68 [i_20]))))));
            }
        } 
    } 
}
