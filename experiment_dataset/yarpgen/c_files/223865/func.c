/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223865
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            var_11 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_1 - 1] [(_Bool)1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1 + 3] [(unsigned char)8])))) ^ (((((/* implicit */int) arr_4 [i_1 + 1] [(_Bool)1])) + (((/* implicit */int) var_7))))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                arr_8 [20LL] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 - 1]);
                var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (max((var_9), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [12LL] [i_1 + 3] [i_2]))) : (((((/* implicit */_Bool) 3951933998U)) ? (((((/* implicit */_Bool) var_6)) ? (var_3) : (var_1))) : ((+(var_3)))))));
            }
            arr_9 [i_0] [(unsigned char)16] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((short) var_2))) ? (((((arr_5 [i_0] [i_1] [i_1]) + (2147483647))) << (((((var_9) + (4071733056029624482LL))) - (22LL))))) : (((/* implicit */int) arr_7 [i_0] [i_1])))) ^ (((/* implicit */int) arr_6 [i_0] [i_0] [i_1 + 2] [i_1 + 1]))));
            arr_10 [i_0] [i_0] = ((/* implicit */int) ((((6232118415845840162ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1 + 1])) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_4))))))))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) (_Bool)1)));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_13 = ((/* implicit */signed char) var_10);
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) min((arr_6 [i_3] [i_4] [i_4] [i_7]), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))))))))));
                            arr_24 [i_3] [i_4] [i_3] [i_3] [i_4] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((3951933998U) << (((((/* implicit */int) (signed char)-4)) + (21)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_5] [i_6] [i_7]))) : (((((/* implicit */_Bool) max((((/* implicit */int) arr_16 [i_3])), (arr_18 [i_4] [i_5] [i_5] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_3])) <= (((/* implicit */int) (signed char)-4)))))) : (arr_19 [i_3])))));
                        }
                    } 
                } 
            } 
        }
        var_14 = ((((_Bool) max((arr_19 [i_3]), (((/* implicit */long long int) arr_5 [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) arr_21 [i_3] [i_3] [(unsigned char)23] [i_3] [i_3] [i_3] [i_3])) : (((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))));
        arr_25 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((-1725008971) == (2147483647)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -641894854)))))));
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((var_9) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? ((~(var_9))) : (min((max((((/* implicit */long long int) var_0)), (var_2))), (((/* implicit */long long int) ((unsigned int) var_6)))))));
}
