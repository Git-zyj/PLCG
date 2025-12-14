/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27065
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
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) arr_3 [i_1] [i_0]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_21 -= ((/* implicit */unsigned int) arr_3 [17U] [(unsigned short)6]);
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_1 + 1] [i_0 + 3]))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) -1431513680);
    var_23 = ((/* implicit */unsigned short) ((4294967292U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            {
                arr_15 [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned short) (+(1051520406U))));
                arr_16 [i_4] [i_4] = ((/* implicit */int) max(((+(727323395U))), (((/* implicit */unsigned int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16915)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))));
                    var_25 *= ((/* implicit */unsigned int) arr_17 [i_3] [i_4] [i_5]);
                }
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    for (unsigned char i_7 = 3; i_7 < 20; i_7 += 2) 
                    {
                        {
                            var_26 -= ((/* implicit */unsigned char) ((7308788475554112977ULL) == (((/* implicit */unsigned long long int) -308919322))));
                            var_27 = ((/* implicit */unsigned char) ((unsigned long long int) ((((-1431513675) + (2147483647))) >> (((2511200326U) - (2511200301U))))));
                        }
                    } 
                } 
                arr_24 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */short) (!((_Bool)1)))), ((short)-12744))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)21476))) == (0U)));
}
