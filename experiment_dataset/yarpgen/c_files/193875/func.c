/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193875
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
    var_17 = ((var_6) << (((var_3) - (16734673477972855304ULL))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(-6526092699625231154LL))) : (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
                arr_5 [i_1] = ((unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) var_0))))), (arr_2 [(unsigned short)6] [i_0] [i_1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            arr_18 [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) -5451814936721330189LL);
                            arr_19 [i_2] [0ULL] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29))) : (arr_9 [i_5]))), (((/* implicit */long long int) ((((/* implicit */long long int) var_11)) < (arr_10 [8LL] [8LL])))))))));
                            arr_20 [i_2] [i_2] [i_3] [i_3] [i_2] [i_2] = arr_13 [i_2] [i_2] [i_2];
                        }
                    } 
                } 
                arr_21 [i_3] = ((((((/* implicit */_Bool) (~(var_5)))) ? (max((((/* implicit */long long int) (unsigned short)38219)), (-5451814936721330188LL))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) >> (((((/* implicit */_Bool) -2081170039874659463LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31))) : (26ULL))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) var_15)))))));
    var_19 = ((/* implicit */unsigned short) var_3);
}
