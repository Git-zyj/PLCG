/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196840
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
    var_15 = ((/* implicit */unsigned char) (+(var_4)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [3U] [i_0]))))), ((-(arr_1 [i_0] [i_0]))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (-7917253633557245705LL)))), ((+(arr_1 [i_0] [3LL])))))));
        var_16 &= ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_17 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) var_14);
        var_19 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_6 [i_1])) ^ (((/* implicit */int) arr_6 [i_1]))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
            {
                arr_13 [i_1] [i_1] [i_2] [9] &= ((/* implicit */int) (((!(((/* implicit */_Bool) 7917253633557245698LL)))) && (((((/* implicit */_Bool) ((short) var_3))) && ((!(((/* implicit */_Bool) arr_3 [i_1]))))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_3 [i_3]))));
                var_21 = ((/* implicit */unsigned int) 7917253633557245705LL);
            }
            for (short i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_1] [i_2])) : (((/* implicit */int) arr_14 [i_1] [(unsigned short)3] [i_1]))))))) ? (((long long int) arr_12 [i_1] [i_1] [i_4] [i_4])) : (7917253633557245702LL)));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) -7917253633557245713LL);
                    var_24 = ((/* implicit */short) arr_3 [i_1]);
                    var_25 = ((/* implicit */short) -7917253633557245723LL);
                    arr_18 [(short)2] [i_2] [i_2] [(unsigned char)0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -7917253633557245713LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1]))) : (arr_4 [i_5]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))))), (((((/* implicit */_Bool) ((int) -7917253633557245717LL))) ? ((+(arr_1 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2])))))));
                }
            }
            arr_19 [(signed char)1] [i_2] = ((/* implicit */signed char) ((max((7917253633557245698LL), (((/* implicit */long long int) arr_0 [i_1] [i_2])))) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_2])))));
            var_26 = ((/* implicit */short) arr_9 [i_1] [i_2] [i_1] [i_2]);
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            arr_23 [i_6] [i_1] = ((/* implicit */short) arr_4 [0U]);
            arr_24 [i_6] [i_1] = var_7;
        }
    }
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) (~(arr_27 [i_7] [i_7])));
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned long long int) max((((((_Bool) -7917253633557245717LL)) ? ((+(7917253633557245704LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_25 [i_7])))))), ((+(((((/* implicit */_Bool) arr_25 [i_7])) ? (7917253633557245697LL) : (arr_27 [i_7] [i_7])))))));
    }
}
