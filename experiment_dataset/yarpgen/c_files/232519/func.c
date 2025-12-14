/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232519
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
    var_11 = min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) ((unsigned char) var_3)))))), (var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [(unsigned char)2] [i_1 - 2] [i_2] = ((/* implicit */unsigned char) min((7857657349443909112LL), (((/* implicit */long long int) (_Bool)1))));
                    var_12 -= ((/* implicit */unsigned char) ((((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)13236)))) ? ((-(((/* implicit */int) (unsigned char)44)))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_6 [i_0] [i_1] [i_2] [i_1 - 1]) : (((/* implicit */int) arr_1 [i_1])))))) != ((~(((/* implicit */int) (unsigned char)240))))));
                }
            } 
        } 
    } 
}
