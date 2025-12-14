/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222167
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned char)213))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_10 [i_4] [i_1] = ((unsigned char) max((((/* implicit */int) ((unsigned short) var_5))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_4 + 2])) : (((/* implicit */int) (unsigned char)10))))));
                                var_21 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3 + 1] [i_4 + 3])) ? (((/* implicit */int) arr_0 [i_3 + 1] [i_4 + 3])) : (((/* implicit */int) arr_0 [i_3 + 1] [i_4 + 3]))))), (((unsigned long long int) (unsigned short)34947)));
                                var_22 = ((/* implicit */int) max((((/* implicit */short) ((unsigned char) (unsigned char)90))), (((short) (short)-20540))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */short) max((min((arr_4 [i_0] [i_0] [(unsigned char)18] [i_0 + 1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)19538))))))), (((/* implicit */unsigned long long int) ((int) arr_4 [i_0] [i_0 - 1] [i_0] [i_0])))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                {
                    var_23 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) <= (arr_4 [i_7] [(unsigned char)6] [i_6] [(unsigned char)6]))) ? (((unsigned long long int) 16269848258862039974ULL)) : (arr_8 [(short)12] [i_7 + 1] [i_6] [i_7 + 1] [i_7]));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (short)20540))));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) 5362545230311252465ULL)));
                        arr_26 [i_5] [3] [i_5] [i_8] = ((/* implicit */unsigned short) ((int) (short)-20536));
                    }
                }
            } 
        } 
        var_26 = 6302736472567779987ULL;
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
        {
            for (unsigned char i_10 = 3; i_10 < 18; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    {
                        arr_35 [17] [i_11] [17] [i_11] [i_11] [17] = ((/* implicit */short) var_15);
                        var_27 -= ((/* implicit */short) arr_29 [i_10 + 1]);
                        arr_36 [i_5] [i_5] [i_10 + 1] [i_11] = (+(arr_18 [i_10] [i_10 + 1]));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (4626681335690798801ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22415)))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 1; i_12 < 21; i_12 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) arr_37 [i_12]);
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_12])) ? (((/* implicit */int) (short)20540)) : (((/* implicit */int) var_18))))) ? (((unsigned long long int) 8388607)) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_37 [i_12])))))));
        var_31 *= ((/* implicit */unsigned char) ((6951436969744985120ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 32767))))));
        arr_40 [(unsigned char)15] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) arr_39 [i_12 + 1])) : (((/* implicit */int) arr_39 [i_12 + 1]))));
    }
    for (unsigned char i_13 = 1; i_13 < 21; i_13 += 2) /* same iter space */
    {
        var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 28ULL)) ? (((/* implicit */int) var_18)) : (arr_42 [(unsigned short)8]))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)20556)), ((unsigned short)7149))))))) ? (((/* implicit */int) var_19)) : (((((/* implicit */_Bool) arr_38 [i_13 + 1] [i_13 + 1])) ? ((+(((/* implicit */int) var_19)))) : (((/* implicit */int) (unsigned char)219))))));
        var_33 = max((((((unsigned long long int) (short)-20540)) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_43 [6ULL])) == (((/* implicit */int) arr_38 [i_13] [13ULL])))))))), (min((((/* implicit */unsigned long long int) arr_42 [i_13])), (((((/* implicit */_Bool) 6323470868314987911ULL)) ? (var_12) : (8098385594159763454ULL))))));
        var_34 = ((/* implicit */int) var_0);
        var_35 += ((/* implicit */int) arr_37 [i_13]);
    }
    for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 4) 
    {
        arr_46 [i_14] [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)30589))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 1) 
        {
            for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        arr_56 [i_14] [23ULL] [i_14] [i_17] = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */int) (short)-20517)) >= (-740207416))) ? (1048575ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_14 + 2] [i_14 + 1] [i_16 + 1]))))));
                        var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53438)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4680))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) min((arr_52 [i_14 + 1] [i_15] [i_16] [i_17]), (((/* implicit */unsigned long long int) (unsigned char)36))))) ? ((+(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)10945)))))) : (min((12990750517790159165ULL), (((/* implicit */unsigned long long int) arr_55 [i_14 - 2] [2ULL] [i_15] [i_14] [2ULL] [i_16 + 1]))))));
                        arr_57 [i_14] [i_15] [i_15] [i_17] [22ULL] = ((/* implicit */short) (-(((/* implicit */int) (short)-20505))));
                    }
                    arr_58 [12ULL] [17ULL] [i_16] [i_16] = arr_49 [i_14 + 1];
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        for (int i_19 = 1; i_19 < 22; i_19 += 2) 
                        {
                            {
                                arr_64 [6ULL] [i_16 + 1] [i_19] [i_16] [i_16 - 1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_19 - 1] [i_16] [i_19] [22] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) : (arr_62 [i_19 + 1] [(unsigned short)1] [i_19] [(unsigned short)1] [i_16]))));
                                var_37 = ((/* implicit */unsigned long long int) var_4);
                                arr_65 [4] [16ULL] [i_16] [i_18] [i_19] = ((/* implicit */unsigned long long int) (unsigned char)37);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) (-(16973420876216463621ULL)))) ? (6698353505917142747ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4679)))));
    }
    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52810))) : (max((var_8), (var_12)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 2) 
    {
        arr_69 [i_20] [i_20] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55103)) ? (arr_4 [18ULL] [i_20] [i_20] [i_20]) : (((/* implicit */unsigned long long int) -259745795))))) ? (max((305462617), (-1))) : (arr_16 [i_20] [i_20] [i_20])))) ? (202479082417516457ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned char) 10825867898085372598ULL))))));
        var_40 = ((/* implicit */unsigned long long int) arr_27 [i_20]);
        var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_1 [i_20] [i_20])) ? (arr_60 [i_20] [i_20] [i_20] [i_20] [i_20]) : (((/* implicit */int) arr_45 [i_20] [i_20]))))))) / (((((/* implicit */_Bool) arr_30 [i_20])) ? (((((/* implicit */_Bool) (short)-30932)) ? (11700519925493300447ULL) : (14282413519408211781ULL))) : (11748390567792408869ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_21 = 1; i_21 < 13; i_21 += 2) 
        {
            for (int i_22 = 0; i_22 < 16; i_22 += 2) 
            {
                {
                    var_42 = ((/* implicit */unsigned char) min((var_42), (((unsigned char) ((((/* implicit */int) arr_0 [i_21 - 1] [i_21 + 3])) - (((/* implicit */int) arr_0 [i_21 + 1] [i_21 + 1])))))));
                    var_43 = ((((/* implicit */_Bool) 15644282498797272309ULL)) ? (((/* implicit */int) (unsigned short)12709)) : (((/* implicit */int) (short)(-32767 - 1))));
                    /* LoopNest 2 */
                    for (short i_23 = 1; i_23 < 15; i_23 += 2) 
                    {
                        for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 4) 
                        {
                            {
                                var_44 -= (-(((((/* implicit */_Bool) 180618002)) ? (11668330583792477857ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)109)))))))));
                                var_45 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_21] [i_23])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((7608837818941629320ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21235)))))) << (((((((/* implicit */_Bool) arr_75 [i_24] [i_23] [i_21] [i_21])) ? (((/* implicit */int) arr_15 [i_21 + 2])) : (((/* implicit */int) (short)-21386)))) - (37)))))) : ((-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_7) : (14907807540945522428ULL)))))));
                            }
                        } 
                    } 
                    arr_82 [i_21 + 2] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) (short)(-32767 - 1)))) ? (((((/* implicit */_Bool) (short)-4664)) ? (((/* implicit */int) (short)2985)) : (((/* implicit */int) (unsigned short)10557)))) : (((int) arr_30 [i_22])))), (((/* implicit */int) (unsigned char)1))));
                    var_46 = ((/* implicit */short) ((unsigned long long int) (-(arr_34 [i_20] [i_21 + 2] [i_21 + 3] [i_21 + 1] [i_22] [5]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_25 = 0; i_25 < 23; i_25 += 2) 
    {
        arr_86 [15ULL] [i_25] = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned char) (short)-4680))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [(unsigned char)20] [i_25] [i_25] [i_25] [i_25]))) : (1397262208029494281ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_25] [i_25] [i_25] [i_25] [i_25])) ? (6125652) : (((/* implicit */int) (short)30139))))) ? (((((/* implicit */_Bool) arr_53 [(unsigned short)7] [i_25] [i_25] [(unsigned short)7])) ? (((/* implicit */int) (unsigned short)7411)) : (-1356975654))) : (((/* implicit */int) ((7983536862633284067ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))))))));
        arr_87 [i_25] = ((/* implicit */unsigned short) (~(((unsigned long long int) 7983536862633284067ULL))));
        var_47 = ((/* implicit */unsigned long long int) min((var_47), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [i_25])) ? (10950866557748071877ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) (short)-25142)) : (((/* implicit */int) (short)(-32767 - 1))))))))) ? (((/* implicit */unsigned long long int) 879391405)) : (max((((((/* implicit */_Bool) 15291912454942602717ULL)) ? (4756995805447279199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22003))))), (((/* implicit */unsigned long long int) arr_53 [i_25] [8ULL] [i_25] [i_25]))))))));
    }
}
