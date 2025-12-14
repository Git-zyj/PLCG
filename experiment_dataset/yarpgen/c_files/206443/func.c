/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206443
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) arr_2 [i_0]))));
        arr_3 [(short)8] [(short)8] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)0) ? (arr_0 [i_0] [20LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? ((((_Bool)1) ? (var_16) : (var_15))) : (((/* implicit */unsigned long long int) var_7)))) ^ ((((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? ((~(var_13))) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [(signed char)12] [i_0])))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) -8315669631849646825LL))))) ? ((~(arr_0 [i_0] [i_0]))) : (((3064106730561273463ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
        var_22 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (-(3064106730561273451ULL)))))) - (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [14ULL] [(_Bool)1]))) + (arr_0 [(_Bool)1] [(_Bool)1])))));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 1) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_1 + 3]))))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_6))))));
        var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4271802774U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (1082331758592ULL) : (var_15)))) ? (max((((arr_6 [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6))), (((((/* implicit */_Bool) 459929912217897039LL)) ? (var_16) : (var_6))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) arr_1 [i_1 - 1]))), (((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) (_Bool)1)))))))));
        var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_0))))))) : (4294967282U)));
        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 6U)) ? (var_7) : (4294967288U))))))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 3; i_4 < 20; i_4 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned char) var_18);
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_2] [i_3] [8U])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_15 [i_2] [i_2]))))))) ? (min((((/* implicit */unsigned long long int) arr_20 [i_2] [i_4 - 2] [i_5 + 1] [i_5] [i_6 + 1])), (((arr_2 [i_2]) ? (((/* implicit */unsigned long long int) 8315669631849646846LL)) : (var_13))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(8315669631849646825LL)))) ? (arr_14 [i_5 - 1] [(unsigned char)4] [i_5] [(signed char)2]) : (((long long int) arr_1 [i_2]))))))))));
                            arr_21 [14ULL] [i_3] [i_3] &= (+(max((((/* implicit */unsigned int) (signed char)88)), (var_7))));
                        }
                    } 
                } 
                var_30 = ((signed char) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_3]))) : (18446742991377793024ULL)));
                arr_22 [i_2] [i_2] [10U] |= ((/* implicit */unsigned long long int) var_11);
            }
            for (signed char i_7 = 3; i_7 < 20; i_7 += 4) /* same iter space */
            {
                arr_25 [i_2] [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((3064106730561273476ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))))));
                var_31 += ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) 4833104140317133402LL)) ? (((/* implicit */int) arr_19 [(signed char)16] [(_Bool)1] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_19)))), (((/* implicit */int) arr_10 [8] [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3923194907364218389LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)64))))))))));
            }
            arr_26 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((((/* implicit */int) var_3)) / (var_18)))) ^ ((-(4833104140317133370LL))))), ((-(((3923194907364218389LL) ^ (arr_24 [(short)5] [6LL] [i_3])))))));
            var_32 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (arr_0 [20] [(unsigned char)14]))))))), (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_12 [i_2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3])))))));
        }
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (max((min((arr_9 [i_2]), (arr_9 [i_2]))), (14053104259919262324ULL)))));
        arr_27 [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [4LL] [i_2] [4LL])) ? (((/* implicit */unsigned long long int) var_7)) : (var_14)));
    }
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (max((((arr_16 [(unsigned char)10] [i_8] [i_10]) ? (((((/* implicit */_Bool) 3331300330U)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) arr_32 [i_8])) : (((/* implicit */int) var_4))))))), (max((((((/* implicit */_Bool) (short)-4767)) ? (var_6) : (((/* implicit */unsigned long long int) -3923194907364218397LL)))), (((/* implicit */unsigned long long int) var_5))))))));
                    var_35 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((arr_17 [i_8]), (((/* implicit */signed char) arr_32 [i_9 - 1]))))), (((((/* implicit */_Bool) ((long long int) 425053566U))) ? ((-(1082331758595ULL))) : (((/* implicit */unsigned long long int) (+(var_7))))))));
                }
            } 
        } 
        arr_35 [i_8] = min((((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [(short)2] [i_8] [i_8] [11LL])) / (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((_Bool) -4833104140317133376LL))) : (((((/* implicit */int) var_19)) / (((/* implicit */int) arr_10 [i_8] [i_8])))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) >> (((max((arr_28 [i_8]), (((/* implicit */long long int) arr_20 [i_8] [i_8] [i_8] [(short)20] [i_8])))) - (4512305312084282581LL))))));
        var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) (short)32758))))));
        /* LoopSeq 3 */
        for (short i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) 3923194907364218395LL))));
            var_38 ^= ((/* implicit */_Bool) (+(((arr_10 [i_11] [i_11]) ? (((/* implicit */int) arr_10 [i_11] [i_8])) : (((/* implicit */int) arr_10 [i_11] [i_8]))))));
        }
        for (short i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (short i_14 = 1; i_14 < 20; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) 15968018047534559161ULL))));
                            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((var_14) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_19)), (arr_42 [i_8] [i_12]))))))))));
                        }
                    } 
                } 
                arr_51 [i_8] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((arr_2 [i_13]) ? (((/* implicit */int) arr_47 [i_12] [i_13])) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) ((long long int) arr_38 [6U] [i_12]))) ? (max((4767205477599098435LL), (((/* implicit */long long int) arr_13 [i_13] [4LL])))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */long long int) ((unsigned int) arr_46 [(short)4] [i_12] [i_12] [i_12] [(short)4])))));
            }
            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) max((4294967289U), (4294967290U))))));
        }
        for (short i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
        {
            var_42 = arr_40 [(_Bool)1] [i_16] [(signed char)13];
            var_43 += ((/* implicit */short) var_6);
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((arr_55 [i_8] [i_16] [i_17]) != (((/* implicit */unsigned long long int) arr_28 [0U])))))) ? (((/* implicit */long long int) 2506762500U)) : (((arr_16 [6ULL] [i_16] [i_17]) ? (max((((/* implicit */long long int) var_19)), (arr_14 [i_8] [20ULL] [i_8] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_16] [i_17]))))))))));
                var_45 *= ((/* implicit */short) ((-8315669631849646846LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-15)))));
                var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) arr_20 [i_17] [i_16] [i_17] [i_17] [i_8])) ? (179406848356556716LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))))));
                /* LoopNest 2 */
                for (unsigned short i_18 = 3; i_18 < 20; i_18 += 2) 
                {
                    for (signed char i_19 = 2; i_19 < 21; i_19 += 3) 
                    {
                        {
                            arr_62 [i_19] [i_19] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_57 [i_19 - 2] [9ULL] [i_18 + 2] [i_19 - 2])) ? (((/* implicit */int) arr_57 [i_19 + 1] [5ULL] [i_18 - 2] [i_8])) : (((/* implicit */int) var_8))))));
                            var_47 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_49 [(signed char)2] [(unsigned char)20] [6ULL] [i_18 + 2] [i_19 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_18] [i_16] [0])))))) ? (4833104140317133388LL) : (((/* implicit */long long int) (-(((/* implicit */int) var_17)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -4833104140317133384LL)), (var_12)))) ? (((((/* implicit */_Bool) var_15)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_19] [(unsigned char)6]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (1300707949U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_18 - 1] [i_18])))))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_60 [i_8] [i_8] [i_16] [i_17] [i_18 - 2] [i_19 - 2])))));
                            arr_63 [i_8] [i_16] [i_16] [3U] [i_18] [i_18] [i_19] = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) arr_44 [0LL] [i_18 - 2] [i_18 - 1] [i_18 - 3]))))), (((4833104140317133384LL) | (((/* implicit */long long int) ((/* implicit */int) arr_44 [(_Bool)1] [i_18 - 2] [i_18 - 1] [i_18])))))));
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned int i_20 = 0; i_20 < 22; i_20 += 1) /* same iter space */
    {
        var_48 = ((/* implicit */signed char) max((var_12), (((((/* implicit */_Bool) arr_9 [i_20])) ? (arr_9 [i_20]) : (arr_9 [i_20])))));
        var_49 = ((/* implicit */short) arr_52 [i_20]);
        arr_67 [i_20] = ((/* implicit */unsigned int) var_3);
        var_50 *= ((/* implicit */unsigned long long int) (short)18712);
    }
}
