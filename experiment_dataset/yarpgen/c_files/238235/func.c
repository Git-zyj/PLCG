/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238235
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
    var_15 = ((/* implicit */_Bool) (-(((((var_3) + (2147483647))) >> ((((~(((/* implicit */int) var_6)))) + (2211)))))));
    var_16 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10))))));
    var_17 = ((/* implicit */short) var_1);
    var_18 = ((/* implicit */short) ((7759745491428689927LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_9 [(short)3] [(signed char)5] [i_2] [i_2] = ((/* implicit */int) max((max((max((arr_5 [i_0] [i_1] [i_3]), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) arr_6 [i_1] [13ULL] [i_3])))), (((/* implicit */unsigned int) var_8))));
                            arr_10 [(unsigned short)19] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))) != (16584424661084824194ULL)));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((-6207357079008701602LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41513))))))));
                            var_21 = ((/* implicit */short) (((+(((/* implicit */int) arr_0 [i_3 + 1])))) / ((~(((/* implicit */int) ((arr_4 [i_3] [i_0]) > (var_1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
