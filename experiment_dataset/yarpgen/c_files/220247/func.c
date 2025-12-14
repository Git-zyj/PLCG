/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220247
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
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = (+(((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (217536441948884642LL)))) ? (var_9) : (((/* implicit */long long int) ((2147483647) ^ (((/* implicit */int) (unsigned short)32474))))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((2147483647) - (((/* implicit */int) (signed char)105)))), ((~(((/* implicit */int) (unsigned char)13))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            {
                var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((+(11970279998524929273ULL))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_5))))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    for (long long int i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */short) max((min(((+(((/* implicit */int) var_4)))), ((+(((/* implicit */int) (unsigned short)33067)))))), (((/* implicit */int) (unsigned short)32456))));
                            arr_16 [i_2] [i_3] [i_2] [i_2] [i_4] [i_2] |= ((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)14659)))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) -4355466197380160787LL)))))))));
                            arr_17 [i_4] [i_4] = (~(((((/* implicit */unsigned int) -754373102)) + (max((((/* implicit */unsigned int) var_2)), (0U))))));
                        }
                    } 
                } 
                arr_18 [i_2] = ((/* implicit */short) var_8);
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    arr_21 [i_6] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_7))));
                    var_15 = ((/* implicit */long long int) ((754373101) ^ (((/* implicit */int) (unsigned short)0))));
                }
            }
        } 
    } 
}
