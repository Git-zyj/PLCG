/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215467
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? ((~(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))))))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4))) : (var_9)))) / (6224217795644500313ULL)));
                        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) var_4))) > (((/* implicit */int) var_3)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (unsigned short)61888)) : (((/* implicit */int) (unsigned char)127)))))) : (((/* implicit */int) ((unsigned short) 507835870U)))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 2) 
                        {
                            {
                                arr_16 [i_5] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (1633721640678950909ULL))) || (((/* implicit */_Bool) ((unsigned char) max((2286108279U), (((/* implicit */unsigned int) (short)-15))))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */signed char) var_1)), ((signed char)-29)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */unsigned int) var_1);
}
