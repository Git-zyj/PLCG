/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3535
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [2ULL])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_0 [10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) 4244600745U))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 4; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((short) (_Bool)1)))));
                        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((50366550U) >> (((((/* implicit */int) ((signed char) arr_2 [i_0] [i_1 - 1]))) + (39))))))));
                        var_13 ^= ((((((/* implicit */unsigned int) 536870400)) <= (50366550U))) ? (((/* implicit */int) ((((((/* implicit */int) var_0)) >> (((15129992507160563561ULL) - (15129992507160563544ULL))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_0 [i_3])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2] [i_3])) ? (arr_1 [i_1]) : (((/* implicit */long long int) 1573781308)))))))));
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */signed char) (short)0);
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) 17952035925346649823ULL)))));
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                for (short i_7 = 4; i_7 < 20; i_7 += 1) 
                {
                    {
                        var_16 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                        var_17 = ((/* implicit */unsigned char) var_4);
                        arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) arr_0 [i_5]);
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_8 [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_4])) ? (arr_11 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) <= (var_3)))))))))));
                        arr_21 [i_5] [i_5] [i_5] [i_4] = ((/* implicit */long long int) var_5);
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (int i_8 = 2; i_8 < 20; i_8 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (arr_2 [i_8 - 2] [i_8 - 2])));
            arr_24 [i_4] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_2 [i_8] [i_8])) : (((((/* implicit */int) var_2)) >> (((arr_17 [i_4] [i_4] [i_8 - 1]) - (11585852634250690964ULL)))))));
            arr_25 [i_4] [i_8] [i_4] = ((/* implicit */short) ((signed char) (~(((unsigned long long int) (unsigned char)54)))));
            arr_26 [i_8] = ((/* implicit */int) var_6);
        }
        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 20; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) (signed char)-84)))))))));
                            var_21 = ((/* implicit */unsigned short) ((long long int) ((int) ((arr_4 [i_12]) | (var_9)))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_4] [i_4] [i_4] [i_9 + 1]))) | (18446744073709551615ULL)))))));
            var_23 = (!(((/* implicit */_Bool) -1189346356)));
            var_24 = ((/* implicit */signed char) max((var_24), (var_4)));
        }
        /* vectorizable */
        for (signed char i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
        {
            arr_41 [i_4] |= (!(((((/* implicit */_Bool) arr_5 [i_13] [i_13] [i_4])) || (((/* implicit */_Bool) var_6)))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) 8037652023546984740LL)) : (((((/* implicit */_Bool) arr_38 [i_4] [i_4] [i_4] [i_4] [i_13] [i_13] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_13] [i_4]))) : (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]))))))));
        }
        for (signed char i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 4) 
            {
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_50 [i_4] [i_14] [(_Bool)1] [i_14] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                        var_26 &= ((/* implicit */unsigned long long int) ((_Bool) arr_46 [i_16 - 1] [i_16 - 1]));
                        arr_51 [i_4] [i_4] [(unsigned char)8] [i_4] [(unsigned char)8] [4LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_15])) ? (((/* implicit */int) arr_12 [i_14])) : (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) var_2))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (long long int i_17 = 2; i_17 < 18; i_17 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_18 = 2; i_18 < 18; i_18 += 4) 
                {
                    arr_58 [i_14] [i_4] = ((unsigned long long int) ((((int) 4244600739U)) / (((/* implicit */int) (unsigned short)30512))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */int) arr_39 [i_4] [i_4] [i_17 + 3])) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_40 [i_4] [i_4])))))))) <= ((~(((long long int) arr_2 [i_4] [i_4]))))))));
                    var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_18 + 3] [i_18 - 1] [i_18 - 1])) || (((/* implicit */_Bool) arr_22 [i_4] [i_17 + 3] [i_18 + 3]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9)))))))));
                }
                var_29 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                var_30 = (((!(((/* implicit */_Bool) arr_8 [i_17 + 3] [i_17 + 1] [i_17 + 3] [i_17 + 2] [i_4])))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3)))))));
                var_31 |= var_3;
            }
            /* vectorizable */
            for (unsigned char i_19 = 1; i_19 < 20; i_19 += 1) 
            {
                arr_62 [i_19] [i_19] [i_19] = ((/* implicit */_Bool) arr_53 [i_19] [i_4] [i_4]);
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_56 [i_4] [i_4] [i_19] [i_19 + 1] [i_19]))))))));
            }
            for (short i_20 = 1; i_20 < 20; i_20 += 4) /* same iter space */
            {
                arr_65 [i_14] [i_4] |= ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((short) 630528291)))) >> (((((/* implicit */int) arr_18 [i_4] [4LL] [i_14] [(_Bool)0])) - (136)))));
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) var_0))));
                arr_66 [i_4] [0ULL] |= ((/* implicit */_Bool) (~((~(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_36 [i_4] [i_14] [i_20 + 1] [i_14])) : (((/* implicit */int) (signed char)-2))))))));
                arr_67 [i_4] [i_4] [i_20] = ((/* implicit */_Bool) var_9);
            }
            for (short i_21 = 1; i_21 < 20; i_21 += 4) /* same iter space */
            {
                var_34 *= ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_36 [i_21 + 1] [i_4] [i_4] [i_4])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_14] [i_4])) ? (((/* implicit */int) arr_45 [3ULL] [i_14] [i_14])) : (((/* implicit */int) arr_19 [2U] [i_4] [i_4]))))) || ((!((_Bool)0))))))));
                var_35 *= ((/* implicit */unsigned short) ((_Bool) var_6));
            }
            arr_70 [i_4] [i_14] [i_14] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((int) 3312884428990791142ULL)) : (((/* implicit */int) var_1)))));
        }
        var_36 *= ((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((/* implicit */int) ((signed char) ((_Bool) var_0))))));
        arr_71 [i_4] = ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 463438294U)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_39 [i_4] [i_4] [i_4])))))) : ((-(((/* implicit */int) (short)1023)))));
    }
    var_37 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((short) var_3))) || (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_2)))))));
}
