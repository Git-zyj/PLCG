/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46880
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
    var_16 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 660135685)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)49665)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1 + 2] [i_0] = ((/* implicit */short) (_Bool)1);
                    arr_9 [i_1] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)246)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                var_18 = (!(((((/* implicit */int) arr_6 [i_0 - 1] [i_3] [i_4])) >= (arr_5 [i_0] [i_0] [i_0]))));
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) -1883248261))));
                arr_14 [i_4] [i_3] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_0])))) ? (arr_4 [i_0] [i_0] [i_0 - 2]) : (((/* implicit */int) arr_2 [i_0 + 3]))));
            }
            var_20 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 + 3]);
            var_21 = ((/* implicit */unsigned long long int) arr_5 [10] [(unsigned short)13] [i_0]);
            var_22 = ((/* implicit */unsigned short) (signed char)0);
        }
        arr_15 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)137))));
    }
    var_23 = ((/* implicit */short) min((var_15), (((int) (!(((/* implicit */_Bool) (unsigned short)61041)))))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (unsigned char)116))));
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_10)) & (var_7))) << (((((283897061507784591ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))))) - (137ULL)))))) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */unsigned long long int) var_4)) : (var_9)))));
}
