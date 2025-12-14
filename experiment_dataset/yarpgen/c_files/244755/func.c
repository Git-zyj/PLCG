/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244755
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
    var_19 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned long long int) (!(min((arr_1 [7U]), (arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */signed char) var_14);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [(unsigned char)1] [3U] [i_2] [4] |= ((/* implicit */unsigned int) ((_Bool) ((short) ((var_5) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_1 + 1])) : (((/* implicit */int) var_3))))));
                        arr_12 [i_3] [i_1 + 2] = ((/* implicit */signed char) min((4294967267U), (((/* implicit */unsigned int) min(((signed char)-63), ((signed char)-76))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_4 = 3; i_4 < 10; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
                {
                    for (unsigned char i_6 = 2; i_6 < 7; i_6 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_1] [6] [i_5] [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned int) min((var_1), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])))))), (((long long int) min((((/* implicit */short) arr_4 [i_0] [i_1] [i_0])), (arr_10 [i_0] [9] [i_5] [9] [9]))))));
                            arr_23 [i_6] [i_4] [i_4] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_3)), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (((unsigned int) var_16))))));
                        }
                    } 
                } 
            } 
        }
        arr_24 [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((_Bool) arr_8 [(unsigned char)1] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))) == (((/* implicit */int) arr_7 [i_0] [(signed char)7] [7ULL] [i_0]))));
    }
    var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))))), (((long long int) ((long long int) var_18)))));
}
