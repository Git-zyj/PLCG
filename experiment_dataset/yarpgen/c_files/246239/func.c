/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246239
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
    var_14 -= ((/* implicit */unsigned long long int) (signed char)57);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) != (var_11)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        arr_4 [i_0] = (signed char)-48;
        arr_5 [i_0] = ((/* implicit */signed char) var_2);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_15 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))));
            var_16 -= ((/* implicit */unsigned char) (((~(var_1))) << (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)57))))));
            arr_9 [i_0] [i_0] [(unsigned char)10] = ((/* implicit */short) var_4);
        }
        for (long long int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                arr_14 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) (signed char)-58);
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) arr_8 [i_5] [i_2]);
                            var_18 -= ((/* implicit */unsigned int) (signed char)-63);
                            var_19 = ((/* implicit */unsigned long long int) arr_7 [i_0 - 1]);
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)52)) >= (((/* implicit */int) arr_12 [i_0]))))) - ((-(((/* implicit */int) arr_2 [i_6] [i_2])))))))));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6] [i_2]))) : (var_11)))) ? (((((/* implicit */int) (signed char)-57)) + (((/* implicit */int) (signed char)65)))) : (((/* implicit */int) var_2)))))));
                    arr_25 [(_Bool)1] [i_2] [(unsigned char)3] [i_7] = ((/* implicit */unsigned short) ((signed char) arr_11 [i_0] [i_0 - 1] [i_0 - 1]));
                }
            }
        }
    }
    var_22 = ((/* implicit */short) var_6);
}
