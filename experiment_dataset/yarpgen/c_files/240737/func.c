/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240737
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
    var_11 |= min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))) : (var_7))), (((/* implicit */unsigned long long int) var_9)));
    var_12 = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_4)))) >= (((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((var_1) - (((-193002124090109885LL) / (8409617417162396463LL)))))));
    var_13 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [4LL] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (8409617417162396463LL) : (min((-8409617417162396470LL), (((/* implicit */long long int) (short)-4857))))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 *= ((/* implicit */_Bool) (+(-2894989252560304053LL)));
                        arr_11 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [2] [2]);
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((8409617417162396455LL) != (2894989252560304053LL)))), ((+(((/* implicit */int) arr_3 [(short)12] [i_0] [(short)12]))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        arr_16 [(signed char)8] [i_4] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (var_10)))));
        arr_17 [i_4] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 2894989252560304040LL))))));
        arr_18 [i_4] = arr_0 [i_4];
    }
    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        arr_21 [i_5] [i_5] = ((/* implicit */signed char) (+((+(((/* implicit */int) var_6))))));
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_15 = ((/* implicit */long long int) var_6);
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_23 [i_6]), (arr_23 [i_6])))) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) ((((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))))) != (((/* implicit */int) (_Bool)0)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 3) 
            {
                for (signed char i_8 = 1; i_8 < 21; i_8 += 4) 
                {
                    {
                        arr_32 [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)62)) ? (((unsigned int) ((((((/* implicit */int) (short)-10654)) + (2147483647))) << (((((((/* implicit */int) (short)-30008)) + (30037))) - (29)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                        arr_33 [i_5] [i_6] [i_5] [i_5] &= ((/* implicit */signed char) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_22 [i_8 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)73))))) : (((/* implicit */int) var_2))))), (arr_27 [i_7 + 1] [i_7 + 1] [i_8 + 1])));
                    }
                } 
            } 
            var_17 = (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_23 [i_5])), (max((8409617417162396454LL), (-8409617417162396480LL)))))) : (max((2279189885921066593ULL), (((/* implicit */unsigned long long int) 93113277332285284LL)))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_37 [i_5] = ((((/* implicit */_Bool) 5714260481960979324ULL)) ? (max(((-(16167554187788485020ULL))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3703373207U)))))));
            var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((14449834553934430881ULL) + (((/* implicit */unsigned long long int) arr_36 [i_5] [i_5] [(unsigned char)11]))))) ? (var_5) : (((/* implicit */long long int) ((arr_24 [i_5]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-71)))))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_20 [i_9] [i_5])) : (5718552470541967207ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((var_7) / (((/* implicit */unsigned long long int) var_5)))))))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (min((((/* implicit */unsigned long long int) (short)9147)), (max((((unsigned long long int) (signed char)11)), (((/* implicit */unsigned long long int) arr_26 [i_5] [i_9]))))))));
            var_20 = ((/* implicit */int) var_8);
        }
        /* vectorizable */
        for (short i_10 = 2; i_10 < 18; i_10 += 3) 
        {
            arr_40 [i_10 + 4] [i_10] [(signed char)17] &= ((unsigned long long int) var_8);
            var_21 *= ((((/* implicit */int) (short)-13397)) > (((/* implicit */int) (unsigned char)77)));
        }
        /* LoopNest 3 */
        for (short i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            for (short i_12 = 2; i_12 < 20; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_49 [i_5] [i_5] [i_5] [i_5] [i_5] [(short)1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32169))));
                        arr_50 [i_5] [i_11] [8ULL] [i_13] [i_12] [i_11] |= ((/* implicit */_Bool) (-(var_7)));
                        var_22 *= ((/* implicit */unsigned long long int) var_3);
                    }
                } 
            } 
        } 
        var_23 &= ((/* implicit */signed char) max(((+(-2560782035313085345LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_5]))) ^ (2796777385U)))))))));
    }
}
