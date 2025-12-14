/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47569
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
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 11; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] &= ((/* implicit */int) arr_6 [i_3] [i_3]);
                        arr_11 [i_0] [i_1] [i_0] [i_2 - 4] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (0ULL))) ? (min((var_11), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 3) 
            {
                for (short i_6 = 1; i_6 < 13; i_6 += 2) 
                {
                    for (signed char i_7 = 3; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_13 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_1 [i_4])), (min((arr_13 [i_0 + 3] [(signed char)1] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_15 [i_6 + 1] [i_4 - 1] [i_4 - 1]))))));
                            var_14 += ((/* implicit */unsigned long long int) ((long long int) 4286182050U));
                            var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_0)) + (109)))))) : (arr_8 [i_0 + 3] [i_5 + 2] [i_6 + 1])))));
                            arr_21 [i_0 + 2] [i_5] [i_5] [i_0] [i_4] = ((/* implicit */long long int) max((((/* implicit */int) max(((short)-14449), (((/* implicit */short) (signed char)-102))))), (((((/* implicit */_Bool) ((int) var_1))) ? (min((((/* implicit */int) var_9)), (arr_2 [i_0] [2ULL] [i_7]))) : (((/* implicit */int) ((unsigned short) var_2)))))));
                        }
                    } 
                } 
            } 
            arr_22 [i_0] = ((/* implicit */unsigned short) (~((((_Bool)0) ? (((((/* implicit */int) arr_18 [i_4] [12] [i_0 + 3] [6])) / (1626787801))) : (((/* implicit */int) ((unsigned char) var_3)))))));
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
            {
                arr_25 [i_0] [i_4] [i_8] = ((/* implicit */unsigned int) var_2);
                var_16 = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0 + 3])) / (((/* implicit */int) arr_0 [i_0 - 1])))) ^ ((((_Bool)0) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (_Bool)0))))));
            }
            for (signed char i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) || (((/* implicit */_Bool) ((short) var_11)))));
                var_18 += ((/* implicit */signed char) min(((-(((((/* implicit */long long int) ((/* implicit */int) var_7))) & (arr_26 [i_4 - 1]))))), (((/* implicit */long long int) ((((/* implicit */int) ((18014398508433408LL) >= (((/* implicit */long long int) ((/* implicit */int) var_6)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))))))));
                var_19 &= ((/* implicit */_Bool) var_7);
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14059)) ? (arr_5 [i_0] [i_4] [i_9] [(unsigned short)7]) : (min((((/* implicit */long long int) max(((unsigned short)4095), (((/* implicit */unsigned short) (short)14460))))), ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54030)))))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))));
            }
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) (unsigned char)15)), (var_12))))) ? (((602600329) & (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_7)))))));
        }
        for (short i_10 = 3; i_10 < 13; i_10 += 2) /* same iter space */
        {
            var_23 -= ((/* implicit */unsigned short) min(((~(((/* implicit */int) (unsigned short)61414)))), (((/* implicit */int) (_Bool)1))));
            /* LoopNest 3 */
            for (signed char i_11 = 1; i_11 < 12; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    for (int i_13 = 1; i_13 < 10; i_13 += 2) 
                    {
                        {
                            arr_39 [i_0] [i_0] [i_10] [i_11 - 1] [i_12] [i_13] [i_13 + 2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (((arr_26 [i_0]) | (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51472))) : ((-9223372036854775807LL - 1LL))))))));
                            arr_40 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_17 [i_12] [i_10] [i_11] [i_11] [i_12] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) (short)-20)) | (((((/* implicit */_Bool) 602600329)) ? (-2147483645) : ((-2147483647 - 1))))));
                            arr_41 [i_0] [i_11 - 1] [i_12] = ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (signed char)-107))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (arr_26 [i_0 + 1])))) ? (((/* implicit */int) ((signed char) (-2147483647 - 1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : (((((/* implicit */_Bool) (short)-14449)) ? (18263129067828517430ULL) : (((/* implicit */unsigned long long int) 602600329)))));
                            var_25 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (var_12)))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_14 = 3; i_14 < 13; i_14 += 2) /* same iter space */
        {
            arr_45 [i_14] [i_14 - 2] [i_14] = ((/* implicit */signed char) ((unsigned short) var_12));
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                var_26 -= ((/* implicit */long long int) var_1);
                var_27 &= ((/* implicit */long long int) ((short) 9223372036854775807LL));
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-31419)), (7864320)))) ? (max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) <= (0ULL)))), (((arr_5 [i_15] [i_14 - 2] [i_14 + 1] [i_0]) % (var_11))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                var_29 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) (+(var_11)))))));
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_54 [i_0 - 2] [i_14] [8U] [i_16] [i_14] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)14047)), (18446744073709551606ULL)));
                            var_30 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0 + 2] [i_16 + 1] [i_17]))) & (0ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7307044302737969499ULL)))))) : (max((((long long int) (unsigned short)14032)), (((/* implicit */long long int) (signed char)63))))));
                            arr_55 [8LL] [8LL] [i_16] &= ((/* implicit */int) ((_Bool) var_11));
                        }
                    } 
                } 
            }
            for (int i_18 = 1; i_18 < 12; i_18 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_19 = 1; i_19 < 13; i_19 += 4) 
                {
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) max((arr_46 [i_19] [i_0 + 1] [i_14 - 2] [i_0 + 1]), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (arr_19 [i_0] [i_14 - 3] [i_0] [i_0] [i_19 - 1]))))))))))));
                    var_32 = ((/* implicit */short) max((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)36509))))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_5))))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                    var_33 = ((/* implicit */int) (-(arr_53 [i_14])));
                }
                var_34 = ((/* implicit */_Bool) max((max((arr_44 [i_18 + 1] [i_0] [i_0]), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (18446744073709551606ULL))))), (((((/* implicit */_Bool) ((unsigned short) 268435455LL))) ? (((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_0] [i_18] [i_14] [i_14 - 1]), (arr_26 [i_0])))) : (((13896713098912179856ULL) << (((((/* implicit */int) arr_48 [i_0] [i_14] [i_18] [i_14])) - (60111)))))))));
                arr_61 [i_0] [i_14] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) -1)), (arr_26 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 1; i_20 < 12; i_20 += 2) 
                {
                    for (unsigned long long int i_21 = 1; i_21 < 12; i_21 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((arr_24 [i_0 + 3] [i_0 - 2] [i_0]) ? ((+(((/* implicit */int) (short)-31419)))) : (((((/* implicit */_Bool) arr_63 [(short)12])) ? (-602600330) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (short)-27385)))))));
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) arr_12 [i_20 - 1] [i_0] [i_0]))));
                            arr_67 [i_14] [i_21 - 1] = var_6;
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */signed char) var_12);
        }
        arr_68 [i_0 + 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0 - 2] [i_0 + 2] [i_0 - 2] [i_0 + 1] [i_0 + 1]))) <= (0ULL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28159))) % (28ULL)))));
        /* LoopNest 3 */
        for (short i_22 = 1; i_22 < 11; i_22 += 3) 
        {
            for (signed char i_23 = 3; i_23 < 12; i_23 += 2) 
            {
                for (int i_24 = 1; i_24 < 12; i_24 += 3) 
                {
                    {
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_22 + 3] [i_22] [i_24] [i_24 + 1] [i_24 - 1] [i_22 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_71 [i_0] [i_22 + 2] [i_23 - 2] [i_22 + 2])))) : (0U)))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)70)) > (((/* implicit */int) var_10)))))));
                        var_39 += ((((/* implicit */_Bool) min((arr_52 [i_0]), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_22] [i_22])) : (((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) max((var_2), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (22ULL))))))) : ((+(max((-9223372036854775801LL), (((/* implicit */long long int) 4294967295U)))))));
                        var_40 = ((/* implicit */_Bool) ((int) ((((arr_70 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_23] [i_22] [i_22]))) : (7196749065056134479LL))) == (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))));
                        var_41 = ((/* implicit */short) arr_8 [i_0] [i_0 + 1] [i_0]);
                        arr_78 [i_0] [i_23] [i_0] [i_0] = ((/* implicit */int) (+(min((arr_13 [i_24 + 2] [i_23 + 1] [i_0 + 2]), (((/* implicit */unsigned long long int) 16383))))));
                    }
                } 
            } 
        } 
    }
    var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_3))));
}
