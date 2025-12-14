/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221917
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(2147483647)))) ^ (max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) var_0))))));
        arr_5 [i_0] [i_0] = (-(((int) min((var_3), (var_0)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */_Bool) max((var_10), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59022))) >= (arr_1 [i_1] [i_1])))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_2] [i_0] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_7 [3])) >= (((/* implicit */int) var_4)))));
                            var_11 = ((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [i_3] [i_4]) & (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)84)) ^ (((/* implicit */int) arr_9 [i_0] [i_3] [i_2] [i_4])))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_5] [i_5] [(unsigned short)0] [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((_Bool) (short)4222)))));
                            var_13 = ((/* implicit */_Bool) max((var_13), ((!(((/* implicit */_Bool) (-(3593740902U))))))));
                            var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (signed char)-123))) ? (arr_8 [(_Bool)1] [i_3]) : (((((/* implicit */_Bool) arr_3 [i_1] [(signed char)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_12 [i_0] [i_1] [i_2] [i_0] [i_5])))));
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((arr_11 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_16 = ((((/* implicit */_Bool) ((short) (unsigned short)50328))) ? (((/* implicit */int) arr_21 [i_1] [i_6 - 1] [i_6] [i_6 - 1] [i_0])) : (((/* implicit */int) var_6)));
                            arr_23 [i_0] [i_1] [i_0] [i_3] [i_3] [(_Bool)1] [i_6 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_6] [7] [i_6 - 1] [7] [7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_12 [i_6] [i_6 - 1] [i_6 - 1] [i_1] [i_1])));
                        }
                        var_17 = ((/* implicit */unsigned short) arr_0 [i_0]);
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)122)))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1] [i_0]))));
        }
        for (unsigned int i_7 = 1; i_7 < 20; i_7 += 1) 
        {
            var_19 = ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [(signed char)10] [i_0]);
            arr_26 [i_0] [(_Bool)1] [i_7] = ((/* implicit */unsigned char) arr_7 [i_0]);
            arr_27 [i_0] [i_0] = ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-4218)) : (((/* implicit */int) var_7)))))) < (min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_25 [i_7 - 1] [i_0] [i_0])))))));
        }
    }
    var_20 = ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (min((((((/* implicit */int) (short)4222)) << (((24576U) - (24576U))))), (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_6)) + (113)))))) ? ((-(((/* implicit */int) var_4)))) : ((-(((/* implicit */int) var_9)))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)8))))))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min(((short)4217), ((short)7289)))) : (((/* implicit */int) ((signed char) var_7)))))));
}
