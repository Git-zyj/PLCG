/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244333
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
    var_20 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 6; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_1])) == (((/* implicit */int) ((-6055801545937286615LL) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))))))), (((unsigned char) ((_Bool) 129024LL)))));
                            arr_11 [i_3] [i_3] [i_3] [2LL] &= ((/* implicit */long long int) ((12761295311021795864ULL) % (18446744073709551615ULL)));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) & (arr_5 [i_1] [i_1] [i_1])))))) >= (((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))))) << (((var_10) + (4496005223444974081LL)))))));
                arr_13 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)32);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((long long int) var_9));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        for (long long int i_5 = 3; i_5 < 11; i_5 += 1) 
        {
            {
                var_23 = ((/* implicit */long long int) arr_17 [i_4] [i_5]);
                arr_18 [i_4] = ((/* implicit */unsigned short) ((long long int) min(((+(arr_14 [i_4] [i_5]))), (((/* implicit */long long int) arr_16 [i_4] [i_4] [i_4])))));
            }
        } 
    } 
}
