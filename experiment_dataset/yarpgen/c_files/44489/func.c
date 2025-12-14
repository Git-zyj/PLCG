/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44489
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
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (1745040733)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (257744628U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18408))) * (((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_12))))))));
    var_15 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_16 = ((((/* implicit */_Bool) ((0LL) / (arr_1 [i_0])))) ? ((~(((((/* implicit */_Bool) (short)10898)) ? (4194240LL) : (((/* implicit */long long int) var_0)))))) : (((/* implicit */long long int) 2705408882U)));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            arr_4 [(short)8] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [4LL] [i_0] [i_1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) ((unsigned char) (signed char)-121)))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                var_17 *= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_18 |= ((/* implicit */short) arr_11 [i_3]);
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_2) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            }
            var_20 ^= ((/* implicit */unsigned short) var_12);
        }
        for (short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                for (int i_6 = 1; i_6 < 10; i_6 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 2; i_7 < 11; i_7 += 4) 
                        {
                            arr_23 [i_6] = ((/* implicit */signed char) (+((~(arr_21 [(_Bool)1] [i_4] [i_4] [i_4] [i_6] [i_4] [i_4])))));
                            var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? (((/* implicit */int) arr_18 [i_6] [i_7] [i_6] [i_6] [i_6 + 3] [i_6 + 2])) : (((/* implicit */int) arr_18 [i_7 + 1] [i_7] [i_6] [i_6] [i_6] [i_6 + 3]))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (signed char)-120))))))) ? (((/* implicit */int) arr_7 [i_6 + 2] [i_6] [i_6 + 2])) : (((/* implicit */int) (unsigned char)107))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((var_6) ? (4780229902375141305ULL) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_4] [i_6] [i_7]))))) ? (arr_15 [i_6 + 2] [i_7] [i_7 - 1] [i_7 + 2]) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(short)11] [(short)11]))) : (var_12)))))))))));
                        }
                        var_24 ^= ((/* implicit */long long int) arr_16 [(_Bool)1] [i_5] [i_6 + 2] [i_6 + 3]);
                        var_25 = (~((~(arr_9 [i_0] [i_6 + 2] [i_0]))));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (short)-5))) ? (((((/* implicit */_Bool) (short)10898)) ? (((((/* implicit */_Bool) var_3)) ? (var_7) : (arr_22 [i_4] [i_4] [2U] [i_0] [6U] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-10911)) + (((/* implicit */int) arr_17 [i_4] [i_0] [i_4]))))) ? (((((/* implicit */_Bool) arr_13 [i_0])) ? (var_2) : (((/* implicit */long long int) 3620798457U)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_4])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)10911)))))))));
        }
        /* LoopSeq 1 */
        for (int i_8 = 1; i_8 < 11; i_8 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8 + 1] [i_8] [i_8 + 1] [i_8])) ? (((/* implicit */int) arr_3 [i_8 + 2] [i_8] [i_8 + 2])) : (((/* implicit */int) arr_16 [i_8 + 1] [i_8] [i_8] [i_8]))))) ? (var_1) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [8] [i_0] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_8])) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (arr_12 [i_0]) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)24)))))))));
            arr_26 [i_0] [i_8] = (short)10873;
        }
        /* LoopSeq 2 */
        for (short i_9 = 2; i_9 < 11; i_9 += 1) 
        {
            var_28 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned char)211)))))))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) : (6U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)120))))) ? (((/* implicit */int) (short)-10898)) : (((/* implicit */int) arr_28 [(unsigned char)9]))))) : (((((/* implicit */_Bool) (short)5)) ? (4194240LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_9 - 2])))))))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16574))) : ((+(2254162709U)))));
            arr_32 [i_0] [i_10] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)53))) : (arr_11 [i_0]))) | ((~(arr_27 [i_10] [i_0])))));
            var_31 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))));
            var_32 ^= ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
        }
    }
    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
    {
        arr_35 [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_11])) ? (arr_34 [i_11]) : (((/* implicit */unsigned int) arr_33 [i_11]))))) ? (((((/* implicit */_Bool) arr_33 [i_11])) ? (((/* implicit */unsigned long long int) var_0)) : (var_9))) : (((/* implicit */unsigned long long int) (-(arr_33 [i_11]))))));
        var_33 = ((/* implicit */signed char) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */short) (-((~(((/* implicit */int) (_Bool)1))))));
        var_35 = ((_Bool) (_Bool)1);
        arr_38 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_34 [i_12]))));
        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_37 ^= ((/* implicit */short) (-(arr_40 [6])));
        /* LoopNest 3 */
        for (short i_14 = 2; i_14 < 24; i_14 += 4) 
        {
            for (unsigned short i_15 = 2; i_15 < 23; i_15 += 2) 
            {
                for (unsigned char i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    {
                        var_38 += (-(((((/* implicit */_Bool) (signed char)46)) ? (32760) : (((/* implicit */int) var_13)))));
                        /* LoopSeq 1 */
                        for (signed char i_17 = 2; i_17 < 23; i_17 += 3) 
                        {
                            arr_53 [i_13] [i_13] [i_15] [i_13] [6ULL] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_39 [i_13] [i_15 + 2]))));
                            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((arr_49 [i_14] [6] [i_17 + 1] [i_17] [i_14] [i_17]) << (((((((/* implicit */_Bool) (unsigned short)55294)) ? (arr_40 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) - (1219988682U))))))));
                        }
                        var_40 = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_43 [i_14] [i_14] [i_14 - 2])) == (arr_51 [i_13] [i_13] [i_14 + 1] [i_13] [i_15 + 1] [i_15 + 2])));
                        var_41 = ((/* implicit */unsigned int) var_10);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_12 [i_18]) : (arr_12 [i_18])));
        var_43 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        var_44 = ((/* implicit */short) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_18])))));
    }
    for (short i_19 = 4; i_19 < 11; i_19 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_20 = 2; i_20 < 10; i_20 += 3) 
        {
            var_45 = ((/* implicit */long long int) var_13);
            arr_60 [i_20] [i_20] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
        }
        var_46 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_37 [(_Bool)1] [i_19 - 2]))))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_9))))));
    }
}
