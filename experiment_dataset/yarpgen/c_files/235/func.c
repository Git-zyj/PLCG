/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (_Bool)0))));
    var_15 = var_8;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30009)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_0] [i_1])))) || (((/* implicit */_Bool) arr_8 [i_1] [i_1])))) ? ((-(((/* implicit */int) (unsigned short)65535)))) : ((~(((/* implicit */int) (short)32767))))));
                            arr_9 [i_3] [i_1] [i_1] [(unsigned char)9] = ((/* implicit */unsigned char) min((7941069294002932201ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [(short)14] [i_2] [i_3]))))))))));
                            arr_10 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_18 = ((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(620384125U))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_4 = 1; i_4 < 15; i_4 += 3) 
    {
        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 3) 
            {
                {
                    var_20 |= var_5;
                    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5282)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35))) == (4058525806972851319ULL))))))) / (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2460886951U))))))));
                }
            } 
        } 
    } 
}
