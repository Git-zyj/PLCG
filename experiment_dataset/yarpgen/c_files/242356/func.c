/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242356
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [(signed char)16] [i_0] = ((((/* implicit */_Bool) max((1887658516), (((((/* implicit */_Bool) 6353682518684037480LL)) ? (550314951) : (((/* implicit */int) (_Bool)1))))))) ? (max((((/* implicit */int) arr_1 [i_0])), (-13))) : ((-(-790282857))));
                var_14 ^= ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1]))))) != (((/* implicit */int) min(((signed char)-102), (var_6))))))), ((signed char)31)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) min((-1252646009), (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (min((-10), (-1185809116))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) && (((/* implicit */_Bool) arr_8 [i_2])))))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) -9013070875544561747LL))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -790282840)) ? (1252646009) : (((((/* implicit */int) (signed char)102)) - (((/* implicit */int) (unsigned char)120))))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_4 [i_2] [i_4]), (((/* implicit */signed char) (_Bool)1)))))))) ? (arr_9 [i_2] [i_2] [i_2]) : (((((/* implicit */_Bool) arr_4 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_15 [i_2] [i_3] [i_4] [i_5] [i_6])))) : (((long long int) (signed char)59)))))))));
                            arr_18 [i_4] [i_5] [i_5] [i_5] [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) -10)) : (4140242393U))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 450406354250332517LL)) ? (((/* implicit */int) (signed char)127)) : (arr_7 [i_2] [(unsigned char)2])))))))));
                            arr_19 [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_11 [i_4])))) ? (((/* implicit */int) (!((_Bool)1)))) : ((+(((/* implicit */int) (signed char)6))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            arr_23 [i_4] [i_3] [i_4 + 1] [i_4 + 1] [i_7] = ((/* implicit */short) -1152921504606846976LL);
                            var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_4] [i_3] [i_4] [i_4 - 1] [i_4 + 1]))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_9 [i_2] [i_5] [i_3]))));
                            var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))));
                        }
                        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)127)), (arr_13 [i_4])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 67108864)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) arr_2 [i_4 + 1]))))) : (4177920U))) / (((/* implicit */unsigned int) (-(11))))));
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(((((/* implicit */_Bool) 536838144LL)) ? (((/* implicit */int) (unsigned short)56782)) : (-1416412765))))))));
    }
    var_24 -= ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_4)), (min((-289670189342577607LL), (((/* implicit */long long int) (unsigned char)174)))))), (((/* implicit */long long int) -8))));
}
