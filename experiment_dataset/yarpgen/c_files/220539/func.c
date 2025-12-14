/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220539
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
    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned short) var_8)), (var_6))), (((/* implicit */unsigned short) max(((signed char)-21), ((signed char)8)))))))));
    var_14 *= ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((((/* implicit */int) var_10)) & (((((/* implicit */int) var_0)) ^ (var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_0])))) : (((((/* implicit */int) arr_3 [i_1] [i_1] [0])) >> (((var_9) + (589303886)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (arr_7 [i_2 + 1])))) ? (arr_2 [1ULL] [i_2]) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_11 [i_1] [(_Bool)1] [i_1]))));
                        arr_13 [i_3 - 1] [i_3] [i_2] [i_3] [i_0] = arr_10 [i_3] [(unsigned short)5] [i_0 - 1];
                        var_17 = ((/* implicit */int) arr_9 [i_3] [i_2 + 2] [i_0] [i_0]);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        arr_17 [i_1 - 3] [i_1 - 3] = ((/* implicit */long long int) arr_4 [i_2] [i_2]);
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_9 [i_0 - 1] [i_1 + 1] [i_2] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) 4294967274U)) : (arr_9 [i_0] [i_1] [i_1] [i_0])));
                    }
                }
                for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 2) /* same iter space */
                {
                    arr_20 [i_0 - 1] [i_1] [(signed char)15] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_5])), (var_7)));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)15)) ? (max((((/* implicit */long long int) min((arr_19 [i_0] [i_1 - 2] [i_5]), (((/* implicit */int) var_11))))), (((long long int) arr_4 [i_5] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_5] [i_6] [i_0] [i_6])) <= (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned char)250)))))))))));
                                var_20 = ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)8191)));
                            }
                        } 
                    } 
                    var_21 -= ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)46616)) : (((/* implicit */int) (_Bool)1)));
                }
                arr_25 [i_1 - 2] [i_0] = ((/* implicit */long long int) (!(((_Bool) ((((/* implicit */unsigned int) var_9)) < (arr_7 [i_0]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_1);
    var_23 = ((/* implicit */unsigned long long int) var_12);
}
