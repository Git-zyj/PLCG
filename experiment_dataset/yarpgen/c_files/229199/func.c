/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229199
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
    var_13 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) (~(((/* implicit */int) var_2))))));
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >= (731114399)))), (var_0)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 &= ((/* implicit */signed char) min((((/* implicit */short) (_Bool)0)), ((short)-5)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_16 = ((-2545256504714770712LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-39))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_11);
    var_19 += ((/* implicit */unsigned long long int) ((signed char) var_0));
}
