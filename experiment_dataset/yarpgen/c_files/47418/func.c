/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47418
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] &= ((((/* implicit */_Bool) ((var_4) + (((/* implicit */unsigned long long int) arr_0 [i_0 + 3] [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 795203179U)))))) : (var_4));
        var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((arr_1 [i_0 - 2]) ^ (arr_1 [i_0 - 1]))) >> (((16777200U) - (16777174U))))))));
        var_11 = ((unsigned int) arr_2 [i_0] [i_0 - 2]);
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_0 [i_1 - 1] [i_1 - 3])))) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3499764128U)) || (((/* implicit */_Bool) 795203179U))))))));
        var_13 = ((_Bool) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))));
        var_14 ^= 404241707;
        var_15 += ((/* implicit */_Bool) arr_1 [i_1]);
        var_16 *= ((/* implicit */unsigned int) ((((arr_5 [(signed char)18]) & (((/* implicit */long long int) arr_1 [i_1 + 3])))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_1 - 3])) >= (1406186155U)))) < (((((/* implicit */_Bool) arr_0 [i_1 + 3] [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_4 [4U]))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_6 [i_2]))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (arr_0 [i_2] [i_2])));
        arr_10 [i_2] = 3499764095U;
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((int) var_2)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(-892334780))))));
        /* LoopSeq 4 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        arr_22 [(_Bool)0] [i_4] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((arr_13 [i_5 - 2]) << (((((/* implicit */int) var_5)) + (99))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [i_6] [i_3] [i_4] [i_6]) == (((/* implicit */unsigned long long int) var_1))))))));
                        arr_23 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) var_2)) ^ (400764827U)))));
                        var_21 ^= var_3;
                        var_22 = ((/* implicit */long long int) (-((+(arr_20 [i_5 - 1] [i_5] [i_5] [i_6])))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 3; i_8 < 18; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        {
                            var_23 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((17876104446439479453ULL), (((/* implicit */unsigned long long int) arr_18 [i_4] [i_4] [6LL] [i_8 - 1]))))))))));
                            var_24 = ((/* implicit */signed char) max((var_24), (var_8)));
                            var_25 = ((/* implicit */signed char) arr_20 [i_3] [i_4] [i_7] [i_4]);
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_21 [i_8 + 1] [i_8 + 1] [0LL] [0LL] [i_8] [i_8 + 1]) | (arr_21 [i_8 - 2] [i_8] [2LL] [2LL] [i_8 - 2] [i_8 - 2])))) && (((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_8 + 1] [i_8] [(_Bool)1] [(_Bool)1] [i_8] [i_7]))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_10 = 3; i_10 < 16; i_10 += 1) 
        {
            var_27 -= ((/* implicit */signed char) arr_12 [i_3]);
            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_17 [i_3] [(signed char)12] [2ULL] [i_10 + 4])))))));
            arr_34 [i_10] [i_3] [i_3] = arr_17 [i_3] [0LL] [4ULL] [i_10 + 1];
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 16; i_11 += 1) 
            {
                for (unsigned int i_12 = 1; i_12 < 18; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        {
                            arr_43 [i_3] [i_12] = ((/* implicit */long long int) 18446744073709551611ULL);
                            var_29 *= (+(((((arr_32 [i_3] [i_3]) - (0U))) & (((unsigned int) arr_42 [i_13] [i_13] [i_13])))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_14 = 3; i_14 < 19; i_14 += 2) 
        {
            var_30 = ((/* implicit */unsigned int) -5707396025418023010LL);
            var_31 ^= ((/* implicit */int) (((-(570639627270072162ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_1) >= (((/* implicit */int) arr_37 [i_3] [i_3] [i_3] [i_3] [i_14] [8U])))) || (((/* implicit */_Bool) (+(1993603495U))))))))));
            arr_47 [i_3] [i_14] [i_14] = ((/* implicit */unsigned long long int) arr_0 [i_3] [i_3]);
            var_32 ^= ((/* implicit */signed char) ((((long long int) var_9)) > (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_14] [i_14] [i_3])) && (((/* implicit */_Bool) arr_21 [i_14] [i_14] [i_3] [10U] [i_3] [i_3])))))) % (var_6))))));
            var_33 |= ((/* implicit */long long int) arr_31 [i_14 - 2] [i_14] [i_14 - 2] [i_3] [i_3] [(short)4]);
        }
        for (unsigned int i_15 = 1; i_15 < 16; i_15 += 4) 
        {
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_5 [18U])))) || (((/* implicit */_Bool) arr_5 [6U])))))) == (min((((/* implicit */unsigned int) ((arr_39 [i_3] [i_3] [i_3] [i_15] [i_15 + 3] [i_15]) >= (arr_11 [i_15])))), (1406186155U))))))));
            var_35 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (2888781158U)));
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                for (unsigned int i_17 = 1; i_17 < 18; i_17 += 1) 
                {
                    {
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) arr_25 [i_15 + 3] [i_15 + 1] [i_15 + 4]))));
                        var_37 = ((/* implicit */short) 1406186135U);
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_2)) / (8429796853995780437ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (arr_17 [i_3] [i_15] [i_16] [i_17]))))))))));
                        var_39 = ((/* implicit */short) var_2);
                    }
                } 
            } 
            var_40 -= ((/* implicit */unsigned long long int) min((arr_26 [8U] [i_15 + 3] [8U]), (((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) var_6))))))));
        }
    }
}
