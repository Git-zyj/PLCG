/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39361
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
    var_15 = ((/* implicit */short) ((unsigned short) var_11));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (min((((/* implicit */long long int) (short)15166)), (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (9173792301333264511LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2 - 2] [i_2 - 2])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) (unsigned short)41312)))))))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)15166))))) ? ((~(((/* implicit */int) arr_10 [i_2 + 1])))) : ((-(((/* implicit */int) arr_10 [i_2 - 1])))))))));
                        var_18 -= ((/* implicit */unsigned int) max((arr_5 [i_2 - 1] [i_1] [i_2 - 1]), (((/* implicit */long long int) arr_9 [i_1] [i_2 - 2] [i_1] [i_1] [i_2] [i_1]))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))))) ? (((((/* implicit */int) var_9)) - (((/* implicit */int) arr_10 [i_2])))) : ((~(((/* implicit */int) (_Bool)1))))))) : (arr_2 [i_0] [i_0]))))));
                        arr_11 [i_0] [i_0] [i_2] [i_2] [i_2 - 2] [i_2 - 2] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */int) arr_0 [i_2 - 2])) : (((/* implicit */int) arr_0 [i_2 + 1])))), (((/* implicit */int) var_5))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((short) var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_0))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_10 [i_0])), (var_0)))) ? (((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) (short)15184))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_20 -= (~(arr_15 [i_5]));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_5])))))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                arr_21 [i_4] = (!(((/* implicit */_Bool) var_4)));
                arr_22 [i_4] [i_4] = ((/* implicit */long long int) var_14);
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        {
                            arr_30 [i_4] [i_4] [i_4] [i_4] [17U] = ((((/* implicit */_Bool) arr_24 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (arr_24 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) : (arr_24 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]));
                            var_22 = ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
                arr_31 [i_4] [i_5] [12U] |= ((/* implicit */short) (~(((/* implicit */int) arr_18 [(short)1] [i_5] [i_6]))));
            }
            arr_32 [i_4] [i_4] = ((/* implicit */long long int) ((_Bool) (short)15167));
        }
        for (short i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            arr_37 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_4])) ? (((/* implicit */int) (short)17710)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_17 [i_4])));
            /* LoopNest 2 */
            for (short i_10 = 1; i_10 < 17; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_23 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (var_10)));
                        arr_44 [i_4] [i_4] = ((/* implicit */signed char) ((arr_40 [i_10 + 1] [i_10 + 1] [i_10 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_10 + 1] [i_10 - 1] [i_10 - 1]))) : (var_12)));
                    }
                } 
            } 
            arr_45 [i_4] = ((/* implicit */short) arr_38 [i_4] [(signed char)18] [i_9] [i_9]);
            var_24 = ((/* implicit */long long int) ((arr_26 [i_4] [i_4]) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4]))) ^ (var_10)))));
        }
        arr_46 [i_4] = ((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_26 [i_4] [i_4])) ? (arr_17 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))));
        var_25 -= ((short) arr_39 [i_4] [i_4] [(unsigned short)5] [i_4]);
        var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_26 [i_4] [0ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_4]))) : (arr_29 [i_4] [i_4] [i_4] [i_4] [i_4])));
    }
}
