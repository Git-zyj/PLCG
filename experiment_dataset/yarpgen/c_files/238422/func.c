/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238422
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
    var_17 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (18446744073709551589ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_16))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_3))) || (((/* implicit */_Bool) 5857392050063183554LL))));
        arr_3 [i_0 + 1] [i_0 + 1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_14))))));
        var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_19 = ((/* implicit */unsigned long long int) (~(((int) (signed char)108))));
                var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_4 [i_3] [i_3])))) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-33)))))));
            }
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))));
        }
        for (int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 4; i_5 < 18; i_5 += 2) 
            {
                arr_18 [i_1] = ((/* implicit */_Bool) 514005518U);
                arr_19 [(unsigned char)17] [i_4] [(unsigned char)0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_10 [i_1] [(unsigned char)9] [(unsigned char)9] [i_1])) : (((long long int) var_11)))));
            }
            for (unsigned char i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    arr_26 [i_1] [i_4] [6U] [i_6 - 1] [(unsigned short)15] [i_7] = ((/* implicit */_Bool) var_3);
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) 16777215LL);
                        var_23 -= ((/* implicit */int) ((short) (+(((/* implicit */int) arr_27 [(_Bool)1] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 2] [i_6 + 2] [i_8])))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_28 [(unsigned short)4] [i_4] [i_6] [i_7] [i_9])), (max((4194303U), (((/* implicit */unsigned int) (signed char)-60))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (arr_0 [i_1] [i_1]) : (-2147483636)))) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (unsigned char)210))))) : ((((((_Bool)1) || (((/* implicit */_Bool) -2095607304)))) ? (((/* implicit */unsigned int) ((int) var_7))) : (3780961777U)))))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -15)))))) ^ (((var_9) & (((/* implicit */long long int) 0)))))) - (((/* implicit */long long int) ((/* implicit */int) min((max((((/* implicit */unsigned char) var_14)), (arr_33 [i_4]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || ((_Bool)0)))))))))))));
                    }
                    var_26 = ((/* implicit */unsigned short) var_0);
                    var_27 &= ((/* implicit */unsigned short) arr_25 [i_1] [i_4]);
                    var_28 = var_15;
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_37 [i_1] [i_4] [i_4] [(short)10] [i_10] &= ((/* implicit */unsigned short) 0U);
                    var_29 -= ((/* implicit */int) ((_Bool) arr_0 [i_6 + 2] [i_6 + 2]));
                    var_30 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_6 + 1] [i_10])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_16))))) ? (((arr_30 [i_6] [i_6] [i_1]) >> (((var_13) - (14436743229876636008ULL))))) : (((14800634912930994349ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_6]))))))) ^ (((((/* implicit */_Bool) min(((signed char)84), (var_0)))) ? (4275378437114652816ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                }
                arr_38 [i_1] = ((/* implicit */long long int) var_11);
            }
            arr_39 [i_4] = ((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_4)), (arr_25 [(_Bool)1] [(_Bool)1]))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))) >= (((((/* implicit */_Bool) (short)-1228)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_1] [i_4] [i_1] [i_1] [i_1]))))));
            /* LoopSeq 1 */
            for (signed char i_11 = 2; i_11 < 18; i_11 += 3) 
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_32 [i_4] [i_11] [7] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_12)) : (2095607298)))))) ? (min((((/* implicit */unsigned long long int) arr_34 [i_11 - 2] [i_11 - 2] [i_11])), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93)))));
                var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((int) (_Bool)0))))));
                arr_44 [i_11] [i_4] [i_11] = ((/* implicit */_Bool) 9877014020872338795ULL);
                var_33 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)25808)) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_11)), (arr_8 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_4] [i_4] [i_11] [i_11 + 1] [i_11 + 1] [i_11]))) : ((-(140737488355327LL)))))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned short)0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_34 [i_11] [(_Bool)1] [(_Bool)1]))))) : (max((18446744073709551607ULL), (((/* implicit */unsigned long long int) (short)0))))))));
                var_34 = ((/* implicit */unsigned short) min((((/* implicit */short) var_11)), ((short)-1895)));
            }
        }
        for (int i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
        {
            var_35 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3146)) >> (((((/* implicit */int) ((short) ((((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) (short)25830)))))) - (25808)))));
            arr_49 [(signed char)18] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) 1073741823)))));
            arr_50 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -140737488355328LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))))));
            var_36 -= ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) (signed char)-75)))));
        }
        arr_51 [12] [i_1] = ((/* implicit */unsigned short) ((int) ((long long int) arr_48 [i_1])));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_13 = 1; i_13 < 21; i_13 += 3) 
    {
        var_37 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_54 [i_13 + 1])) ? (((/* implicit */int) arr_53 [i_13 + 1])) : (((((/* implicit */_Bool) arr_52 [i_13 + 1])) ? (((/* implicit */int) arr_53 [i_13])) : (((/* implicit */int) (short)25808)))))));
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_58 [(unsigned char)18] [i_14] [i_14] |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) -1)))))));
            arr_59 [i_13 - 1] [i_14] = ((/* implicit */signed char) var_4);
            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) var_13))));
            var_39 = ((/* implicit */unsigned int) ((long long int) ((_Bool) (!(((/* implicit */_Bool) var_1))))));
        }
        /* LoopSeq 4 */
        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((short) arr_56 [(unsigned char)2] [(unsigned short)6] [i_15])))));
            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)896)) ? (var_2) : (((/* implicit */long long int) arr_57 [i_15] [i_15] [i_13]))))) ? (arr_62 [i_13 + 1] [(signed char)6] [i_15]) : (((/* implicit */unsigned int) -1181592756)))), (((/* implicit */unsigned int) arr_61 [i_13 + 1] [i_13])))))));
            var_42 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_56 [(signed char)18] [(signed char)18] [i_13]))))), (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [(short)4] [i_15] [i_13]))) : (var_1)))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            arr_65 [i_13] [i_16] [i_16] = ((/* implicit */unsigned int) ((short) max((((/* implicit */long long int) var_15)), (var_9))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 2) 
            {
                arr_69 [i_16] [i_16] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_13 + 1] [i_16] [i_17])) && (((/* implicit */_Bool) var_10))));
                var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (signed char)-63))));
                var_44 -= (!(((/* implicit */_Bool) arr_68 [i_17])));
            }
            for (short i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                arr_73 [i_16] [i_16] [(_Bool)1] = (-(((arr_53 [i_13 + 1]) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) arr_53 [i_13 + 1])))));
                var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) (signed char)92))));
            }
            var_46 = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */int) arr_70 [i_13] [i_13 - 1] [i_13])), (((((/* implicit */_Bool) arr_57 [i_16] [i_13] [i_13])) ? (-3) : (((/* implicit */int) var_15)))))));
            arr_74 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) var_10);
            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((((/* implicit */_Bool) ((int) (_Bool)0))) || (((/* implicit */_Bool) ((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) var_15)))))))))));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                var_48 -= ((/* implicit */unsigned int) ((int) var_5));
                var_49 = ((/* implicit */unsigned short) min((var_49), ((unsigned short)0)));
                arr_82 [i_20] [i_20] [i_19] [i_20] = ((/* implicit */_Bool) (unsigned short)51456);
            }
            var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (((+(((/* implicit */int) arr_70 [i_13 + 1] [i_13 - 1] [i_13 + 1])))) != (((/* implicit */int) min((arr_70 [i_13 + 1] [i_13 - 1] [i_13 + 1]), (arr_70 [i_13 + 1] [i_13 - 1] [i_13 + 1])))))))));
            arr_83 [i_13] [i_19] = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1174771933)) ? (((((/* implicit */int) arr_75 [i_19] [i_13])) & (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_53 [i_13]))))) == (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) arr_61 [(signed char)2] [i_19])) : (24))))))));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
        {
            var_51 = ((/* implicit */_Bool) ((unsigned long long int) ((5514988633745932403ULL) ^ (2ULL))));
            var_52 += ((/* implicit */long long int) arr_57 [i_13 + 1] [(unsigned char)19] [i_13]);
            var_53 -= ((signed char) ((short) arr_67 [i_13] [(_Bool)1] [i_13 - 1]));
            arr_86 [i_13] = ((/* implicit */unsigned int) (signed char)92);
        }
        var_54 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_76 [i_13 + 1] [i_13]) ? (((/* implicit */int) (unsigned short)1433)) : (((/* implicit */int) arr_76 [i_13 + 1] [i_13 - 1]))))) != ((~(12931755439963619232ULL)))));
    }
    for (long long int i_22 = 2; i_22 < 12; i_22 += 3) 
    {
        var_55 -= ((/* implicit */_Bool) var_9);
        var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) -2320648448805977071LL))));
    }
    var_57 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111)))))))))) - (var_10)));
}
