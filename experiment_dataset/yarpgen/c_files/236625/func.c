/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236625
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_2])), (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) ((arr_0 [i_0] [i_2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_0]))))) : (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_14 = ((/* implicit */_Bool) ((var_6) ? (((arr_1 [i_0]) << (((/* implicit */int) min(((_Bool)1), (arr_0 [i_2] [i_2])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */int) var_9);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
                                var_16 = ((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)0))))) > (((((/* implicit */int) arr_0 [i_1] [i_1 + 3])) << ((((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_4])))) - (87))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) var_2);
                        arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_1 + 2] [i_1 + 2]))));
                    }
                    for (signed char i_6 = 2; i_6 < 13; i_6 += 1) 
                    {
                        var_18 = (+(arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]));
                        var_19 = ((/* implicit */short) arr_15 [i_6] [i_1] [i_1] [i_6]);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (unsigned char)0)))))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) (signed char)-2))))) : (((((/* implicit */_Bool) arr_20 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0)))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(((/* implicit */int) var_9)))))));
                arr_25 [i_7] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) var_11)) ? ((((!(var_5))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10))) : (((/* implicit */long long int) min(((-(((/* implicit */int) var_8)))), ((-(((/* implicit */int) var_3))))))));
    var_23 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (signed char i_9 = 1; i_9 < 6; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            {
                var_24 = ((((/* implicit */int) ((unsigned short) (-(arr_2 [i_9]))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_9] [i_10] [i_9] [i_9 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_9] [i_10]))))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_8)))))));
                arr_31 [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
            }
        } 
    } 
}
