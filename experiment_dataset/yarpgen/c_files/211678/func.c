/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211678
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
    var_17 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (signed char)-124)) > (((/* implicit */int) (signed char)124)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0] [5ULL])))));
                    var_18 *= ((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [7LL] [i_0]))) & (max((((/* implicit */long long int) 1941764257)), (arr_0 [i_0]))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0])))) ? (arr_3 [i_0]) : ((~(((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [i_3] [i_5] [(signed char)10] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (((unsigned int) ((((/* implicit */unsigned long long int) arr_2 [i_3] [i_3])) + (arr_4 [i_3]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        arr_21 [i_4] [i_4] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)1)) ? (arr_4 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_4] [i_5]))))) * (((arr_6 [i_3] [i_3] [i_3]) ? (arr_4 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_5] [i_6])))))));
                        var_19 = max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)223)) <= ((-(((/* implicit */int) (_Bool)1))))))), (arr_0 [i_6]));
                    }
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        var_20 -= ((/* implicit */short) (_Bool)0);
                        arr_25 [i_4] [i_4] [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_3] [i_4] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) : (((((arr_22 [2U] [i_4]) || (((/* implicit */_Bool) arr_3 [i_4])))) ? (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125))) : (1246118801U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8))))))));
                    }
                }
            } 
        } 
    } 
}
