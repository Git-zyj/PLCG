/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208441
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
    var_13 = ((/* implicit */_Bool) min((var_13), (var_0)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) var_3);
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_0 [i_0])))))))) || (((/* implicit */_Bool) arr_2 [i_0])))))));
        var_17 = ((/* implicit */signed char) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_10)))), ((!(var_0))))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) var_8)) ? (arr_1 [12U] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) (((+(var_6))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) -563062524102022046LL)) ? (arr_6 [i_1 + 1] [14] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        {
                            var_20 &= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_2] [i_3] [i_4 + 1] [i_3])) ? (((/* implicit */long long int) var_7)) : (var_3))));
                            var_21 = ((/* implicit */signed char) (((_Bool)1) ? (9316118739367983634ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) 7836293)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_10 [i_0] [9LL] [i_5] [i_5] [i_5] [(unsigned short)1]))));
            arr_18 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_5]))))) ? (min((arr_9 [i_0] [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1958805986U)) ? (((/* implicit */long long int) 3256301160U)) : (35184372088831LL))))))) ? (min((var_6), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5])))))));
        }
    }
}
