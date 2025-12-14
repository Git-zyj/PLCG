/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239704
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
    var_17 &= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) (short)-14031))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) ^ (min((((unsigned int) arr_3 [10U])), (((/* implicit */unsigned int) arr_2 [(unsigned short)6])))))))));
        arr_4 [(unsigned short)4] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) (short)3701))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_9))) - (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)6574)) != (((/* implicit */int) arr_2 [i_0])))))))));
        arr_6 [i_0] = ((/* implicit */short) ((unsigned short) arr_1 [i_0]));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned int) (unsigned short)58962);
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    {
                        arr_19 [i_3] [(_Bool)1] [i_3] [(_Bool)1] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11)))) - (((long long int) (unsigned short)58947)));
                        var_20 = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)6586));
                    }
                } 
            } 
        }
        arr_20 [i_1] = ((/* implicit */unsigned int) ((int) ((arr_17 [1LL] [i_1] [(_Bool)1]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))));
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_1] [(short)8])), (((((/* implicit */_Bool) (signed char)120)) ? (3725607854710046451ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6574))))))))));
    }
}
