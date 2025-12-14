/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206147
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (-(0LL))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2 + 2] [i_1] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) max((16330365905284848631ULL), (((/* implicit */unsigned long long int) -10LL)))));
                                var_21 = ((unsigned long long int) ((2116378168424702985ULL) != (((/* implicit */unsigned long long int) 6854638541215822318LL))));
                                var_22 = ((/* implicit */long long int) ((signed char) max((-4700377531545272912LL), (-4700377531545272912LL))));
                            }
                        } 
                    } 
                    var_23 = max((((/* implicit */unsigned long long int) (-(-2033048320)))), (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))) : (2116378168424702985ULL))), (18446744073709551605ULL))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) var_12);
}
