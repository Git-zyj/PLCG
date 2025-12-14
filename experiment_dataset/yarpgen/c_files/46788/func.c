/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46788
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
    var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_1)) * (((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) arr_2 [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10798)) ? (3351954722U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13)))))) ? (693215572335009654LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246)))));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */_Bool) var_9);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_18 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((4010721268215964933ULL), (((/* implicit */unsigned long long int) 8326336585976915061LL))))) ? (((((/* implicit */_Bool) 4152641473243120808LL)) ? (-3193596866676714540LL) : (8326336585976915078LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7107)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) 4152641473243120790LL)))));
                var_21 -= ((/* implicit */signed char) max(((+(((/* implicit */int) var_1)))), ((~(((/* implicit */int) var_13))))));
            }
        } 
    } 
}
