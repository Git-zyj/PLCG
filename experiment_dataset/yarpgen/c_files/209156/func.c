/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209156
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
    var_10 = var_0;
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_11 &= ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
        var_12 = arr_2 [i_0];
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2] = max((min((arr_8 [i_0] [i_0] [i_0 - 1] [i_0 + 1]), (arr_8 [i_0] [i_0] [i_0 - 1] [i_0 + 1]))), (arr_8 [i_0] [i_0] [i_0] [i_0]));
                    arr_10 [i_0] [i_1] [i_2] &= ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                }
            } 
        } 
        arr_11 [i_0] [i_0 + 1] = arr_3 [i_0] [i_0];
        var_13 = ((/* implicit */_Bool) arr_1 [(_Bool)1] [(_Bool)1]);
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) var_1);
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
                        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5 - 1] [2LL])) || (((/* implicit */_Bool) var_8)))) && ((((~(((/* implicit */int) arr_15 [i_4] [i_4] [i_4])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4])))))))));
                    }
                } 
            } 
            var_17 = max((((/* implicit */unsigned int) ((min((((/* implicit */long long int) 2544630240U)), (var_0))) == ((+(arr_12 [i_4])))))), (arr_20 [i_4] [i_4]));
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                var_18 = 2646965432797297395LL;
                var_19 &= ((/* implicit */unsigned int) (-(arr_12 [i_3])));
                var_20 = ((/* implicit */signed char) min(((+(arr_20 [i_4] [i_7]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
            }
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            var_21 = arr_17 [i_3] [i_8];
            var_22 = ((/* implicit */_Bool) ((arr_21 [i_3] [i_3] [i_3]) / ((-(arr_12 [i_8])))));
            var_23 = ((/* implicit */long long int) (-(arr_20 [i_3] [i_8])));
        }
        for (signed char i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            var_24 &= min((2442891677861801247LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_18 [i_9] [i_9] [i_3])) == (var_1))))) > (arr_23 [i_9])))));
            arr_28 [i_3] = (((-(arr_20 [i_3] [i_9]))) < (((/* implicit */unsigned int) (~(((/* implicit */int) (!(var_9))))))));
        }
    }
    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
    {
        arr_32 [i_10] = ((/* implicit */unsigned int) max(((~(arr_12 [(signed char)1]))), (((/* implicit */long long int) (((+(var_1))) != (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))))));
        arr_33 [(signed char)1] = ((/* implicit */_Bool) arr_27 [i_10]);
    }
    /* LoopNest 3 */
    for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        for (unsigned int i_12 = 4; i_12 < 21; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                {
                    var_25 = ((/* implicit */long long int) max((((((/* implicit */int) arr_40 [i_11] [i_11] [10U])) * (((/* implicit */int) min((arr_40 [i_11] [i_11] [i_13]), (var_2)))))), (((/* implicit */int) (signed char)-123))));
                    arr_42 [i_11] [i_11] [i_13] &= arr_36 [i_11];
                    var_26 = ((/* implicit */long long int) ((min((arr_34 [i_12 - 4]), (arr_34 [i_12 + 1]))) > ((+(max((((/* implicit */long long int) arr_41 [i_11] [i_12 - 4] [i_13] [i_13])), (arr_34 [i_12])))))));
                }
            } 
        } 
    } 
}
