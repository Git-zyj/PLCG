/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34684
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((3772214035764921660ULL) != (((/* implicit */unsigned long long int) ((1048575U) - (2881105605U)))))))) % (((3772214035764921660ULL) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)14)))))))));
                arr_6 [i_0] [i_0] |= ((/* implicit */unsigned int) (unsigned char)14);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) -1546325328)), (14674530037944629947ULL))))))));
}
