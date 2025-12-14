/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33712
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) /* same iter space */
                        {
                            var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (signed char)-21))));
                            arr_12 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1 - 3]))) : (5578528064152219980LL)));
                        }
                        for (unsigned int i_5 = 2; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(signed char)8])) ? (12021679695345023272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (15268014094497142550ULL)));
                            var_13 = arr_9 [(unsigned char)3];
                            arr_17 [i_0] [i_1] [i_1] [i_2] [i_0] [i_0] [i_0] &= ((((/* implicit */int) var_8)) % (((/* implicit */int) ((signed char) var_8))));
                        }
                        arr_18 [i_0] [i_1] [i_0] [1U] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_1] [(_Bool)1] [i_2] [i_2] [(_Bool)1] [i_3 - 2])) ? (arr_3 [(unsigned short)2]) : (((/* implicit */int) (unsigned short)52142)))) / (((/* implicit */int) (signed char)-4))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) & (arr_0 [i_0])))));
        var_15 = ((/* implicit */unsigned int) ((int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]));
        var_16 |= ((((((/* implicit */_Bool) 7404961603268248828LL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13393))));
    }
    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) var_8);
        arr_21 [i_6] |= ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6]))) | (arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6]))) <= (arr_6 [i_6] [i_6] [i_6] [(short)20]))))));
    }
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_5) : (var_1)))))) - (max((((/* implicit */long long int) max(((unsigned char)255), (var_8)))), (var_1))))))));
    var_19 |= ((/* implicit */unsigned long long int) var_0);
    var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)21))))) | (((/* implicit */long long int) ((/* implicit */int) ((var_5) > (((/* implicit */long long int) var_3)))))))) % (((/* implicit */long long int) ((/* implicit */int) min((var_8), (var_8)))))));
}
