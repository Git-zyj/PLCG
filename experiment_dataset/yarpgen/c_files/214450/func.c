/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214450
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
    var_18 = ((/* implicit */unsigned short) var_10);
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_1)))) && (((/* implicit */_Bool) var_8))))), (min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_2)))), (var_3)))));
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) && (((/* implicit */_Bool) arr_2 [i_0 - 2])))));
                            var_22 = ((/* implicit */_Bool) var_2);
                            var_23 = ((/* implicit */unsigned short) var_2);
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) var_1)))));
                            var_25 = min((((/* implicit */unsigned long long int) ((long long int) var_7))), (((unsigned long long int) arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_2 + 1])));
                        }
                    } 
                } 
                arr_14 [i_0 + 3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (arr_0 [i_0 - 2] [i_0])));
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_26 = ((((/* implicit */unsigned long long int) ((13LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) / (min((arr_6 [i_0]), (((/* implicit */unsigned long long int) 4294967278U)))));
                            var_27 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)0)), (7121687006430067860LL)));
                            var_28 = ((long long int) ((signed char) var_5));
                        }
                    } 
                } 
            }
        } 
    } 
}
