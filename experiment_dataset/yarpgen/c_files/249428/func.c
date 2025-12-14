/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249428
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
    var_10 = ((/* implicit */int) (((~(-2139964493))) != (((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) (-(((unsigned int) (signed char)15))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (arr_0 [i_0])));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_7))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (~(((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) & (-2437222059475730585LL))))));
        var_14 = ((/* implicit */unsigned short) max((9223372036854775807LL), (1906180585623850568LL)));
        var_15 = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */long long int) (-2147483647 - 1))), (-2595853627369764396LL))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) (unsigned char)78)) : (arr_4 [i_1 + 2] [i_1])));
            var_17 &= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)254))));
                            arr_15 [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) arr_4 [17LL] [i_1]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (max((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 2]), (arr_14 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1])))));
            var_19 |= ((/* implicit */unsigned char) var_4);
            /* LoopNest 3 */
            for (long long int i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)27395)) ^ (((/* implicit */int) (unsigned short)27118))));
                            var_21 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (signed char)-111)), (8515873941315024980ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1 + 2])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_33 [i_1] [i_6] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1])) ? (arr_16 [i_1 + 2]) : (arr_16 [i_1 - 1]))), (((/* implicit */long long int) arr_32 [i_6] [i_10]))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (unsigned char)192))));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        {
                            arr_41 [i_11] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) 1580085608464954368ULL)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))), (arr_25 [i_1])))));
                            var_23 = ((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1 + 1] [i_1]);
                            arr_42 [i_1] [i_1 + 2] [i_10] [(signed char)17] [i_12] = ((/* implicit */short) (-(arr_27 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_10])));
                            var_24 |= ((/* implicit */long long int) (~((~(((/* implicit */int) var_6))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) max((var_25), (var_9)));
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
            }
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_39 [10U] [i_6] [i_14] [i_1 - 1] [i_6]) : (((/* implicit */int) arr_11 [i_1]))));
                arr_48 [i_1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_37 [i_6] [i_1 + 2] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1]))));
                arr_49 [i_1] [14LL] [i_6] [(unsigned char)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_1 - 1])) ? (((/* implicit */unsigned int) arr_21 [i_1])) : (arr_31 [i_1 + 2])));
                var_28 *= ((unsigned long long int) (short)(-32767 - 1));
            }
            for (short i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    arr_55 [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) arr_32 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (arr_43 [i_6]))))) : (arr_54 [i_1] [i_1] [i_1] [10])))) ? (((/* implicit */int) ((((/* implicit */int) (short)9753)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((_Bool) ((long long int) (short)13013))))));
                    var_29 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((1175771432), (((/* implicit */int) var_9))))))) ? (min((arr_14 [i_15] [i_1] [i_1] [i_1] [i_1 + 1] [i_1]), (arr_14 [i_16] [i_16] [i_1] [i_1] [i_1 + 2] [i_1]))) : (((int) arr_17 [i_1 + 2]))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_6] [(_Bool)0])) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_26 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1])))))) : ((~(arr_24 [i_1] [i_1 + 2] [i_1] [i_1 + 1])))));
                    arr_56 [i_1] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_16])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_2)))))), ((~(max((-1967978329), (((/* implicit */int) (_Bool)0))))))));
                    var_31 = ((/* implicit */short) ((unsigned int) min((((/* implicit */int) var_9)), (var_4))));
                }
                /* LoopSeq 3 */
                for (signed char i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    arr_59 [i_1] [i_1] [i_15] [i_17] = ((/* implicit */signed char) min((2151814772914986769ULL), (((/* implicit */unsigned long long int) -1LL))));
                    var_32 = ((/* implicit */short) var_4);
                }
                for (int i_18 = 1; i_18 < 17; i_18 += 1) /* same iter space */
                {
                    var_33 = arr_51 [i_6] [i_1] [i_18 - 1];
                    var_34 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)59759))))) ? ((~(3625434247534400467ULL))) : (((((/* implicit */_Bool) arr_51 [i_18 + 1] [i_1] [i_1 + 2])) ? (arr_51 [i_18 + 1] [i_1] [i_1 + 2]) : (arr_51 [i_18 + 1] [i_1] [i_1 + 2]))));
                    var_35 = ((/* implicit */unsigned short) var_2);
                    arr_63 [i_1 - 1] [i_1 - 1] [i_1] [15] [i_18 - 1] = ((/* implicit */int) var_9);
                }
                for (int i_19 = 1; i_19 < 17; i_19 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */short) var_6);
                    var_37 = ((/* implicit */unsigned char) arr_35 [6ULL] [i_1] [i_1] [i_1] [i_15] [i_19]);
                }
            }
        }
    }
}
