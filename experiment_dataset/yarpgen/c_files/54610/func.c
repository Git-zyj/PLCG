/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54610
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) var_16);
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (~(((var_17) << (((((/* implicit */int) (unsigned short)54127)) - (54124))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            {
                var_20 = ((/* implicit */int) ((min((((((/* implicit */int) (unsigned short)11394)) & (-553848254))), (((/* implicit */int) max(((unsigned short)8191), ((unsigned short)11399)))))) != ((~(((/* implicit */int) arr_1 [i_2]))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-71))))), (min((((/* implicit */unsigned long long int) (signed char)-1)), (var_13))))))));
                var_22 = ((/* implicit */unsigned short) arr_3 [i_2]);
                arr_9 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)0)), ((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
