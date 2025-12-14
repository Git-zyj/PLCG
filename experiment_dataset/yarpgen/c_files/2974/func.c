/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2974
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
    var_18 = ((/* implicit */short) (+((+(max((596292320925920710LL), (((/* implicit */long long int) (unsigned short)224))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), ((unsigned char)55)))), (-596292320925920716LL)))), (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (6368116351894563673ULL))), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((max((arr_10 [i_2 - 1] [i_2 - 1]), (arr_10 [i_2 + 2] [i_2 + 2]))), (max((arr_10 [i_2 - 1] [i_2 - 1]), (arr_10 [i_2 + 1] [i_2 + 1])))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) -596292320925920711LL);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)69)))))));
                arr_14 [i_0] [i_0] = 4503598553628672ULL;
            }
        } 
    } 
}
