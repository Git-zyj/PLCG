/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208800
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
    var_16 -= ((/* implicit */unsigned short) min(((+(((/* implicit */int) var_5)))), (var_10)));
    var_17 &= (~(((/* implicit */int) (unsigned short)43305)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22214)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_11 [(unsigned char)11] [13LL] [i_1] [9ULL] [i_3] [i_1] = (-((-(min((-1LL), (((/* implicit */long long int) (unsigned short)22231)))))));
                            arr_12 [i_0] [i_0] [i_0] [i_1] [23] [i_3] = ((/* implicit */unsigned char) max(((-((~(arr_2 [i_3]))))), (((/* implicit */long long int) arr_8 [i_0] [(unsigned char)10] [i_2]))));
                            arr_13 [i_1] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) (unsigned char)239)))), ((!(((/* implicit */_Bool) arr_5 [i_3]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) arr_7 [22U] [(unsigned char)15] [i_1] [i_0]);
                var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) arr_10 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_0] [i_0]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (max((((/* implicit */unsigned long long int) (unsigned short)43305)), (9716737580789041121ULL))))))));
}
