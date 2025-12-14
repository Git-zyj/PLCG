/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224037
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
    var_20 = ((/* implicit */long long int) min((((((unsigned long long int) -129635601)) | (((/* implicit */unsigned long long int) var_19)))), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_1 - 1] = ((/* implicit */unsigned long long int) ((int) var_18));
                            arr_10 [2LL] [i_0] [i_0] [2LL] [i_0] [i_0] = ((/* implicit */int) var_0);
                            arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (signed char)27)), (min((((var_2) - (((/* implicit */long long int) -129635601)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 11133855194672501792ULL)) ? (129635600) : (((/* implicit */int) var_9)))))))));
                            arr_12 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7312888879037049824ULL)) ? (11133855194672501773ULL) : (((/* implicit */unsigned long long int) -5904661458785478830LL))))) ? (min((((/* implicit */unsigned long long int) ((_Bool) 1248329825))), (11133855194672501792ULL))) : (((/* implicit */unsigned long long int) arr_6 [3LL] [i_1] [i_0] [i_1]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */long long int) (~(((/* implicit */int) ((129635586) != (129635600)))))))));
                arr_13 [i_0] = ((/* implicit */unsigned char) (~((~(129635602)))));
                var_22 -= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 791052984)) || (((/* implicit */_Bool) var_15)))));
            }
        } 
    } 
    var_23 = var_9;
    var_24 = ((/* implicit */unsigned char) var_2);
}
