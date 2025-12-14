/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227402
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
    var_16 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_14)))))));
    var_17 = ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_13)))))) == (((/* implicit */int) var_8)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */unsigned int) (-((-(((((/* implicit */int) arr_7 [(unsigned char)16] [i_1] [i_2] [i_3])) + (((/* implicit */int) arr_9 [i_1]))))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 1; i_4 < 17; i_4 += 2) 
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? (11LL) : (14LL)));
                                arr_16 [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */long long int) var_2);
                            }
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) max((443232771U), (((/* implicit */unsigned int) (_Bool)1))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        {
                            var_19 = (i_1 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_1] [i_5] [i_6]), (((/* implicit */short) arr_21 [(unsigned char)18] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(unsigned char)15] [i_1] [i_5] [i_6] [i_1])) >> (((arr_13 [i_1] [i_6] [i_5] [i_1] [i_1]) + (3328071432557207501LL))))))))) * (((/* implicit */int) arr_6 [i_1] [i_5] [i_1]))))) : (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_0] [i_1] [i_5] [i_6]), (((/* implicit */short) arr_21 [(unsigned char)18] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(unsigned char)15] [i_1] [i_5] [i_6] [i_1])) >> (((((arr_13 [i_1] [i_6] [i_5] [i_1] [i_1]) + (3328071432557207501LL))) - (5663293826511707929LL))))))))) * (((/* implicit */int) arr_6 [i_1] [i_5] [i_1])))));
                            var_20 = ((/* implicit */short) min((((/* implicit */long long int) (_Bool)1)), (21LL)));
                            var_21 = ((/* implicit */signed char) min((arr_11 [(unsigned char)15] [i_1] [i_1] [i_1] [i_1] [i_1]), ((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
