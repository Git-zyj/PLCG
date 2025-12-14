/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29152
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [(unsigned char)12])) + (((/* implicit */int) (_Bool)1))));
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_4] [i_2] [i_0])))) && (((/* implicit */_Bool) arr_8 [(short)1] [i_1] [i_3] [i_0 + 1]))));
                        }
                        var_14 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [(_Bool)1] [i_2] [(short)2] [i_2]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    {
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */int) arr_17 [i_6 - 1] [i_0])) == (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_6])) && (((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_6 - 1]))))))))));
                        var_16 = ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_7 [i_0] [9LL] [i_7] [i_0 + 1])) : (((var_7) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) var_7)))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned short) 2055377450188659171ULL);
            var_18 = ((/* implicit */int) (_Bool)1);
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_5] [i_5]))))))))));
        }
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 2])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0 + 2])))))));
    }
    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_6 [10] [(short)10] [(short)10] [(_Bool)1]))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_7 [i_8] [i_8] [i_8] [i_8 + 2])))) << (((((/* implicit */int) arr_3 [i_8])) - (183)))))) || (((/* implicit */_Bool) 4294967276U)))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                for (unsigned int i_11 = 2; i_11 < 20; i_11 += 1) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((((arr_22 [i_8 + 2] [i_8 + 1] [i_11 + 1]) <= (arr_22 [i_8 + 2] [i_8 + 1] [i_11 - 2]))) || (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))))));
                        arr_30 [i_8] [i_9] = ((/* implicit */_Bool) (-(((((((/* implicit */_Bool) arr_5 [i_9] [i_10] [i_11])) ? (((/* implicit */int) (unsigned char)251)) : (arr_6 [(short)16] [i_9] [i_10] [i_11]))) >> (((max((var_5), (arr_22 [i_8] [i_10] [i_11]))) + (5902394803897885490LL)))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_8] [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_8])) + (((/* implicit */int) (signed char)-1))))))) ? (-4981282236808645561LL) : (((arr_13 [i_8 + 2] [i_8 + 1] [i_8 + 2]) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_8] [i_8])) ? (((/* implicit */int) arr_25 [(short)9] [i_8 + 1] [i_8 + 1] [i_8])) : (((/* implicit */int) arr_20 [i_8 + 1])))))))));
    }
    var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) > (var_11)))), (max((min((var_3), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_11))))));
}
