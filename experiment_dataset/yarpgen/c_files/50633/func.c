/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50633
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
    var_12 = min((((/* implicit */long long int) var_5)), (var_9));
    var_13 = ((/* implicit */long long int) (+(-1832258592)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) -1832258592);
                                var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (short)21604)), (((unsigned int) arr_5 [i_0] [10] [10] [i_1 - 4]))));
                                arr_13 [(signed char)4] [i_0] [i_2] [i_0] [(unsigned char)10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((unsigned int) var_3)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_4))));
                            var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) min(((~(-1832258590))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */int) min((arr_1 [i_1 + 1]), (((short) arr_12 [(unsigned short)0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)29)))))));
                            var_18 |= ((/* implicit */long long int) -1832258590);
                            /* LoopSeq 1 */
                            for (int i_7 = 2; i_7 < 13; i_7 += 3) 
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (unsigned short)52090))));
                                var_20 = ((/* implicit */short) (unsigned short)38347);
                            }
                            arr_21 [i_6] [i_6] [i_0] [i_6] = ((/* implicit */short) ((unsigned int) (_Bool)0));
                        }
                    } 
                } 
            }
        } 
    } 
}
