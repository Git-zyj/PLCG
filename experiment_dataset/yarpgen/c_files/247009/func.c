/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247009
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) (unsigned char)232)) <= (var_0));
                    var_15 = ((unsigned short) 3769464080U);
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */long long int) (+(var_7)));
        arr_11 [i_0] = ((/* implicit */signed char) arr_7 [i_0]);
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(4294967289U))))));
                    arr_17 [i_0] [i_4] [i_4] [i_3] = ((/* implicit */signed char) (-(arr_7 [i_3 + 2])));
                }
            } 
        } 
        arr_18 [i_0] [i_0] = ((/* implicit */long long int) (+(arr_7 [i_0])));
    }
    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
    {
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned char) 17U);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (4294967292U) : (((((/* implicit */_Bool) ((signed char) 5U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 7U)))))) : (4294967286U)))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_10)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137)))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_6])) ? (arr_12 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6]))))))));
        arr_26 [i_6] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_6])) + (((/* implicit */int) arr_22 [i_6]))));
    }
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_8 = 3; i_8 < 21; i_8 += 3) 
        {
            var_21 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)56)))))))) & (((((/* implicit */_Bool) arr_0 [i_8] [i_8 - 3])) ? (arr_0 [i_8] [i_8 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
            var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)65523)), (9104336025242282902LL)));
            arr_32 [i_7] [i_8] = ((/* implicit */long long int) (~((+(((((/* implicit */_Bool) 4294967276U)) ? (4053382234U) : (4294967282U)))))));
        }
        for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            arr_35 [i_7] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_15 [i_7] [i_9] [i_9])))), (((/* implicit */int) var_2))));
            var_23 += ((/* implicit */_Bool) arr_23 [i_7] [i_7]);
            var_24 *= ((/* implicit */signed char) (-(6U)));
            arr_36 [i_9] = ((/* implicit */signed char) max((4294967289U), (((/* implicit */unsigned int) (unsigned char)148))));
            var_25 = ((/* implicit */int) 4053382234U);
        }
        for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 3) 
        {
            arr_41 [i_10] |= ((/* implicit */unsigned int) ((((arr_39 [i_10 + 1] [i_10 + 1]) <= (arr_39 [i_10 + 1] [i_10 - 1]))) && (((/* implicit */_Bool) arr_12 [i_10] [i_7]))));
            /* LoopSeq 3 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)127)) ? (((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)108)))) : (((/* implicit */int) ((signed char) (short)-3))))) != ((((-(((/* implicit */int) var_5)))) | (((/* implicit */int) var_4))))));
                            var_27 = ((/* implicit */signed char) arr_19 [i_12]);
                            var_28 = ((/* implicit */unsigned char) ((min((arr_31 [i_10 - 1]), (((/* implicit */unsigned int) var_13)))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_7] [i_10] [i_11])))));
                            var_29 *= ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4053382238U)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) (unsigned short)9695))))) * (((((/* implicit */unsigned long long int) 4294967279U)) / (14506027118022741939ULL)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_14 = 1; i_14 < 22; i_14 += 1) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_30 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)16922), ((unsigned short)32438)))) ? (((/* implicit */int) (unsigned short)21176)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967254U)) ? (4053382234U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 241585050U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))) : (var_7)))))))));
                            var_32 *= 536870911U;
                        }
                    } 
                } 
            }
            for (signed char i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) (signed char)-84)) ? (7086001002714602014ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))))))));
                var_34 = ((/* implicit */_Bool) var_9);
            }
            for (long long int i_17 = 4; i_17 < 22; i_17 += 1) 
            {
                arr_62 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4053382231U)) ? (-1212850434724882356LL) : (arr_39 [i_17 + 1] [i_10 + 1])))) ? (max((-2790793055846327262LL), (((/* implicit */long long int) (short)16873)))) : (((/* implicit */long long int) ((unsigned int) 2281487185U)))));
                arr_63 [i_17] [i_17] [i_10] [i_17] = ((/* implicit */unsigned int) ((((241585080U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_17] [i_10] [i_17]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) ((_Bool) (signed char)-10))), (arr_46 [i_7] [i_10] [i_10] [i_17])))));
            }
        }
        var_35 = ((/* implicit */unsigned int) min((var_35), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_57 [i_7] [i_7] [i_7] [i_7])) : ((+(((/* implicit */int) (_Bool)1))))))), (((max((((/* implicit */unsigned int) (signed char)-92)), (536870911U))) + (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-16891), ((short)(-32767 - 1))))))))))));
        arr_64 [i_7] [i_7] &= ((/* implicit */signed char) (-((~(((/* implicit */int) var_10))))));
        /* LoopSeq 2 */
        for (unsigned int i_18 = 0; i_18 < 23; i_18 += 4) 
        {
            var_36 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_48 [i_7] [i_7])))) ? (((/* implicit */int) (unsigned short)42555)) : (((/* implicit */int) ((arr_48 [i_7] [i_18]) == (arr_48 [i_7] [i_7]))))));
            arr_68 [i_7] [i_18] = ((/* implicit */_Bool) ((arr_54 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) ((unsigned short) ((short) var_14))))));
            var_37 = ((/* implicit */unsigned long long int) ((arr_49 [i_7] [i_18] [i_7] [i_7] [i_18] [i_18]) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) <= ((-9223372036854775807LL - 1LL))))))));
            var_38 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) 4053382189U)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (~(17U))))));
            arr_69 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40427)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7]))) : ((+(1073741823U)))));
        }
        /* vectorizable */
        for (unsigned short i_19 = 2; i_19 < 22; i_19 += 3) 
        {
            arr_72 [i_19] [i_19] = (-(2380946546U));
            var_39 = ((((/* implicit */_Bool) arr_67 [i_19 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_16 [i_19] [i_7] [i_7])))) : (((((/* implicit */_Bool) var_0)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_20 = 0; i_20 < 19; i_20 += 1) 
    {
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    var_40 = ((/* implicit */_Bool) 241585095U);
                    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 4053382201U))) ? (((/* implicit */int) (unsigned char)0)) : (((((((/* implicit */int) (signed char)91)) * (((/* implicit */int) (signed char)111)))) & (((/* implicit */int) arr_56 [i_21 - 1] [i_21] [i_21] [i_21 - 1] [i_21])))))))));
                    arr_83 [(_Bool)1] [i_21] [i_22] [i_22] &= ((/* implicit */signed char) (unsigned char)26);
                }
            } 
        } 
    } 
}
