/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222177
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (_Bool)1))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_2)))))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_11 [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) <= (var_3)))) : (((/* implicit */int) (_Bool)1))))));
                        var_16 *= ((/* implicit */unsigned int) var_1);
                        var_17 -= ((((/* implicit */_Bool) ((unsigned int) arr_9 [i_2 + 1] [i_1] [8] [i_3]))) ? (((/* implicit */int) ((var_13) > (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) : ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))));
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 2] [i_2 + 2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2 + 2] [i_2 - 1]))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
        {
            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [6LL] [6LL])) ? (((((/* implicit */_Bool) arr_5 [(unsigned char)12])) ? ((~(arr_12 [i_4] [i_4] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_2))))))) : (((((arr_7 [i_0] [i_0]) ? (var_13) : (arr_3 [18U] [18U]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)8])))))));
            var_20 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (arr_12 [i_0] [i_0] [i_4]) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (_Bool)1))));
            var_22 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
        }
        for (int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */short) ((arr_14 [i_0]) / (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_9 [i_0] [i_6] [i_0] [i_6]), (var_9)))))))));
            var_24 = ((/* implicit */unsigned char) var_3);
        }
        var_25 *= ((((/* implicit */_Bool) (((~(var_1))) - (((/* implicit */long long int) (+(var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!((_Bool)1))))))) : (min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (arr_18 [i_0] [i_0]))));
    }
    var_26 = ((/* implicit */int) ((((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (var_13)));
    var_27 = ((/* implicit */long long int) min((var_6), (var_6)));
}
