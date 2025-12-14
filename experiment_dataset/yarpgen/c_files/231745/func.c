/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231745
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
    var_19 = ((/* implicit */int) var_4);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max((((int) (unsigned short)21738)), (((((/* implicit */int) (unsigned short)34617)) | (((/* implicit */int) (signed char)42)))))))));
                                var_21 &= ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((unsigned short) (signed char)55))), (min((((/* implicit */long long int) 0)), (3348537416401512690LL))))), (((/* implicit */long long int) ((unsigned short) 0)))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((long long int) (unsigned char)12)) < (((((long long int) 15072537068836141822ULL)) | (((/* implicit */long long int) ((/* implicit */int) (signed char)9)))))));
                    arr_15 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((9007130535264256LL) | (4847541966672121636LL)))) | (min((3374207004873409811ULL), (((/* implicit */unsigned long long int) (unsigned char)112))))))) ? (min((((long long int) 1416917393)), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)29956)) ? (0) : (-6)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)44))))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */unsigned short) 7619591618097078865LL);
}
