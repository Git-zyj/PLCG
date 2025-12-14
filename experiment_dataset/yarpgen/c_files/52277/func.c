/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52277
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
    var_20 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_19), (((/* implicit */long long int) var_10))))) && (((/* implicit */_Bool) var_17))))) == (((/* implicit */int) var_9))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) var_18))))));
    var_22 = ((((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned char)134), (((/* implicit */unsigned char) (signed char)-92))))), ((+(((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) var_6))))) ? (((var_19) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (max((var_13), (((((/* implicit */_Bool) 13629022778444864897ULL)) ? (var_11) : (15757104255174496009ULL))))));
    var_23 = max((8711939174174029414ULL), (((/* implicit */unsigned long long int) (unsigned char)219)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_24 = ((/* implicit */signed char) (unsigned short)26076);
                arr_6 [i_0 + 1] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 3])) - (((/* implicit */int) var_5))))), (max((var_11), (((/* implicit */unsigned long long int) arr_0 [i_0 - 4])))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)-100)), (min((((/* implicit */short) arr_0 [i_3])), (var_5))))))));
                            var_26 -= ((/* implicit */signed char) 5393328116160204178ULL);
                        }
                    } 
                } 
                var_27 *= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0])) == (((/* implicit */int) (signed char)39)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))) != (var_13))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_0 - 2] [i_0 - 4] [i_0 - 4])))) : (min((((/* implicit */unsigned long long int) (signed char)-100)), (arr_15 [i_0 + 1] [i_4] [i_5] [i_5] [i_5])))));
                            var_29 = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 91419298U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)146))))), (1467487322U))));
                            var_30 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned short) arr_15 [i_4] [i_1] [i_0 - 4] [i_0 + 2] [i_0 + 2]))), (min((5393328116160204178ULL), (((/* implicit */unsigned long long int) arr_3 [i_0 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
