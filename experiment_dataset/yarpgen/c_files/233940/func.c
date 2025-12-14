/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233940
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) var_3);
        arr_3 [i_0] = ((/* implicit */int) 20ULL);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24; i_1 += 2) 
    {
        var_17 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4926309896195109931ULL))));
        arr_7 [i_1] = ((/* implicit */int) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) var_13)))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
        var_18 = ((((/* implicit */_Bool) 67108863ULL)) ? (((/* implicit */unsigned long long int) var_14)) : (var_8));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_12)) <= (var_5)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 355956309))))))))));
    }
    /* LoopSeq 3 */
    for (int i_2 = 1; i_2 < 12; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((!(var_3))) ? (max((((((/* implicit */_Bool) 2198486384640ULL)) ? (-355956322) : (((/* implicit */int) (unsigned short)65512)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17))) != (2305843000623759360ULL)))))))))));
        var_21 = ((/* implicit */int) max((var_21), (max((((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_15))))) || ((!(((/* implicit */_Bool) 1047552))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44195)) ? (1880940714) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((11505564299667358511ULL) > (((/* implicit */unsigned long long int) var_4)))))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */int) var_7);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_4 = 2; i_4 < 12; i_4 += 4) 
        {
            var_23 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_16))))));
            var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2305843000623759379ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16838802005526594135ULL)) ? (847479401) : (16383)))) : (4095ULL)));
            arr_19 [i_3] [i_3] = (((-(16140901073085792258ULL))) - (((/* implicit */unsigned long long int) (-(-847479402)))));
            arr_20 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -16384)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1016015919))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 3; i_5 < 10; i_5 += 2) /* same iter space */
        {
            arr_24 [i_5] = ((/* implicit */int) ((((var_6) + (9223372036854775807LL))) << (((((var_4) ^ (((/* implicit */long long int) var_2)))) - (1351317183783800083LL)))));
            var_25 += ((((/* implicit */_Bool) (~(351116352)))) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) var_16)))));
            arr_25 [i_5] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) 134217727))));
        }
        for (unsigned short i_6 = 3; i_6 < 10; i_6 += 2) /* same iter space */
        {
            arr_30 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (3113576080478511960ULL)))) ? (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) 1016015912)))) : (((/* implicit */unsigned long long int) 1016015905)))))));
            /* LoopSeq 1 */
            for (int i_7 = 3; i_7 < 12; i_7 += 4) 
            {
                /* LoopSeq 3 */
                for (int i_8 = 2; i_8 < 12; i_8 += 4) 
                {
                    var_26 = ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)-51))))))) ? (-355956334) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)55050)), (18446744073709551615ULL))))))));
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 355956309))))), (var_8))))));
                        var_28 = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2323))))));
                        arr_40 [i_3] [i_3] [i_6] [(_Bool)1] [i_9] [(unsigned short)11] = ((/* implicit */unsigned short) max((((((/* implicit */int) ((1602522266854063008ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) << (((-1776230981) + (1776230992))))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54997))))) % (-1298016580)))));
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 12; i_10 += 3) 
                    {
                        var_29 ^= var_7;
                        arr_43 [i_10 - 2] [i_8] [i_6] [i_6] [i_3] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 355956309))))));
                        var_30 |= ((/* implicit */int) ((((/* implicit */int) (!((!(var_1)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (var_11)))))))));
                    }
                    arr_44 [i_8] [i_8] [i_6] [i_6] [i_6] [0] = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned short)5857)) ? (var_9) : (9488295287173796570ULL)))));
                    arr_45 [i_3] [i_8] [i_3] [i_3] |= ((/* implicit */unsigned long long int) (!((!((!(var_3)))))));
                }
                for (signed char i_11 = 3; i_11 < 11; i_11 += 4) 
                {
                    var_31 = (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((1602522266854063026ULL) - (1602522266854063001ULL))));
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_7), ((unsigned short)65534)))))))));
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (548682072064ULL)))) || ((!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((-1880940714) + (1880940732)))))))))))));
                    arr_49 [i_6] [i_6 - 3] [i_6 - 3] [12ULL] = ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) -2102565653)) * (16844221806855488607ULL)))))) ? (((/* implicit */unsigned long long int) ((var_5) & (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (unsigned short)62721)) ? (1602522266854062999ULL) : (((/* implicit */unsigned long long int) 267911168)))));
                }
                for (int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    arr_53 [i_12] [i_7] [i_6] [i_3] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) 17545264066169213987ULL)) ? (((/* implicit */unsigned long long int) 2147483647)) : (15364610572930631560ULL))) * (((/* implicit */unsigned long long int) -267911169))));
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        arr_56 [i_3] [i_3] [i_3] [i_6] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 986330341)))))))) <= (max((14497817540710778131ULL), (((/* implicit */unsigned long long int) 614069200))))));
                        var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                        var_35 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 510408800)) ^ (var_6))))));
                    }
                    for (int i_14 = 1; i_14 < 11; i_14 += 2) 
                    {
                        arr_59 [i_3] [i_3] [i_3] [i_3] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) 267911168))));
                        arr_60 [i_6] = ((/* implicit */int) (unsigned short)49457);
                        arr_61 [i_14] [i_3] [i_6] [i_6] [(unsigned short)9] [i_3] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_8))))));
                    }
                }
                arr_62 [i_6 + 2] [i_6 + 2] [i_6] [i_6] = ((/* implicit */unsigned short) var_3);
            }
            var_36 -= ((/* implicit */signed char) ((56119487) / (((/* implicit */int) (unsigned short)16066))));
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 1) 
    {
        var_37 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) 10231683743555775735ULL)))) || (((/* implicit */_Bool) var_0)))) ? ((~((~(-2147483647))))) : (((/* implicit */int) (!((((_Bool)1) || (((/* implicit */_Bool) (-2147483647 - 1))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
        {
            arr_69 [i_15] = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) 2144442635))))))));
            var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)38053)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
            var_39 = ((/* implicit */int) var_8);
            arr_70 [i_15] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((var_14) ^ (-1009652671)))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) || (((/* implicit */_Bool) (unsigned short)41106))))) : (var_5)));
        }
        for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) /* same iter space */
        {
            arr_73 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_14) - (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)0)) : (-211486378)))))) ? (var_11) : ((+(((((/* implicit */int) (unsigned short)664)) - (218543440)))))));
            var_40 += ((/* implicit */unsigned long long int) var_6);
            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
        }
    }
    var_42 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 15664271473874010059ULL)))) ? (((/* implicit */long long int) var_10)) : (var_4)));
}
