/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33848
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */int) (signed char)127);
                    var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) << (((((/* implicit */int) var_4)) - (8874)))))))))));
                    var_13 -= ((/* implicit */signed char) ((max((((var_0) - (((/* implicit */unsigned long long int) 4294967287U)))), (((/* implicit */unsigned long long int) min(((unsigned short)4133), (((/* implicit */unsigned short) (signed char)118))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        for (short i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            {
                arr_14 [(short)4] [i_4 + 1] [(short)16] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_4] [i_4 + 1] [i_4 + 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))) >= (((((/* implicit */int) ((unsigned char) (signed char)-118))) & (max((((/* implicit */int) (signed char)113)), (1392308770)))))));
                var_15 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)188))))) % (12258856986577354291ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)8005), (((short) arr_10 [13U]))))))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min(((((-2147483647 - 1)) + (((/* implicit */int) arr_12 [i_4] [i_4 + 2] [i_4 + 1])))), (((-1035807516) + (1847567336))))))));
                arr_15 [i_4] = ((/* implicit */_Bool) var_7);
            }
        } 
    } 
}
