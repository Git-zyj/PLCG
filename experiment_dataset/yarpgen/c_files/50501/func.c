/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50501
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)214))))) ^ ((~(((/* implicit */int) (unsigned char)30)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (+(var_3)))))));
                            var_15 = (((~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5))))))) / (((/* implicit */int) (unsigned char)30)));
                            var_16 = ((/* implicit */signed char) max((min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) (unsigned char)30)))), (((/* implicit */unsigned long long int) (short)4319))));
                            var_17 *= ((/* implicit */unsigned char) var_1);
                            var_18 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-80)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((unsigned int) ((unsigned long long int) (+(((/* implicit */int) (signed char)90))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) var_2)), (var_6))))) << (((((/* implicit */int) var_1)) - (49509)))));
}
