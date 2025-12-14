/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200615
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
    var_19 *= ((/* implicit */unsigned short) var_9);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_6))));
    var_21 ^= var_10;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)1)))) << (((16777215U) - (16777209U))))))));
                                var_23 = ((/* implicit */unsigned char) max(((+(4278190082U))), (((/* implicit */unsigned int) ((unsigned short) 16777213U)))));
                            }
                        } 
                    } 
                } 
                var_24 = 16777214U;
            }
        } 
    } 
}
