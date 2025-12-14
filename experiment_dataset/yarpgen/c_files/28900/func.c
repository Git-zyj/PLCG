/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28900
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
    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1015418327)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (signed char)-14))))))) : (var_0)));
    var_17 = ((_Bool) max((var_3), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
        var_19 = ((/* implicit */signed char) ((short) 2260330864U));
        var_20 = ((/* implicit */unsigned int) ((long long int) (short)27016));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (2716815622U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) ? (((((/* implicit */_Bool) 2135819312)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-1203337151602990513LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))))));
        arr_6 [i_1] |= ((/* implicit */unsigned int) ((short) arr_3 [i_1]));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))));
    }
    for (unsigned char i_2 = 4; i_2 < 19; i_2 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                arr_16 [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((short) var_0));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) arr_9 [i_2])) : ((~(arr_14 [i_2 + 1] [i_3] [i_3])))));
            }
            var_24 ^= ((/* implicit */unsigned char) arr_12 [i_2] [i_2 + 1]);
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_19 [i_5] = (-(arr_10 [i_2 + 1]));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 3; i_7 < 19; i_7 += 3) 
                {
                    arr_26 [i_5] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3064317492419613646ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2089592057U)))) ? (((/* implicit */int) (unsigned short)46100)) : (((/* implicit */int) (signed char)127))));
                    arr_27 [i_2] [i_2] [i_2] [i_5] = (~(arr_25 [i_2] [i_5] [i_6] [i_7] [i_2] [i_7 - 1]));
                    var_25 ^= ((/* implicit */short) ((long long int) var_8));
                }
                arr_28 [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_2 - 4] [i_2 + 2])) >> (((((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 2])) - (85)))));
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) var_6))))) / (arr_14 [i_2] [i_5] [i_6]))))));
            }
            var_27 = ((/* implicit */long long int) (short)-2974);
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 2) /* same iter space */
            {
                var_28 *= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_5] [i_2] [i_8 - 1])) ? (7061550499597876074ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27026)))))));
                var_29 &= ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_2] [i_8]))));
            }
            for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    for (long long int i_11 = 1; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_30 -= ((/* implicit */_Bool) var_10);
                            arr_39 [i_5] [i_9] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_2 + 1] [i_2 + 2] [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46096))) : (9314568026779018049ULL)));
                            var_31 += ((/* implicit */unsigned long long int) -1813694100);
                            arr_40 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-101))));
                        }
                    } 
                } 
                var_32 += ((/* implicit */unsigned char) (-(arr_14 [i_2 - 1] [i_2] [i_9 - 1])));
                var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (4294967295U))) ? (arr_12 [i_5] [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_2]))))))));
            }
            for (short i_12 = 4; i_12 < 20; i_12 += 3) 
            {
                var_34 = ((/* implicit */unsigned int) ((long long int) var_13));
                var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
                var_36 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned char)58)))));
            }
        }
        for (short i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            var_37 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-15))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                var_38 *= (unsigned char)128;
                var_39 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [i_2] [i_2 + 1] [i_14])) ? (var_11) : (((/* implicit */int) arr_46 [i_2 - 2] [i_2 + 1] [i_13]))));
                var_40 = arr_9 [i_2 - 1];
            }
            for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 3) 
                    {
                        {
                            arr_56 [i_2 - 2] [i_13] [i_2] [i_16] [i_2 - 4] [i_16] [i_13] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_2] [i_13] [i_15] [i_16] [i_17]))));
                            var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) (+(arr_22 [i_2] [i_15]))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned int) ((1257472900) << (((((/* implicit */int) (unsigned short)12108)) - (12108)))));
                arr_57 [i_2] [i_13] [i_15] = ((/* implicit */long long int) (~(max((var_0), (((/* implicit */unsigned long long int) (-(arr_25 [i_2 - 1] [i_13] [i_13] [i_13] [i_2] [i_15]))))))));
            }
            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 4])) ? (((0U) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (arr_52 [i_2] [i_2] [i_13])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_2] [i_13] [i_2])) ? (arr_51 [i_2 - 4] [i_2 + 2] [i_2] [i_13]) : (arr_51 [i_2] [i_2 - 3] [i_2] [i_13])))) : (arr_45 [i_2 + 1] [i_13]))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_18 = 0; i_18 < 21; i_18 += 3) 
        {
            var_44 = ((/* implicit */unsigned char) max((var_44), ((unsigned char)148)));
            var_45 = ((/* implicit */unsigned char) (+((+(var_1)))));
        }
        for (unsigned int i_19 = 0; i_19 < 21; i_19 += 1) 
        {
            var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) arr_61 [i_2] [i_19] [i_19]))));
            var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1175247117U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_37 [i_19] [i_2] [i_2] [i_2] [i_2 - 4])))), ((-(arr_60 [i_2 - 3] [i_2] [i_19])))))) == (((((((/* implicit */_Bool) arr_61 [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned int) arr_29 [i_2] [i_19] [i_2])) : (arr_33 [i_19] [i_19] [i_2] [i_2]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_2 - 2] [i_19] [i_2 - 2] [i_19]))))))))));
            var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((1307516300U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)26996)) : (var_11)))))))))));
            var_49 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) arr_50 [i_19] [i_19] [i_2] [i_2])) ? (((/* implicit */int) arr_37 [i_2] [i_19] [i_2] [i_2] [i_19])) : (((/* implicit */int) arr_46 [i_19] [i_19] [i_19])))) | (((/* implicit */int) arr_24 [i_19] [i_2] [i_19] [i_2 - 1]))))));
            var_50 = ((/* implicit */int) arr_34 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 - 4]);
        }
    }
    /* LoopNest 2 */
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        for (unsigned int i_21 = 0; i_21 < 16; i_21 += 3) 
        {
            {
                var_51 ^= ((/* implicit */unsigned char) ((unsigned long long int) (+(((unsigned long long int) (unsigned char)209)))));
                var_52 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) arr_22 [i_21] [i_21])))));
            }
        } 
    } 
}
