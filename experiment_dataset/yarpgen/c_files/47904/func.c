/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47904
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14)) ? ((~(-1544309132))) : (((/* implicit */int) min((((signed char) arr_12 [i_0])), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_3] [i_3])))))))))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((arr_14 [8ULL] [i_1] [i_1] [(signed char)21] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) min((arr_13 [i_3] [i_2 - 1]), (((/* implicit */unsigned short) arr_9 [5ULL] [i_2 - 1] [i_2 - 1])))))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)65535))))) : (min((-1328212465), (((/* implicit */int) min((((/* implicit */short) var_6)), (var_9))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */short) var_5);
                                arr_26 [i_5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5 - 1] [i_6] [i_1])))))) <= (((((var_6) || (((/* implicit */_Bool) arr_9 [i_5] [1] [12ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5 - 1] [i_1] [i_1] [(unsigned char)21]))) : (var_8)))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_0] [(unsigned char)4] [i_0])) ? (arr_11 [i_0] [(_Bool)1] [i_1]) : (arr_11 [i_0] [(_Bool)1] [i_1]))) ^ (max(((-(((/* implicit */int) (unsigned short)15)))), (((/* implicit */int) min((var_15), (((/* implicit */short) arr_18 [i_0] [i_1])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_16);
    var_24 = ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (unsigned short)28386))))), (((/* implicit */unsigned long long int) var_1))));
}
