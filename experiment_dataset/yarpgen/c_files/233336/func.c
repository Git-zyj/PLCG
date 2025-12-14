/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233336
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) -5022560823263635884LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (4503599627370240LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))))));
        var_11 ^= (((_Bool)1) ? (3244885503939177426ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63657))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (13158972293981239443ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38957)))));
            arr_9 [i_2] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4503599627370240LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) % (((((/* implicit */_Bool) 5022560823263635867LL)) ? (((/* implicit */unsigned long long int) 4503599627370240LL)) : (var_5)))));
        }
        /* LoopSeq 2 */
        for (short i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1878))) : (-5022560823263635884LL)))) ? (((((/* implicit */_Bool) 9081187785476086540LL)) ? (9081187785476086526LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38940))))) : (((/* implicit */long long int) (-(402653184))))));
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5022560823263635867LL)) ? (((/* implicit */long long int) 0U)) : (35184372088816LL)));
            var_14 = ((((/* implicit */_Bool) ((((/* implicit */long long int) 1000898264)) + (4503599627370240LL)))) ? (13237680447048586669ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (5022560823263635867LL)))));
        }
        for (unsigned short i_4 = 4; i_4 < 20; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                var_15 = ((/* implicit */_Bool) ((long long int) var_5));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    for (unsigned char i_7 = 3; i_7 < 19; i_7 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(11549573920096383544ULL)))) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)63657)) : (((/* implicit */int) (signed char)121))))))))));
                            arr_25 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) == (11549573920096383544ULL)));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((11549573920096383568ULL) & (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (signed char)-122)) ? (var_0) : (((/* implicit */int) var_1))))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38957))) : (-9081187785476086539LL)))) ? ((+(((/* implicit */int) (unsigned short)32767)))) : (((/* implicit */int) var_1))));
                            var_19 += ((/* implicit */signed char) ((short) var_8));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)119))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                arr_29 [1ULL] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) / (18446744073709551599ULL)))));
                arr_30 [i_1] [i_4] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) == (var_5))))));
            }
            /* LoopNest 2 */
            for (long long int i_9 = 2; i_9 < 19; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_21 -= ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (0ULL))) == (((((/* implicit */_Bool) 30ULL)) ? (13237680447048586669ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                        arr_37 [i_10] [i_9] [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)34976)) ? (((/* implicit */int) (unsigned short)5581)) : (((/* implicit */int) ((unsigned char) (unsigned short)18778)))));
                    }
                } 
            } 
            arr_38 [i_4] [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7)));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((long long int) ((unsigned long long int) var_10))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)122)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)5493))));
            var_24 = ((/* implicit */unsigned int) ((2147483647) % (((/* implicit */int) (signed char)79))));
        }
    }
    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) : (var_3)))) + (var_7))))))));
        var_26 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-6)) : (-2147483647))), (262128)));
        var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)7433)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)188))))) : (0ULL))), (((/* implicit */unsigned long long int) ((unsigned char) var_5)))));
        var_28 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((3102368135U), (((/* implicit */unsigned int) (unsigned short)18751))))) ? (((/* implicit */int) (signed char)89)) : (((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (33554432U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (max((9450387808836961142ULL), (((/* implicit */unsigned long long int) -9014316439895214695LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) var_5)))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_13 = 1; i_13 < 20; i_13 += 1) 
    {
        arr_49 [i_13] = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)26579)) ? (2382433335U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46757)) ? (67076096) : (((/* implicit */int) (signed char)59)))))));
    }
    for (long long int i_14 = 3; i_14 < 9; i_14 += 3) 
    {
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1327376750U)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ ((-9223372036854775807LL - 1LL)))) : ((+(7671822286295429010LL)))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))) : (18446744073709551586ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775800LL)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned long long int) 9223372036854775800LL)) : (14523364704178246163ULL)))));
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
    {
        var_32 = ((9223372036854775800LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
        arr_57 [i_15] = ((/* implicit */unsigned int) (~(((unsigned long long int) var_2))));
    }
}
