/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1949
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */int) var_5)), (arr_0 [i_1 - 1] [i_1 + 2]))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_2])))) * (max((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])), (arr_7 [i_2] [i_2]))))) % (((/* implicit */unsigned long long int) (~(var_12)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) (~((~(49826476)))));
                                var_18 = 49826472;
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_2 + 2] = ((/* implicit */unsigned int) var_6);
                }
                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) var_11)))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_20 = (-(((int) var_10)));
                        var_21 -= var_4;
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0])) < (((((/* implicit */_Bool) 5370667622904823522LL)) ? (((/* implicit */int) arr_19 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) (short)1430))))));
                        var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (max((arr_11 [i_7] [i_7] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_2))))))));
                        arr_22 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (((~(-5370667622904823523LL))) <= (((/* implicit */long long int) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 18; i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_1] [i_5] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_1] [i_8 - 1] [i_1])), (((((/* implicit */_Bool) arr_15 [i_0] [i_1 + 1] [i_1 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) var_1))))))) || (((/* implicit */_Bool) ((((long long int) var_3)) >> ((((+(((/* implicit */int) var_13)))) - (48))))))));
                        var_24 += ((/* implicit */unsigned char) arr_10 [i_8 - 3] [i_5] [i_0] [i_0] [i_0] [i_0]);
                        arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) -3181036016547040652LL)))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_8))));
                        /* LoopSeq 4 */
                        for (short i_9 = 3; i_9 < 18; i_9 += 4) 
                        {
                            var_26 ^= ((/* implicit */int) ((_Bool) (~(((long long int) (_Bool)0)))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -49826472))))), ((unsigned char)190)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) 7340032)), (arr_2 [i_0] [i_5])))) ? (((((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 0U)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_9 + 3] [i_9 - 3])) || (((/* implicit */_Bool) var_0))))))))));
                            arr_29 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32753)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_8] [i_9 - 1] [i_1] [i_1] [i_9 - 1] [i_8])) : (((/* implicit */int) arr_27 [i_1] [i_9 + 1] [i_1] [i_1] [i_9 - 1] [i_5])))))));
                            arr_30 [i_1] = ((/* implicit */signed char) ((49826474) / ((~(((/* implicit */int) arr_1 [i_1 + 1]))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */int) 0U);
                            arr_35 [i_1] = arr_5 [i_1];
                        }
                        for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0] [i_1 + 2] [i_5] [i_0] [i_5])) && (((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_5] [i_0] [i_0])))))) > (max((arr_31 [i_0] [i_0] [i_0] [i_0] [i_11 + 1]), (arr_31 [i_0] [i_1 - 1] [i_5] [i_8 - 3] [i_11 + 2])))));
                            arr_38 [i_11] [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_11 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) ((short) arr_18 [i_0] [i_0] [i_0] [i_0]))) > (((/* implicit */int) arr_19 [i_1] [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_11 - 1]))))) : (((/* implicit */int) var_13)));
                            var_30 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_42 [i_0] [i_0] [i_1 + 3] [i_0] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((((unsigned char) (unsigned char)0)), (((/* implicit */unsigned char) (_Bool)1))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) var_0))));
                            var_32 += ((/* implicit */unsigned char) (~((+((+(var_14)))))));
                        }
                    }
                    for (unsigned int i_13 = 3; i_13 < 18; i_13 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_14 = 3; i_14 < 17; i_14 += 2) 
                        {
                            var_33 -= ((/* implicit */short) max((49826461), (((/* implicit */int) (short)32763))));
                            var_34 &= ((/* implicit */unsigned short) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_5] [i_0] [i_0])))))))));
                            var_35 -= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned char)185))));
                            var_36 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_19 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1])))) * (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (unsigned char)192)))))))), (((((3881155121U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-31276))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */int) arr_23 [i_0] [i_13 - 3]))))) : (var_3)))));
                        }
                        for (short i_15 = 2; i_15 < 20; i_15 += 1) 
                        {
                            arr_50 [i_0] [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) var_0);
                            var_37 = ((/* implicit */int) var_8);
                            var_38 = ((/* implicit */int) (_Bool)0);
                            arr_51 [i_0] [i_0] [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -5370667622904823522LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) var_0)) : (arr_32 [i_1] [i_1] [i_0] [i_13 + 1])))) : (var_12)))));
                            var_39 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_1 + 2] [i_1 + 2] [i_5] [i_13 - 3] [i_5])))))));
                        }
                        var_40 = ((/* implicit */short) -5370667622904823522LL);
                    }
                    arr_52 [i_1] = ((/* implicit */unsigned int) ((int) (-(arr_5 [i_1]))));
                }
                var_41 = ((-49826475) % (((/* implicit */int) (signed char)33)));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
    var_43 = ((/* implicit */unsigned short) (-(17868535586257778864ULL)));
    /* LoopSeq 1 */
    for (unsigned short i_16 = 4; i_16 < 14; i_16 += 1) 
    {
        arr_56 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((-5370667622904823523LL) + (9223372036854775807LL))) >> (((var_1) - (2756322510U)))))))) ? (((/* implicit */int) arr_6 [(unsigned char)8])) : ((~(((/* implicit */int) ((-49826480) > (((/* implicit */int) var_13)))))))));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 15; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                {
                    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (+(578208487451772751ULL)))) ? ((~((~(((/* implicit */int) var_4)))))) : (((/* implicit */int) (unsigned char)190))));
                    arr_61 [i_16 + 1] [i_16 + 1] [i_17] [i_16 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_59 [i_16 - 1] [i_16 - 1] [i_16 - 2] [i_16 - 2])) ? (((/* implicit */int) arr_48 [i_16 - 4] [i_16 - 3] [i_17] [i_16] [i_17] [i_16] [i_16])) : (((/* implicit */int) arr_48 [i_16 - 1] [i_16 - 2] [i_17] [i_16] [i_17] [i_16] [i_16])))) + (((/* implicit */int) max((arr_53 [i_16] [i_16]), (arr_48 [i_16 - 1] [i_16 - 1] [i_17] [i_16] [i_17] [i_16 - 2] [i_16]))))));
                    arr_62 [10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) ^ (var_8))) | ((~(arr_3 [(short)16] [(short)16] [i_18])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_12)));
                    var_45 = ((/* implicit */int) (~(arr_41 [i_16] [i_16] [i_16] [i_17] [i_16])));
                }
            } 
        } 
        var_46 *= ((/* implicit */short) (~((~(((/* implicit */int) (signed char)124))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_19 = 0; i_19 < 24; i_19 += 1) 
    {
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            {
                var_47 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 3181036016547040646LL)), (578208487451772752ULL)));
                arr_69 [i_19] [i_19] [i_19] = ((/* implicit */_Bool) arr_64 [i_19]);
            }
        } 
    } 
}
