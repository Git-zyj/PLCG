/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53755
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1])) - (max((((/* implicit */unsigned long long int) (unsigned char)135)), (min((9082381682108867685ULL), (((/* implicit */unsigned long long int) 6723716464812345229LL))))))));
                arr_6 [i_0] [i_0] [i_1] = min((((/* implicit */long long int) min((max((-752720723), (((/* implicit */int) (short)(-32767 - 1))))), ((+(((/* implicit */int) arr_0 [i_0] [i_1]))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))) - (max((-5994488178114626883LL), (((/* implicit */long long int) (unsigned short)42429)))))));
            }
        } 
    } 
    var_14 = ((unsigned char) 1700429425U);
}
