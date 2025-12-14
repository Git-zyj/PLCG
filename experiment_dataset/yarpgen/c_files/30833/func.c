/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30833
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
    var_15 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)65524)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) -857171476)))), (((/* implicit */unsigned long long int) ((int) (_Bool)1)))));
        var_17 = -1382887131;
        arr_3 [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)20)))) : (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [(_Bool)1]);
                    arr_10 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) 1382887130);
                    arr_11 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_5 [i_0] [i_1])))) * (((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_2])))));
                    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)35851))))))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) ((signed char) arr_8 [i_3] [i_3] [i_3]))) : (((/* implicit */int) arr_12 [(unsigned char)3]))));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            arr_17 [i_3] [i_3] [(short)6] &= ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_2)))) - (max((((/* implicit */unsigned long long int) (unsigned short)35851)), (arr_0 [i_3] [i_4]))))), (((/* implicit */unsigned long long int) (signed char)-34))));
            arr_18 [i_3] [(unsigned char)0] = ((/* implicit */unsigned short) (_Bool)0);
            var_20 = arr_16 [i_3] [i_4] [i_4];
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            arr_22 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((4095U) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_1 [i_3]), (((/* implicit */int) var_4))))))))));
            arr_23 [5U] = ((/* implicit */unsigned int) arr_0 [(unsigned short)7] [i_5]);
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) -1215134974))) >> (((((long long int) arr_0 [i_6] [i_6])) + (3480655794668133858LL)))));
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned char) var_9);
        arr_29 [(short)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [(short)3])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_21 [i_6])));
    }
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (_Bool)1))));
    var_22 = ((/* implicit */short) var_5);
    var_23 = ((/* implicit */unsigned long long int) var_10);
}
