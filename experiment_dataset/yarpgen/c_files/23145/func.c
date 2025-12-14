/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23145
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 6337936693199188541ULL))));
    var_18 += ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [18ULL] [4U] |= ((/* implicit */long long int) ((unsigned int) ((unsigned short) arr_0 [i_0 + 1])));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [12]))))))))))));
                var_20 -= ((/* implicit */unsigned long long int) var_6);
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((long long int) max((((/* implicit */unsigned long long int) var_2)), (6337936693199188543ULL)))), (((/* implicit */long long int) arr_5 [16U])))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0 + 3] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)65518);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_6 [i_0]), (arr_6 [i_0])))) / (((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) arr_6 [i_0]))))));
                            arr_13 [i_0 + 4] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6))) ^ (6337936693199188518ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((unsigned char) var_9));
}
