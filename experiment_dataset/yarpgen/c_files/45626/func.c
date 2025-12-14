/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45626
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
    var_10 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1])) % ((+(((/* implicit */int) arr_9 [i_2]))))));
                                var_12 += ((/* implicit */unsigned long long int) (-(arr_3 [(_Bool)1] [i_2] [i_2])));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */long long int) min((var_13), (-5449615371505618548LL)));
                arr_12 [i_1] = ((/* implicit */_Bool) (((+(-6131500089492354578LL))) ^ (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                arr_13 [i_0] = ((/* implicit */unsigned long long int) (-(1422006603)));
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (signed char)-11))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned char) (+(((((/* implicit */_Bool) -5339299106901181748LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))))))));
}
