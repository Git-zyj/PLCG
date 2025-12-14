/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228440
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))) : (var_8))) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_2 [i_0] [(short)3] &= ((/* implicit */int) arr_1 [i_0]);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_1] [i_1])) >= (((/* implicit */int) arr_1 [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)31)) == (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-26))))));
                        var_12 += ((/* implicit */_Bool) (signed char)-38);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-23)) ? (((((/* implicit */int) (signed char)64)) * (((/* implicit */int) arr_12 [i_4] [i_4])))) : (((/* implicit */int) ((var_8) > (((/* implicit */long long int) arr_11 [i_4] [i_4])))))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) arr_15 [i_4] [i_4]);
                        arr_22 [i_5] [i_4] [i_7] = ((/* implicit */short) (+((-(arr_15 [i_4] [i_4])))));
                    }
                } 
            } 
        } 
        var_15 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (arr_20 [i_4] [4ULL] [i_4] [4ULL] [i_4])));
        arr_23 [i_4] [i_4] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_16 [i_4] [i_4] [3LL] [i_4])))) % (((((/* implicit */_Bool) 8969723322568214653LL)) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (((/* implicit */int) arr_17 [i_4] [i_4]))))));
        /* LoopSeq 3 */
        for (int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
        {
            arr_26 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_8] [i_8] [i_8])))));
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) arr_24 [i_4] [i_8] [i_8])) : (1478753075))) > (((/* implicit */int) ((unsigned char) arr_19 [i_4] [i_4] [i_8] [i_8]))))))));
            /* LoopSeq 1 */
            for (int i_9 = 3; i_9 < 12; i_9 += 2) 
            {
                var_17 = ((((((/* implicit */int) arr_14 [9] [9] [i_9])) <= (((/* implicit */int) arr_14 [0ULL] [i_8] [i_4])))) ? (((/* implicit */int) arr_17 [i_9 - 2] [i_9 - 3])) : ((~(((/* implicit */int) (unsigned short)33973)))));
                var_18 = ((((/* implicit */int) arr_12 [i_8] [i_9 - 1])) / (((/* implicit */int) arr_12 [(signed char)6] [i_9 - 3])));
                arr_30 [i_4] [i_8] [i_8] [i_8] = ((/* implicit */int) var_3);
                var_19 = ((/* implicit */short) var_2);
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) arr_34 [i_4] [i_10] [i_9] [i_8] [i_4]);
                            var_21 = ((((/* implicit */_Bool) arr_34 [i_9 - 2] [i_9 + 1] [i_9] [i_9 - 1] [i_4])) ? (((/* implicit */int) arr_12 [i_9 + 1] [i_9 - 3])) : (((/* implicit */int) var_9)));
                        }
                    } 
                } 
            }
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2541653728U)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (unsigned short)33976))));
        }
        for (int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
        {
            arr_37 [i_4] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_1))));
        }
        for (int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) arr_15 [i_4] [i_4]);
            var_25 = ((/* implicit */int) ((var_6) == (arr_27 [i_4] [6] [i_4])));
        }
    }
    var_26 = ((long long int) (-(((/* implicit */int) (signed char)31))));
}
