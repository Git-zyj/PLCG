/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38455
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0]))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [(_Bool)1]) ? (((/* implicit */int) ((arr_2 [16LL]) && (var_13)))) : (((/* implicit */int) arr_1 [i_0] [4U]))))) ? (((/* implicit */unsigned long long int) var_2)) : (((var_12) ? (((((/* implicit */_Bool) arr_0 [2U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
        var_15 = ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (var_9))) : (((/* implicit */int) arr_2 [i_0])))), (min((((/* implicit */int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */int) arr_2 [i_0]))))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) 4192256LL)))) & (((var_4) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) arr_1 [i_0] [4LL]))))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_7);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : ((+(((/* implicit */int) arr_0 [i_1]))))));
        var_18 = ((/* implicit */long long int) var_1);
    }
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2])))))));
        var_21 = (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [8] [8])))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (short)6702)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_9 [i_3] [i_3]))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_0 [i_3]))))));
        arr_14 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) -1970119241))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)32))));
                    arr_21 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                }
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */long long int) ((((arr_11 [i_6] [i_6]) | (arr_11 [i_6] [i_6]))) & (((var_1) ^ (arr_11 [i_6] [i_6])))));
        arr_25 [i_6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (var_9))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6]))) * (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)94)) + (((/* implicit */int) (_Bool)0)))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                {
                    arr_32 [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)8192), (((/* implicit */short) (signed char)-29))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))) : (((((/* implicit */_Bool) arr_1 [i_6] [i_8])) ? (((/* implicit */unsigned long long int) var_9)) : (var_1)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        arr_36 [i_6] [i_6] [1U] [i_9] = ((/* implicit */unsigned char) max(((signed char)102), ((signed char)91)));
                        var_23 += ((/* implicit */unsigned long long int) var_2);
                        arr_37 [i_9] [i_6] |= ((/* implicit */unsigned long long int) (~(arr_9 [i_6] [i_9])));
                    }
                    var_24 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_12)) : (var_0)))), (((long long int) (signed char)11))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_35 [i_6] [i_8] [i_10] [i_11]), (((/* implicit */unsigned long long int) ((arr_38 [i_6] [i_7] [7U] [i_10] [i_11] [i_11]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))))))))) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) arr_2 [i_10])))))));
                                var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_35 [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6] [i_7] [i_8]))) : (max((var_10), (((/* implicit */unsigned long long int) arr_39 [i_6] [i_7] [i_10] [6ULL]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_27 = ((/* implicit */_Bool) ((unsigned short) var_6));
}
