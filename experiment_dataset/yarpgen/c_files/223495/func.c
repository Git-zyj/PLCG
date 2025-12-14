/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223495
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
    var_15 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) 2147483648U)), (1509136179900549904ULL))), (((/* implicit */unsigned long long int) var_14))));
    var_16 = ((/* implicit */unsigned short) ((((unsigned int) min((var_14), (var_5)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_5) : (var_5)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned int i_3 = 4; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
                        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_12))))))) ? ((((!(((/* implicit */_Bool) 0U)))) ? ((-(var_3))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))))) : (((((((((/* implicit */_Bool) var_4)) ? (arr_1 [i_3] [i_1]) : (((/* implicit */long long int) arr_2 [i_0] [i_3])))) + (9223372036854775807LL))) >> ((((+(arr_1 [i_1] [i_3]))) + (3061224079571470646LL)))))));
                        var_19 = ((/* implicit */unsigned short) var_3);
                        arr_9 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (max((((((/* implicit */_Bool) var_9)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((12503884772940084459ULL) - (12503884772940084433ULL)))))))) : ((((~(arr_5 [i_1] [i_1] [i_2]))) >> (((min((1155124846U), (((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1] [i_3])))) - (1155124841U)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (short i_5 = 2; i_5 < 9; i_5 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_0] [i_4] [i_5])), (var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : ((+(((/* implicit */int) arr_0 [i_0] [i_5])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_3)))))))));
                    arr_15 [i_0] [i_4] [i_5] = -1529973086;
                    var_21 = max((((((/* implicit */_Bool) (~(arr_1 [i_0] [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_4] [i_5])) : (((/* implicit */int) (short)10692))))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-3464603266611741544LL))))), (var_4));
                    var_22 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((+(arr_1 [i_4] [i_5]))), (((/* implicit */long long int) (short)26025)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (unsigned char)208)), (((((/* implicit */_Bool) var_0)) ? (3464603266611741544LL) : (-1621708971762346332LL)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                var_24 += ((/* implicit */long long int) max(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_7] [i_6] [i_0])))))));
                arr_21 [i_7] [i_0] = ((/* implicit */unsigned int) (short)6298);
            }
            for (short i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                arr_24 [i_0] [i_6] [i_8] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 1U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_8]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_0]))) & (var_3)))))));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_6] [i_0])) ? (((long long int) (~(969924446U)))) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_11)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    var_26 = var_4;
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 5942859300769467140ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (((5942859300769467158ULL) >> (((var_5) - (1221862706U)))))));
                    arr_27 [i_0] [i_9] [i_6] [i_8] [i_9] = ((/* implicit */unsigned int) arr_16 [i_0] [i_6] [i_9]);
                }
                var_28 = ((/* implicit */unsigned int) (+((~(((7855038590255968262LL) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_8] [i_6] [i_8])))))))));
            }
            var_29 = ((/* implicit */unsigned char) ((unsigned int) (((~(var_9))) >> (((((((((/* implicit */int) var_2)) + (2147483647))) >> (((var_14) - (3538912522U))))) - (65519))))));
            var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_13)))))))) - (arr_23 [i_0] [i_6] [i_6])));
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0] [i_10] [i_0])))))));
            arr_32 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_10] [i_10] [i_0]));
            arr_33 [i_0] [i_10] = ((/* implicit */short) arr_5 [i_10] [i_10] [i_10]);
        }
        arr_34 [i_0] = (~(var_8));
    }
    for (long long int i_11 = 3; i_11 < 9; i_11 += 4) 
    {
        var_32 = ((/* implicit */unsigned char) ((((unsigned int) arr_35 [i_11])) - (((unsigned int) (~(((/* implicit */int) arr_8 [0LL] [i_11] [i_11] [i_11])))))));
        var_33 = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_11] [i_11]))))), (arr_22 [i_11]))))));
    }
    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
    {
        var_34 = ((/* implicit */unsigned short) ((((549739036672LL) + (((/* implicit */long long int) 1638439292U)))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) ? (((long long int) 18446744073709551593ULL)) : (((/* implicit */long long int) min((3139842449U), (4294967283U))))))));
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((arr_38 [i_12]) - (((/* implicit */int) var_1)))))));
    }
    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (arr_41 [i_13]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_13] [i_13])))))));
        /* LoopNest 3 */
        for (long long int i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            for (int i_15 = 4; i_15 < 18; i_15 += 3) 
            {
                for (long long int i_16 = 3; i_16 < 15; i_16 += 3) 
                {
                    {
                        arr_52 [i_15] = ((/* implicit */long long int) (-(18349692384549730320ULL)));
                        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned long long int) ((arr_48 [i_13] [i_14] [i_14] [i_14] [i_15] [i_14]) >> (((var_7) - (6918770366711901396ULL)))))) : (max((var_7), (((/* implicit */unsigned long long int) arr_44 [i_13] [i_14] [i_15])))))))))));
                        var_38 ^= ((/* implicit */unsigned long long int) (-(((int) ((unsigned long long int) 9007164895002624ULL)))));
                        arr_53 [i_15] [i_15] = ((/* implicit */long long int) arr_43 [i_13] [i_15] [i_16]);
                        var_39 = ((/* implicit */short) (~(9223372036854775807LL)));
                    }
                } 
            } 
        } 
    }
}
