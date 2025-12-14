/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230959
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
    var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)8128)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) - (var_17)))), (((arr_0 [9U] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_12 [i_0] [i_1 + 1] [i_0 - 1])), (var_13))))) : (max((((/* implicit */unsigned int) (signed char)64)), (max((arr_9 [7LL] [7LL] [i_0] [i_3]), (((/* implicit */unsigned int) arr_11 [i_0] [i_2]))))))));
                        arr_14 [7U] [i_0] [7U] [i_3] = ((/* implicit */int) var_8);
                        arr_15 [i_0] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_1 + 3] [i_0 - 1] [i_0 + 1])) ? (arr_6 [i_1 + 3] [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) (unsigned char)253)))), (((arr_6 [i_1 + 1] [i_0 - 1] [i_0 - 1]) | (((/* implicit */int) (unsigned char)21))))));
                    }
                } 
            } 
        } 
        arr_16 [(_Bool)1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_11 [13LL] [i_0 - 1])) * (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1])))), (((/* implicit */int) max(((unsigned char)253), (((/* implicit */unsigned char) arr_11 [i_0 + 1] [i_0 + 1])))))));
    }
    var_20 ^= var_14;
    /* LoopNest 3 */
    for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (unsigned int i_6 = 1; i_6 < 20; i_6 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) arr_21 [(unsigned short)6])) ? (var_5) : (((/* implicit */unsigned long long int) arr_21 [(unsigned short)12])))) << (((arr_21 [(unsigned short)10]) - (3724956959U))))))));
                    arr_25 [i_4] [(unsigned char)0] [i_4] = ((/* implicit */int) var_8);
                    var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_12 [i_4] [i_4 + 1] [i_4 + 2])), (arr_4 [14ULL])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_20 [i_4]))));
                    arr_26 [i_4 + 1] [i_4] = ((/* implicit */unsigned int) (signed char)-1);
                }
            } 
        } 
    } 
}
