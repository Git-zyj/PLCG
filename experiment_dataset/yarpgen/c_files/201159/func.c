/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201159
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned long long int) var_1)), (max((549755813887ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)))))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                    arr_10 [i_0] [i_0] [(unsigned short)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0]))) != (482948064304364956ULL)));
                    arr_11 [6U] [i_1] [i_0] = ((/* implicit */unsigned short) max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) >= (arr_0 [i_1]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) max((629277475U), (((/* implicit */unsigned int) var_3))));
    var_14 = ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (long long int i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        var_15 = ((/* implicit */int) min((min((((((/* implicit */_Bool) arr_13 [i_3])) ? (var_4) : (((/* implicit */unsigned long long int) -8939967344453345995LL)))), (((/* implicit */unsigned long long int) ((signed char) var_6))))), (arr_12 [i_3] [i_3])));
        var_16 = ((/* implicit */unsigned int) min((max((4088607936246007524ULL), (((/* implicit */unsigned long long int) (unsigned char)209)))), (((/* implicit */unsigned long long int) var_1))));
        var_17 = ((/* implicit */_Bool) arr_13 [i_3]);
    }
}
