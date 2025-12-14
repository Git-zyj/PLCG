/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203523
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
    var_10 = ((/* implicit */unsigned int) var_0);
    var_11 = ((/* implicit */unsigned int) ((signed char) ((var_7) * ((-(var_2))))));
    var_12 = ((/* implicit */unsigned long long int) ((unsigned short) (~(var_2))));
    var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), ((+(((/* implicit */int) (unsigned char)192))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */int) ((unsigned long long int) arr_8 [i_0] [i_1]));
                        var_15 = ((/* implicit */_Bool) arr_9 [i_3] [i_2]);
                    }
                } 
            } 
            arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1])) > (((/* implicit */int) arr_2 [i_1]))));
        }
        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_16 += ((/* implicit */int) (((+(((/* implicit */int) ((_Bool) 2147483647))))) < (((/* implicit */int) arr_1 [i_0 - 2] [i_4]))));
            var_17 = ((/* implicit */unsigned int) arr_13 [i_0] [i_4]);
            arr_16 [1ULL] [1ULL] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (~(((var_3) & (arr_0 [i_0 - 4] [i_4]))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (arr_18 [i_0 - 3] [i_0 - 1]) : (arr_18 [i_0 - 1] [i_0 - 4])));
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned char) arr_12 [i_0] [i_0] [i_5])))));
            var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 3] [i_5])) / (((/* implicit */int) arr_7 [i_0 - 4] [i_0] [i_0 - 2] [i_0 - 1]))));
        }
        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) ((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_2)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        arr_28 [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_17 [i_0 - 1] [i_0 - 3]), (arr_17 [i_0 - 3] [i_0 - 1]))))) % (((min((var_2), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_6] [i_8])))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0 - 3])))))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_18 [i_0] [i_6])) ? (((/* implicit */int) max((arr_2 [i_6]), (((/* implicit */short) arr_22 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) arr_19 [i_0 - 4]))))));
        }
        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
        {
            var_23 += ((/* implicit */short) arr_12 [i_0] [i_0 - 1] [(unsigned char)1]);
            arr_31 [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0] [i_0 - 3])) * (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))) >> (((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) - (107)))));
        }
        arr_32 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)76))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((signed char) arr_18 [i_0 - 4] [i_0])), (arr_12 [i_0 - 2] [i_0 + 1] [i_0 - 1]))))) : (((max((var_7), (((/* implicit */unsigned long long int) var_1)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_25 [i_0] [i_0 - 2] [i_0]))))))));
        arr_33 [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
    }
}
