/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222629
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)31)), (var_1)))) : (var_10)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-31)), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)40)) : (-1909179437)))))) : (max((((((/* implicit */_Bool) -8494504067396878932LL)) ? (((/* implicit */unsigned long long int) -1909179437)) : (1485471148299724967ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-1109874469) : (var_3))))))));
    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 6625432268367943639LL))));
    var_13 = ((/* implicit */unsigned int) ((unsigned long long int) ((15ULL) ^ (((/* implicit */unsigned long long int) 2240080371U)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_7))), (((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((unsigned int) arr_1 [i_0] [i_0])) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))));
        var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) min(((~(var_3))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)45571)) : (var_10)))))), (((long long int) (-(19U))))));
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2240080371U))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(18446744073709551609ULL))), (min((((/* implicit */unsigned long long int) -1)), (18446744073709551606ULL)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */long long int) arr_0 [i_0] [i_0])) == (8337502203079930768LL)))), (((unsigned int) (signed char)52))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (1ULL)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */short) ((long long int) 18446744073709551615ULL));
            arr_8 [i_0] [i_1] = ((/* implicit */int) ((arr_4 [i_0] [i_1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551609ULL) < (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0]))))))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) -3919383156576951797LL);
        arr_11 [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_9 [i_2])), (3919383156576951796LL))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-26152)))))))), (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 9223372036854775782LL)) : (7ULL))) : (((arr_10 [i_2] [i_2]) - (arr_5 [i_2])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */short) (unsigned short)28417);
            arr_16 [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */unsigned long long int) var_8)) : ((-(18446744073709551609ULL)))));
            var_18 = ((/* implicit */short) 18446744073709551602ULL);
            /* LoopSeq 1 */
            for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
            {
                arr_19 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2])) ? (9223372036854775782LL) : (((/* implicit */long long int) arr_14 [i_2] [i_3] [i_4 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18917))) : (((-8337502203079930791LL) / (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                arr_20 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */signed char) (-2147483647 - 1));
                arr_21 [i_4] [i_3] [i_4] = ((/* implicit */short) ((int) arr_3 [i_2] [i_3] [i_4]));
                var_19 = ((/* implicit */_Bool) ((508688181) * ((+(((/* implicit */int) (short)0))))));
                var_20 = var_2;
            }
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 2) 
        {
            var_21 = ((unsigned int) ((((/* implicit */_Bool) (short)15225)) ? (arr_10 [i_2] [i_5 + 1]) : (arr_5 [i_2])));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_2])) ? ((-(((/* implicit */int) (unsigned short)14946)))) : (((/* implicit */int) (signed char)15))));
            var_23 = arr_9 [i_2];
            arr_25 [i_2] [i_2] [i_5] = ((/* implicit */long long int) ((arr_4 [i_5] [i_5] [i_5 - 3]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40)))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            arr_28 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_12 [(_Bool)1] [i_6] [i_6])) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_6]))));
            arr_29 [i_2] = ((/* implicit */long long int) ((unsigned long long int) 1735975015));
            arr_30 [i_2] [i_2] = (!(((/* implicit */_Bool) 13879468463369969088ULL)));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 19; i_7 += 3) 
    {
        arr_33 [i_7] = ((/* implicit */unsigned int) (+(arr_26 [i_7 + 1] [i_7] [i_7 + 1])));
        arr_34 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-30)) ? (-8337502203079930793LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)38)))));
        /* LoopSeq 3 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            arr_38 [i_7] [i_7] [i_8] = ((/* implicit */int) ((((long long int) -8337502203079930791LL)) & (((((/* implicit */_Bool) -1771835087560858425LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-4281822967419329453LL)))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1909179451)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_8] [i_8 - 1]))) : (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned int) arr_26 [i_7] [i_8] [i_8]))))));
            arr_39 [i_7 + 1] = ((short) arr_27 [i_7 - 2] [i_8 - 1] [i_8 - 1]);
        }
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_35 [i_7] [i_7 - 2] [i_7 - 2])) - (23582)))));
                            arr_51 [i_7 - 1] [i_7] [i_7] = ((/* implicit */unsigned long long int) (+(((-9223372036854775765LL) / (9223372036854775764LL)))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_7 - 2] [i_7 - 1])) ? (((/* implicit */int) arr_35 [i_7 - 1] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_35 [i_7 - 2] [i_7 + 1] [i_7 - 1]))));
                            arr_52 [i_7] [i_7] [i_7] = ((((/* implicit */int) arr_3 [i_7 + 1] [i_7 + 1] [i_7])) >= (((/* implicit */int) (short)16137)));
                            var_27 = ((/* implicit */int) var_0);
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_7 - 2])) ? (((/* implicit */int) var_1)) : (arr_26 [i_7 - 1] [i_9] [i_7 + 1])));
                var_29 = ((_Bool) arr_9 [i_7 - 1]);
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
                {
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        {
                            arr_60 [i_7] [i_9] = (!(((/* implicit */_Bool) -1771835087560858420LL)));
                            arr_61 [i_7] [i_10] [i_10] [i_13] [i_7] [i_10] [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_55 [i_7 + 1] [i_9] [i_10] [i_13] [i_14])) | (((/* implicit */int) (unsigned short)45176))));
                        }
                    } 
                } 
            }
            var_30 = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_7))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1909179437)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)768))))));
            var_31 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55212)) ? (-9223372036854775768LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        }
        for (long long int i_15 = 2; i_15 < 18; i_15 += 3) 
        {
            arr_65 [i_7] [i_7 + 1] [i_7] = ((/* implicit */int) var_5);
            var_32 = (-(arr_0 [i_7 - 2] [i_15]));
            arr_66 [i_15] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_7 - 1])) ? (((/* implicit */unsigned long long int) 9223372036854775770LL)) : (18446744073709551613ULL)));
            arr_67 [i_7] = ((/* implicit */long long int) ((short) var_4));
        }
    }
}
