/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229030
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = (-(var_7));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_19 ^= ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) var_18)))))));
                                var_20 ^= ((unsigned int) var_8);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_18 [i_1] [i_5]))))) << (((/* implicit */int) arr_1 [i_0] [i_0])))) - (((/* implicit */int) ((unsigned short) min((arr_20 [i_6] [i_1] [(_Bool)1] [i_6] [i_5]), (((/* implicit */unsigned int) (short)31221))))))));
                            var_22 = ((unsigned int) min((((/* implicit */unsigned int) (short)31221)), (((var_7) >> (((/* implicit */int) arr_4 [i_1] [i_0] [i_1]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) max((var_23), ((+((-((+(var_15)))))))));
                arr_23 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_8);
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) && (((((/* implicit */_Bool) (unsigned short)55093)) && (((/* implicit */_Bool) 4128768U))))));
    var_25 = ((/* implicit */unsigned int) (unsigned short)55106);
}
