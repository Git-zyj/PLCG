/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23030
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
    var_18 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_1)))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)111)) ? (-496644111) : (((/* implicit */int) (unsigned char)128))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) (unsigned char)145)) >> (((4053115635U) - (4053115616U)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)137)) ? ((~(((/* implicit */int) (unsigned short)0)))) : ((-(((/* implicit */int) (signed char)-40)))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11))) : (7881299347898368ULL))))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)120)) - (((/* implicit */int) (unsigned short)49774))))) ? (((/* implicit */int) ((signed char) arr_2 [i_1] [i_1]))) : (((/* implicit */int) arr_2 [i_1] [(_Bool)1]))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)-31577))))));
                        var_22 -= ((/* implicit */signed char) (+(var_8)));
                    }
                } 
            } 
            arr_12 [i_1] = ((/* implicit */int) (signed char)-72);
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_4] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_4] [(unsigned char)4]))));
            arr_16 [i_4] = ((/* implicit */signed char) 391107675);
            arr_17 [i_0] [7] [i_4] = ((/* implicit */short) ((var_5) ? (((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15771))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_7)))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_6 = 4; i_6 < 10; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((3378669227U) >= (var_10)));
                            arr_27 [i_0] [i_0] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) (short)26723);
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) 481756965U)) ? (((/* implicit */int) var_17)) : (arr_14 [i_0] [(_Bool)0]))))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    {
                        arr_33 [i_0] [i_5] [i_9] [i_5] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8351202638051896350LL)) ? (4648902125734171057ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15360)))));
                        var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)20)) ? (3563680149393912594LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)18))))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14287))) | (-18LL)))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (2866978084U))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)0] [(short)8]))) : (arr_28 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24433))) != (12420320708150593990ULL)))))));
            arr_34 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_5] [i_5])) ? (((/* implicit */int) arr_13 [4ULL] [i_5] [i_5])) : (((/* implicit */int) (short)2735))));
        }
        for (int i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            var_28 = ((/* implicit */_Bool) var_13);
            /* LoopSeq 2 */
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                arr_40 [(unsigned short)8] [i_11] [i_12] = ((/* implicit */int) (-(((((/* implicit */_Bool) -1809180323)) ? (((/* implicit */unsigned long long int) 2243331957U)) : (var_16)))));
                var_29 = ((/* implicit */unsigned int) ((((var_5) ? (4003362317U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225))))) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                arr_41 [i_0] [i_0] [i_11] [i_12] = ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)15763)))) % ((-(((/* implicit */int) (unsigned short)4095))))));
            }
            for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))) > (134184960ULL)));
                arr_44 [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) 134184960ULL)) ? (((/* implicit */int) (signed char)2)) : ((+(485311630)))));
            }
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                for (unsigned char i_15 = 1; i_15 < 10; i_15 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_16 = 0; i_16 < 12; i_16 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) min((var_31), (arr_36 [i_16] [(_Bool)1] [(_Bool)1])));
                            arr_51 [i_14] [i_11] [i_14] [i_15] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) & (((/* implicit */int) var_5)))) == (221653066)));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)64960))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)249)) || (((/* implicit */_Bool) var_4))))))));
                        }
                        for (int i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
                        {
                            arr_54 [i_17] [i_14] [i_14] [6U] [i_17] [i_11] = ((/* implicit */int) (short)28142);
                            var_33 = ((((/* implicit */_Bool) (short)-28143)) ? (-234959457) : (((/* implicit */int) (_Bool)0)));
                            var_34 = ((/* implicit */_Bool) (short)-28142);
                            arr_55 [i_17] [i_14] [4U] [i_14] [i_14] [i_0] = ((/* implicit */int) (short)-28143);
                        }
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-23016)))))));
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */int) (unsigned char)253);
        arr_56 [i_0] [i_0] = ((/* implicit */unsigned short) var_15);
        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_0] [i_0]))));
    }
    /* LoopNest 2 */
    for (unsigned short i_18 = 1; i_18 < 9; i_18 += 3) 
    {
        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 1) 
        {
            {
                var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_14))));
                arr_63 [i_18 + 1] [1U] = ((/* implicit */long long int) (-(2761690317U)));
            }
        } 
    } 
    var_39 = ((/* implicit */_Bool) (-(var_10)));
}
