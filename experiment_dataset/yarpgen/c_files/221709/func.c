/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221709
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned char) var_18))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) var_19))))) >> (((/* implicit */int) var_8)))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned long long int) max((((2147483647) ^ (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0])), (arr_0 [i_0]))))));
        var_22 = ((((/* implicit */int) var_16)) | (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) arr_3 [i_0])))));
        var_23 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) & (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (25U)))) ^ (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((unsigned int) arr_3 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_8 [13ULL] = ((/* implicit */int) ((((/* implicit */_Bool) -7054346328638507489LL)) || (((/* implicit */_Bool) (unsigned char)123))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((7054346328638507517LL), (((/* implicit */long long int) (short)-6836)))))))) >> (((((((/* implicit */_Bool) arr_6 [i_1])) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) var_14)))) + (52)))));
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_24 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)-49)), (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)3)) : (-2120981866)))) & (((((/* implicit */_Bool) var_8)) ? (arr_11 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 3; i_4 < 9; i_4 += 2) 
            {
                arr_18 [i_2] [i_3] [i_4 - 3] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) -7054346328638507509LL)) ? (((/* implicit */int) arr_17 [i_2] [i_3] [i_4 + 1])) : (((/* implicit */int) arr_14 [i_2] [i_2])))));
                var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_11))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)23)))))));
                var_26 = ((/* implicit */unsigned char) 5);
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_1 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_23 [i_3] [7LL] [i_5] = ((/* implicit */_Bool) ((arr_16 [i_3]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7524319084562017936LL)) ? (arr_21 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                arr_24 [(short)1] [i_3] [1] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))));
                var_28 ^= ((/* implicit */unsigned int) var_1);
            }
            var_29 += ((/* implicit */_Bool) (unsigned char)1);
            arr_25 [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_10 [i_2] [i_3])))));
        }
        for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    {
                        arr_34 [i_2] [i_2] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */long long int) max(((~(((/* implicit */int) min((arr_5 [i_2]), (var_13)))))), ((~(((/* implicit */int) (_Bool)1))))));
                        var_30 = ((/* implicit */int) max((var_30), ((~(((int) arr_0 [i_6 - 1]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) var_6))));
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            arr_42 [i_2] [i_6] [i_6] = max((var_2), (((/* implicit */long long int) (_Bool)1)));
                            var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(var_19)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100))) : (2393883028U)));
                        }
                        arr_43 [i_2] [i_6] [i_9] [i_9] = ((/* implicit */unsigned char) ((min(((~(arr_15 [i_2] [i_6 - 1] [i_6 - 1] [i_10]))), (((/* implicit */unsigned long long int) 1901084277U)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 103079215104ULL)) ? (((((/* implicit */_Bool) 1829905846802367881LL)) ? (((/* implicit */int) arr_36 [i_6] [9])) : (((/* implicit */int) arr_40 [i_2] [i_2] [i_2] [i_2] [i_2])))) : (((/* implicit */int) var_13)))))));
                        arr_44 [i_2] [i_2] [i_6] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) arr_12 [i_6] [i_6 + 1])) ? (((/* implicit */unsigned long long int) (-(var_17)))) : (max((((/* implicit */unsigned long long int) 4294967287U)), (562681883840158137ULL)))))));
                    }
                } 
            } 
            arr_45 [i_6] [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_28 [i_6] [i_6 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_28 [i_6] [i_6 + 1]))), (max((arr_28 [i_6] [i_6 + 1]), (((/* implicit */unsigned long long int) var_7))))));
            arr_46 [i_2] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned long long int) ((((arr_29 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]) + (9223372036854775807LL))) << (((((arr_29 [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1]) + (3346453600689979935LL))) - (60LL))))));
        }
        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) /* same iter space */
        {
            arr_49 [i_2] [i_2] [i_12] = ((/* implicit */int) (((-(max((((/* implicit */unsigned long long int) var_19)), (var_1))))) == (((((var_15) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (arr_11 [i_12])))));
            arr_50 [i_2] [i_12] [i_12] = ((/* implicit */unsigned char) var_0);
        }
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                for (int i_15 = 1; i_15 < 9; i_15 += 2) 
                {
                    {
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) var_7))));
                        var_34 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_15)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    }
                } 
            } 
            arr_60 [i_2] [5] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_57 [(short)6] [i_13] [i_13] [i_13]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_47 [i_2] [i_13] [(short)0])))) - ((-(-4585045397752899860LL)))));
        }
        arr_61 [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_36 [i_2] [i_2])) / (((/* implicit */int) arr_36 [i_2] [i_2])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_17)), (1633212984U)))) ? (((int) arr_5 [i_2])) : (((/* implicit */int) arr_10 [i_2] [i_2]))))));
        arr_62 [i_2] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_31 [i_2] [i_2] [(short)4] [i_2])) ^ (4294967288U)))), (((-1LL) & (((/* implicit */long long int) 323962525))))))) && (((/* implicit */_Bool) max((arr_54 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_52 [i_2] [i_2] [i_2]))))));
    }
    /* vectorizable */
    for (long long int i_16 = 1; i_16 < 13; i_16 += 2) 
    {
        arr_66 [i_16] [i_16] = ((/* implicit */short) 527765581332480ULL);
        arr_67 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_16 - 1])) ? (((((/* implicit */_Bool) arr_64 [i_16])) ? (((/* implicit */int) arr_7 [i_16])) : (((/* implicit */int) arr_3 [i_16])))) : (((/* implicit */int) var_8))));
    }
}
