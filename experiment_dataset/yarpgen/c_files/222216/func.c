/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222216
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
    var_11 = ((short) var_0);
    var_12 = ((/* implicit */unsigned long long int) (unsigned char)185);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((12406867105958352644ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) > (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) : ((~(((/* implicit */int) (short)0))))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)59186)) & (((/* implicit */int) (signed char)58))));
                arr_6 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (unsigned short)59186)))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1271664961522759551ULL)))) ? (((/* implicit */int) (short)-3862)) : (((((/* implicit */_Bool) (signed char)-62)) ? (arr_4 [i_0] [i_0 - 1]) : (arr_4 [i_0 - 1] [i_1])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_16 = arr_8 [i_0] [i_1] [i_2] [i_3];
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -349423189)) ? (((/* implicit */int) (unsigned short)34529)) : (((/* implicit */int) (short)13))));
                            var_18 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) 1091543750)), (var_0)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 2; i_4 < 13; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            arr_18 [i_4 + 3] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) <= (arr_14 [i_4 + 3]))))));
            var_19 ^= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_3 [i_4 - 1] [i_5])) : (((/* implicit */int) arr_12 [i_4 - 1] [i_4])))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) 519948061U);
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            arr_29 [i_4] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */int) (+(3775019243U)));
                            var_21 = ((unsigned long long int) 8916694572440912707ULL);
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((3775019234U), (((/* implicit */unsigned int) (-(var_7))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)166)), (arr_27 [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 1] [i_7])))) : ((-(3997821312U)))));
                        }
                        var_23 = ((/* implicit */signed char) (~(((var_3) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                        var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) (((_Bool)1) ? (arr_13 [i_4 - 2] [i_6]) : (((/* implicit */int) var_2)))))), (arr_16 [i_4] [i_6] [i_8])));
                        var_25 = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) (~(((/* implicit */int) var_3))))));
                    }
                } 
            } 
            arr_30 [i_4 + 1] [i_6] = ((((/* implicit */_Bool) ((((var_9) ? (arr_14 [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((-720328908) <= (arr_4 [i_4] [i_4 - 1])))))))) ? ((+(max((587957070), (((/* implicit */int) var_8)))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (var_0))) ? (((/* implicit */int) ((arr_11 [i_4] [i_6] [i_4] [i_4 - 2] [i_4] [i_6]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) : (((/* implicit */int) ((signed char) var_3))))));
        }
        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (short i_11 = 2; i_11 < 13; i_11 += 4) 
            {
                for (short i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    {
                        arr_41 [i_4] [i_10] [i_11] [i_12] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-24))) + (var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((unsigned long long int) (~(((/* implicit */int) (short)-24)))))));
                        arr_42 [i_12] [i_11 + 3] [i_10] [i_4] = ((unsigned long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)58))))), (arr_26 [i_4 + 3] [i_10] [i_11] [i_12])));
                        var_26 = ((/* implicit */_Bool) max((((short) arr_10 [i_4 + 3] [i_4 + 2] [i_4 + 3])), (((/* implicit */short) min((arr_10 [i_4 + 3] [i_4] [i_4 + 3]), (arr_10 [i_4 + 1] [i_4] [i_4 - 1]))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_4]))) ? (((((/* implicit */_Bool) (unsigned short)6350)) ? (((/* implicit */unsigned int) var_7)) : (3611073658U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_10])) >> (14U))))))))));
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            for (int i_14 = 3; i_14 < 14; i_14 += 4) 
            {
                {
                    var_28 = ((/* implicit */signed char) (-(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)83)))) * (max((0), (((/* implicit */int) (unsigned char)90))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 4) /* same iter space */
                    {
                        arr_50 [i_14] [i_14] [i_13] [i_14] = ((/* implicit */signed char) ((unsigned short) (unsigned char)97));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                        {
                            arr_54 [i_4 + 3] [i_14] [i_4] = min((0U), (((3611073658U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_4 - 2] [i_4 + 1] [i_4] [i_14 + 2] [i_15 - 1]))))));
                            arr_55 [i_4 + 2] [i_4 - 1] [i_4] [i_14] [i_4 - 2] = ((/* implicit */short) max((((/* implicit */unsigned int) ((short) var_1))), (min((((/* implicit */unsigned int) (signed char)58)), (4294967295U)))));
                        }
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 13; i_17 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= ((~(arr_31 [i_17] [i_14] [i_4]))))))) | (((((/* implicit */_Bool) arr_45 [i_4 + 3] [i_17 - 1])) ? (((/* implicit */unsigned int) -1)) : (var_0))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_18 = 0; i_18 < 16; i_18 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */_Bool) ((((352652848) * (((/* implicit */int) var_3)))) + (((((/* implicit */_Bool) arr_4 [i_18] [i_4 + 3])) ? (-352652838) : (arr_4 [i_4 + 3] [i_4])))));
                            var_31 = ((/* implicit */int) ((unsigned int) ((15182884529669051948ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)72))))));
                        }
                        for (unsigned int i_19 = 0; i_19 < 16; i_19 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_17 + 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_17 - 1])) / (-720328898)))) : (max((((/* implicit */unsigned long long int) (short)0)), (3263859544040499668ULL)))));
                            arr_65 [i_4] [i_4 + 1] [i_14] [i_4] [i_4] = (-(((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (unsigned short)0)))));
                            var_33 += ((/* implicit */_Bool) ((unsigned short) ((((3263859544040499668ULL) & (((/* implicit */unsigned long long int) var_6)))) << (((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (unsigned char)6)))))));
                        }
                        for (unsigned int i_20 = 1; i_20 < 15; i_20 += 1) 
                        {
                            var_34 = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) arr_27 [i_20] [i_20 + 1] [i_20] [i_20] [i_20 + 1])));
                            arr_68 [i_4 - 2] [i_4 + 2] [i_4] [i_4] [i_4 + 1] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (var_0) : (arr_49 [i_14] [i_13] [i_13] [i_13])))) ? (((arr_27 [i_4 - 1] [i_4 + 3] [i_4 - 2] [i_4 - 2] [i_4 + 2]) & (((/* implicit */int) (signed char)51)))) : (((/* implicit */int) ((short) var_4)))));
                            arr_69 [i_4] [i_13] [i_14] = (~(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (signed char)-58)))) : ((+(((/* implicit */int) var_2)))))));
                        }
                        arr_70 [i_17] [i_13] [i_4] [i_14] [i_17] = ((/* implicit */int) (signed char)58);
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_21 = 3; i_21 < 15; i_21 += 4) 
                    {
                        arr_73 [i_4] [i_13] [i_14] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)19772))))), (((unsigned int) 720328907))))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)7), (((/* implicit */unsigned short) (signed char)-72))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((352652854) >= (((/* implicit */int) var_3)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)52))))))))) : (((((/* implicit */_Bool) (signed char)-67)) ? (((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                    }
                    for (unsigned long long int i_22 = 1; i_22 < 15; i_22 += 3) 
                    {
                        var_36 ^= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) 0)) * (683893638U)))));
                        arr_77 [i_14] [i_13] [i_14 + 1] [i_22] [i_22 - 1] = ((/* implicit */unsigned char) ((unsigned long long int) ((var_9) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) arr_67 [i_4] [i_4 - 2] [i_14] [i_14] [i_14] [i_14 - 2] [i_14 + 2])))));
                        var_37 *= ((/* implicit */_Bool) max((arr_26 [i_4] [i_4] [i_4] [i_4 - 2]), (((/* implicit */unsigned long long int) ((int) (unsigned short)0)))));
                    }
                    for (int i_23 = 0; i_23 < 16; i_23 += 1) 
                    {
                        var_38 = max((((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((arr_75 [i_14 + 2] [i_23] [i_14 + 2] [i_4 - 1] [i_23] [i_13]) <= (((/* implicit */unsigned long long int) var_0))))));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 - 2] [i_4 - 1] [i_14 - 1] [i_14 - 1])) ? (arr_9 [i_4 + 1] [i_4 + 1] [i_14 + 2] [i_14 - 1]) : (arr_9 [i_4 - 1] [i_4 - 1] [i_14 - 3] [i_14 + 2])))) ? (((((/* implicit */_Bool) (short)-13)) ? (arr_24 [i_4 + 2]) : (arr_24 [i_4 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0))))));
                    }
                }
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)245)) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U)))))) / ((+(((((/* implicit */_Bool) (short)-26)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32005))) : (var_1)))))));
}
