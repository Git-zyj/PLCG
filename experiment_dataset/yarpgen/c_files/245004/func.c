/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245004
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
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */signed char) (((-(4962208927431860602LL))) < (((/* implicit */long long int) 4294967295U))))), (var_10)));
    var_14 = ((/* implicit */unsigned short) var_9);
    var_15 ^= ((/* implicit */signed char) min(((short)13489), (((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)21)))) > ((~(((/* implicit */int) (signed char)17)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) min((-1765727553081902300LL), (4962208927431860602LL)));
                var_16 = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18)))))) & (min((1765727553081902299LL), (((/* implicit */long long int) (unsigned char)120)))))), (((/* implicit */long long int) ((((/* implicit */int) min(((unsigned char)159), (((/* implicit */unsigned char) (_Bool)0))))) ^ (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)32764))))))))));
            }
        } 
    } 
}
