/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240695
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((min((6340167420244527320LL), (((/* implicit */long long int) 60)))) >> ((((~(var_15))) - (1100490848U))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_7);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */int) var_7)), (arr_1 [i_2]))), (((/* implicit */int) arr_0 [6LL]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_1 + 1] [i_0]))))) : (((int) min((var_1), (((/* implicit */unsigned char) var_9)))))));
                            var_18 = ((/* implicit */signed char) max((-1011216911), (((/* implicit */int) (_Bool)1))));
                            arr_11 [i_0] [i_1] [i_2] [(unsigned char)9] = ((/* implicit */unsigned char) arr_3 [i_0]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) (+(2147483647)));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (~(((long long int) var_9))));
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            {
                var_21 = ((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [(unsigned char)10] [i_5])) ? (arr_1 [i_5]) : (((/* implicit */int) arr_10 [i_5] [(signed char)3] [i_5] [i_4 + 4] [i_4 + 4]))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8992859860468906310LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5])))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        {
                            var_22 = (!((_Bool)1));
                            var_23 = ((/* implicit */int) var_4);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_7 [i_4 + 1] [i_4 + 1]))));
            }
        } 
    } 
}
