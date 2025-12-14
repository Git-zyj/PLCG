/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246445
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
    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_22 = ((((((/* implicit */_Bool) 4797632753027794703LL)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 - 1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_13))))) : ((+(4797632753027794696LL))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (arr_1 [i_0])))) + ((+(-1LL)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 3) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)87)) || (((/* implicit */_Bool) 2147483647))));
                            arr_13 [i_0] [8LL] [i_1 + 2] [i_2] [i_3] [i_4] = (~((~(((/* implicit */int) var_0)))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) (~((~(var_16)))));
                            var_26 -= (-(var_7));
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_17)))));
    }
    for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        var_28 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((+(4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))))))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned char i_9 = 3; i_9 < 9; i_9 += 4) 
                {
                    {
                        var_29 -= ((/* implicit */long long int) max((((min(((_Bool)1), ((_Bool)0))) || (((/* implicit */_Bool) (-(var_12)))))), (((_Bool) 0U))));
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (+(((/* implicit */int) var_18))))), (((((/* implicit */_Bool) 0U)) ? (var_8) : (4294967284U))))))))));
                    }
                } 
            } 
        } 
        arr_30 [i_6] [i_6] = ((/* implicit */unsigned char) (((~(max((arr_4 [i_6] [i_6] [i_6]), (var_3))))) == (((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) & (((2208141444517481968LL) % (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
        arr_31 [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            for (long long int i_12 = 2; i_12 < 15; i_12 += 3) 
            {
                for (signed char i_13 = 4; i_13 < 16; i_13 += 2) 
                {
                    {
                        arr_44 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(0U)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_41 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */unsigned long long int) (short)9)), (var_6)))));
                        arr_45 [i_10] [i_11] [i_11] [(_Bool)1] [i_13 - 3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) >> (((((((/* implicit */long long int) (-(arr_42 [i_10] [i_10] [i_10] [i_12])))) + (max((((/* implicit */long long int) (_Bool)1)), (var_16))))) + (1626760578LL)))));
                        arr_46 [i_10] [i_11] [i_12 + 1] [i_11] = ((/* implicit */long long int) arr_40 [i_13] [i_11] [(unsigned char)6]);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_15 = 0; i_15 < 19; i_15 += 1) 
            {
                arr_52 [i_14] = (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_33 [i_10]))))) : (((/* implicit */int) arr_35 [i_10] [i_15])));
                arr_53 [i_14] = ((/* implicit */signed char) ((unsigned char) ((var_12) - (((/* implicit */unsigned int) var_14)))));
            }
            /* LoopSeq 1 */
            for (long long int i_16 = 2; i_16 < 17; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        {
                            arr_63 [0ULL] [i_14] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) max((arr_61 [i_10]), (((/* implicit */unsigned long long int) 2518562132212142553LL))))) ? (((/* implicit */unsigned long long int) (~(arr_59 [i_10] [i_10] [i_10] [i_17])))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))))));
                            var_31 = max((((/* implicit */long long int) (~(arr_40 [i_17 + 1] [i_17] [i_16 - 2])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_49 [i_14] [i_14])), (arr_59 [i_16] [i_16] [i_16] [(unsigned char)0])))) ? (min((((/* implicit */long long int) var_18)), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) (unsigned char)249)))))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) (_Bool)0);
                arr_64 [i_10] [i_14] [i_14] [i_10] = ((/* implicit */short) (~(((((/* implicit */_Bool) 4797632753027794703LL)) ? (((/* implicit */int) ((((/* implicit */unsigned int) -1)) <= (var_12)))) : (947871124)))));
                var_33 = ((/* implicit */short) ((long long int) max((arr_43 [i_16 - 2] [i_16] [i_16] [i_16] [i_16] [i_16]), (arr_43 [i_16 + 1] [i_16] [i_16 + 1] [i_16] [i_16] [i_16]))));
            }
        }
    }
    for (int i_19 = 0; i_19 < 16; i_19 += 3) 
    {
        arr_68 [i_19] = ((/* implicit */int) arr_51 [i_19] [2ULL] [i_19] [i_19]);
        arr_69 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_17)), ((+(((/* implicit */int) (signed char)61))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (max((((/* implicit */long long int) arr_32 [i_19] [i_19])), (217843174260322352LL))) : (((/* implicit */long long int) var_19))))));
    }
}
