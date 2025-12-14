/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27824
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((signed char) max((4294967295U), (((/* implicit */unsigned int) (-2147483647 - 1)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) != (arr_0 [i_0]))))) | (((unsigned int) min((((/* implicit */unsigned int) (signed char)-126)), (var_10)))));
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))) + (max((arr_0 [i_0]), (((/* implicit */long long int) arr_2 [i_0] [(signed char)7])))))) << (((((/* implicit */int) arr_1 [(signed char)15])) - (58859)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 2) 
        {
            arr_7 [i_2 - 4] [i_1] = ((/* implicit */unsigned int) arr_3 [i_1] [i_1]);
            arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_2])) ^ (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) arr_2 [i_2 - 2] [i_2 - 1])) : ((+(arr_4 [i_1])))));
        }
        var_18 = ((/* implicit */long long int) var_9);
        arr_9 [i_1] [i_1] = ((signed char) arr_2 [i_1] [i_1]);
    }
    /* LoopSeq 1 */
    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_5] [i_7 - 1])) > (((/* implicit */int) ((unsigned short) var_0)))));
                            arr_23 [i_3] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((short) arr_21 [i_3] [i_7 + 2] [i_5] [i_3 + 1]));
                            var_20 *= var_6;
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 2] [i_5]);
                var_22 = ((/* implicit */unsigned int) (unsigned short)0);
                var_23 ^= ((/* implicit */long long int) (+(arr_12 [i_4])));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) var_4);
                arr_26 [i_3] [i_4] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((/* implicit */int) arr_25 [i_8] [i_4] [i_3])) : (((((/* implicit */int) arr_25 [i_3] [i_4] [i_8])) * (((/* implicit */int) arr_21 [i_3] [i_3] [i_4] [i_8]))))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) arr_21 [i_3 - 1] [i_3] [(unsigned char)10] [i_3 + 1]);
                            var_26 = ((/* implicit */unsigned long long int) arr_10 [i_3 + 1] [i_8]);
                        }
                    } 
                } 
            }
            var_27 = ((/* implicit */int) arr_28 [i_4] [i_4] [i_3 + 2] [i_3 + 2] [i_3 + 2]);
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_11 [i_3 - 1]))));
        }
        arr_33 [i_3 - 1] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) -787914429))) || (((/* implicit */_Bool) (+(arr_16 [i_3] [i_3 + 2] [i_3] [i_3]))))))) == (((/* implicit */int) ((unsigned short) ((int) arr_15 [i_3] [i_3] [20U] [i_3]))))));
        var_29 = ((/* implicit */signed char) (+(max((7502058513561616504ULL), (((/* implicit */unsigned long long int) 0U))))));
        arr_34 [i_3 + 1] [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) (signed char)27))));
        var_30 = ((/* implicit */signed char) (-(1610612736)));
    }
    var_31 = ((/* implicit */short) 3784028926U);
}
