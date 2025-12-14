/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202123
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
    var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
    var_13 = ((/* implicit */_Bool) min((-745349705442229453LL), (((/* implicit */long long int) (unsigned short)49154))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 = max(((unsigned short)49142), (arr_5 [i_2] [(signed char)6]));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) 2147475456)))), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0 + 2] [i_0 + 3])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 15; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    {
                        arr_19 [i_0] [i_3] [i_4] [2U] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned short) var_1)), ((unsigned short)16356)));
                        arr_20 [6ULL] [i_4 - 1] = ((/* implicit */signed char) min((0U), (4294967295U)));
                        var_16 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0] [13LL] [i_5]))))), (4294967282U))), (((/* implicit */unsigned int) arr_7 [i_0] [i_3] [i_4]))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        arr_23 [(signed char)0] [1ULL] = ((/* implicit */unsigned int) -2147475465);
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (7ULL))))));
        arr_24 [i_6] = ((/* implicit */unsigned int) arr_21 [i_6] [i_6]);
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967282U))));
    }
}
