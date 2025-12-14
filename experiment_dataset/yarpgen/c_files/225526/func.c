/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225526
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])))) <= (max((arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]), (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-104)) > ((-(((/* implicit */int) ((var_10) != (((/* implicit */int) (signed char)0)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) min((((/* implicit */int) (short)-17684)), (max(((+(((/* implicit */int) (unsigned char)0)))), ((+(((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((3500141297U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            arr_19 [i_4] [i_4] [i_4] [13] |= ((/* implicit */short) ((unsigned int) (short)-19456));
                            var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)188))) & (2428054688716375088LL)));
                            arr_20 [i_6] [(unsigned char)8] [i_4] [14U] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (signed char)31))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (int i_8 = 3; i_8 < 13; i_8 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) (-(arr_22 [i_3] [i_3] [i_3] [i_3])));
                            var_20 = ((/* implicit */short) min((max((min((((/* implicit */int) var_2)), (1331751330))), (((((/* implicit */int) (unsigned char)79)) + (var_10))))), ((+(min((((/* implicit */int) (signed char)11)), (0)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
