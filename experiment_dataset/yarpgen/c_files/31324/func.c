/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31324
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(unsigned short)10] [i_0] = ((/* implicit */unsigned char) (-(max((9951764032847592232ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-28047)))))))));
                var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28559)) ? (((/* implicit */int) (short)-28047)) : (((/* implicit */int) (short)2049))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_2);
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)28046))))))), (((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) (short)28055)), (7144794070126090496ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
}
