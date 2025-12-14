/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224567
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_19 += min((((/* implicit */unsigned long long int) (unsigned char)251)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0]))) : (min((((/* implicit */unsigned long long int) var_18)), (arr_0 [i_0]))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_15) ? (arr_0 [11LL]) : (arr_0 [i_0])))) ? (-6020242200520562786LL) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_1 [i_0]))))), (((/* implicit */long long int) var_17)))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_17)) : (arr_0 [i_0]))) >= (((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) var_6))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (arr_0 [i_0]))) : (18446744073709551597ULL)));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        var_22 = var_18;
        var_23 = ((((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) var_14)))) | (((/* implicit */int) ((arr_0 [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        arr_7 [i_2] [12] = min((((((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (6263900620119687332LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_5)), ((unsigned char)65))))))), (min((((long long int) var_8)), (((/* implicit */long long int) (~(var_11)))))));
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_4 = 3; i_4 < 13; i_4 += 1) 
            {
                for (int i_5 = 3; i_5 < 15; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_2])))) >= (min((var_10), (((/* implicit */long long int) var_0))))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) arr_15 [i_4] [i_4] [i_4] [i_4] [i_4 + 1] [i_5 - 3] [i_6]))))) ? (((/* implicit */int) ((max((((/* implicit */int) arr_3 [i_2])), (var_18))) == (((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_3] [i_4 - 1] [i_4] [i_3] [i_6])) ? (arr_13 [i_2]) : (var_6)))))) : (((/* implicit */int) ((unsigned char) arr_16 [i_4 + 2] [i_5 - 2] [i_6] [i_6] [i_6]))))))));
                            var_26 = ((((/* implicit */_Bool) (-(((arr_0 [i_3]) - (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2]))))))) ? (arr_5 [i_3] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5 + 1]))));
                            arr_17 [i_2] [i_3] [i_3] [i_4] [i_2] [i_3] [i_6] = ((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)13]);
                        }
                    } 
                } 
            } 
            arr_18 [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) (unsigned char)174))))) ? (((/* implicit */int) ((short) 444421182))) : (((/* implicit */int) arr_6 [i_2]))))), (var_3)));
        }
        for (short i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 14; i_8 += 2) 
            {
                arr_24 [i_2] |= ((/* implicit */signed char) ((((/* implicit */int) min(((signed char)-9), (((/* implicit */signed char) ((((/* implicit */int) var_12)) >= (var_17))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_19 [i_2] [i_2])) : (((/* implicit */int) (unsigned char)64))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (arr_20 [i_2] [i_2] [i_2])))) : (arr_9 [i_7] [i_7 - 1])))));
                arr_25 [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_15))))) && (((/* implicit */_Bool) (unsigned char)9)))))) : (((long long int) var_0))));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_8] [i_8 + 2] [i_8 - 1]))))) ? (((long long int) ((signed char) arr_15 [i_2] [i_2] [i_2] [i_2] [i_7] [i_7] [i_8 - 1]))) : (((/* implicit */long long int) -611479370)))))));
            }
            arr_26 [i_2] [i_7] [i_2] &= ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)9))))) ? (((((/* implicit */int) var_14)) % (((/* implicit */int) (unsigned short)53075)))) : (((((/* implicit */_Bool) arr_15 [i_7 - 1] [2] [i_7 - 1] [i_7] [i_7 + 2] [(signed char)3] [i_7])) ? (((/* implicit */int) min((arr_21 [i_2] [i_2] [i_2]), (((/* implicit */signed char) var_12))))) : (arr_9 [i_7] [i_7 + 3]))));
        }
        for (unsigned int i_9 = 1; i_9 < 15; i_9 += 3) 
        {
            var_28 &= ((/* implicit */unsigned short) min((((unsigned int) (unsigned char)224)), (((/* implicit */unsigned int) var_9))));
            var_29 = ((/* implicit */int) var_0);
        }
    }
    /* LoopSeq 2 */
    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        var_30 = ((/* implicit */long long int) var_14);
        arr_31 [i_10] [i_10] = ((/* implicit */unsigned char) (!((((~(arr_30 [(signed char)16]))) == (arr_30 [i_10])))));
        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_0 [i_10]))));
    }
    for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        arr_36 [i_11] [i_11] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_35 [i_11])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */int) arr_35 [i_11])) << (((/* implicit */int) arr_35 [i_11])))) : (((int) var_1))));
        /* LoopSeq 4 */
        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
        {
            var_32 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_33 [i_12])))) + (2147483647))) << (((var_2) - (2070423604)))));
            /* LoopSeq 1 */
            for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_13])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_33 [i_11]))))) == (((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */unsigned long long int) var_2)) : (var_7))))))));
                var_34 = ((/* implicit */unsigned char) min((((arr_40 [i_11] [i_11] [i_11]) | (var_18))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_13] [i_11] [i_11])))))));
            }
            var_35 &= var_12;
            var_36 |= ((/* implicit */unsigned long long int) var_10);
        }
        /* vectorizable */
        for (unsigned char i_14 = 2; i_14 < 17; i_14 += 3) 
        {
            var_37 += ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_40 [i_11] [i_14 + 1] [i_14 + 1])) & ((~(arr_42 [(unsigned char)6])))));
            var_38 = var_17;
            /* LoopNest 2 */
            for (long long int i_15 = 2; i_15 < 19; i_15 += 1) 
            {
                for (unsigned int i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    {
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) 875608854))));
                        var_40 = ((((((/* implicit */int) var_14)) | (((/* implicit */int) (unsigned char)0)))) | (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) arr_32 [i_14] [i_11])) : (var_4))));
                        arr_48 [(_Bool)1] [i_11] [i_15] [18LL] [i_14] [i_16] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) | (((/* implicit */int) arr_35 [i_14 - 2]))));
                    }
                } 
            } 
            var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? ((+(var_10))) : (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
        }
        /* vectorizable */
        for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
        {
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                for (signed char i_19 = 0; i_19 < 20; i_19 += 2) 
                {
                    for (unsigned char i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_34 [i_11] [i_20])))))));
                            var_43 = ((/* implicit */short) (((-(arr_44 [i_20] [i_17]))) << (((((((/* implicit */int) ((signed char) arr_49 [(short)0] [9ULL]))) + (147))) - (58)))));
                        }
                    } 
                } 
            } 
            arr_59 [i_11] [i_11] [i_17] &= ((/* implicit */unsigned char) ((1553197955) >= (var_6)));
            arr_60 [i_11] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_40 [i_11] [i_17] [i_17]) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3)))))));
            arr_61 [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_11] [i_11] [i_11]))) : (arr_44 [i_11] [i_17])));
            /* LoopNest 3 */
            for (short i_21 = 0; i_21 < 20; i_21 += 2) 
            {
                for (long long int i_22 = 1; i_22 < 19; i_22 += 1) 
                {
                    for (unsigned char i_23 = 3; i_23 < 19; i_23 += 3) 
                    {
                        {
                            arr_69 [i_11] [i_23] [i_21] = ((/* implicit */unsigned char) ((arr_0 [i_11]) ^ (((/* implicit */unsigned long long int) arr_47 [i_11] [i_21] [i_22] [i_23 + 1]))));
                            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */int) arr_57 [i_11] [i_22 + 1] [i_11] [i_23 - 1] [i_23])) - (((/* implicit */int) var_15)))))));
                            var_45 = ((/* implicit */int) ((var_12) ? (-7330554829994546993LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                            arr_70 [i_23] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_23 - 2] [i_23 - 1])) - (((/* implicit */int) arr_37 [i_23 - 2] [i_23 - 2]))));
                            arr_71 [i_11] [i_23] [i_23] = ((/* implicit */_Bool) (unsigned short)12460);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_24 = 0; i_24 < 20; i_24 += 2) 
        {
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 20; i_25 += 3) 
            {
                for (unsigned char i_26 = 0; i_26 < 20; i_26 += 2) 
                {
                    {
                        var_46 = ((/* implicit */long long int) ((int) arr_74 [i_25] [i_26]));
                        var_47 = ((/* implicit */long long int) arr_73 [i_25] [13LL]);
                        var_48 |= ((/* implicit */short) (+(((/* implicit */int) var_13))));
                    }
                } 
            } 
            var_49 += ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_24] [i_24] [i_11]))) >= (var_11))));
        }
        arr_80 [10] [i_11] = ((/* implicit */_Bool) (signed char)-86);
        var_50 *= ((/* implicit */signed char) ((min((((((/* implicit */int) var_13)) + (((/* implicit */int) var_16)))), ((+(1484611938))))) * (((/* implicit */int) arr_51 [i_11] [i_11]))));
    }
    var_51 = ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) >= (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (var_18)))) : (((((/* implicit */unsigned int) var_4)) % (var_1)))))) ? (var_18) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) var_15)) != (var_4)))), (min(((unsigned short)0), (((/* implicit */unsigned short) var_15))))))));
}
