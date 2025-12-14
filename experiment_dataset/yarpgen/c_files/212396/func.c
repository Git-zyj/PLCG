/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212396
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
    var_10 = 16727190468163597823ULL;
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -926783035)) ? (((/* implicit */int) ((135230483) == (135230473)))) : (var_2)))) ? ((+(((var_7) | (((/* implicit */int) var_0)))))) : (-1905100731));
    var_12 = ((/* implicit */short) min((((/* implicit */int) ((min((135230483), (var_7))) > (((/* implicit */int) var_1))))), (((((/* implicit */int) (signed char)-27)) ^ (var_2)))));
    var_13 = ((/* implicit */int) max(((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 809140939U)) : (-1072205306069263152LL))))), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_8))))), ((((_Bool)1) ? (((/* implicit */int) var_0)) : (-135230469))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3138570107U)) ? (arr_1 [i_0]) : (3972350503U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3131218063U)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1]) : (((/* implicit */int) (short)-27720))))) ? (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (arr_5 [i_0] [i_0]))) : (((/* implicit */unsigned int) arr_2 [i_1]))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_0])), ((~(((/* implicit */int) (short)-3187))))))) || (((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])), (14187280857995056087ULL))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (((((!(((/* implicit */_Bool) (signed char)100)))) && ((!(((/* implicit */_Bool) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1])))) : (((((/* implicit */_Bool) 6258493092743522769LL)) ? (((/* implicit */unsigned int) max((arr_2 [i_0]), (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 3131218063U)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))))))))))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (_Bool)1))));
                    var_16 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2])))))) - (min((min((((/* implicit */unsigned long long int) var_6)), (var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) (unsigned char)112)))))))));
                }
                var_17 = ((/* implicit */long long int) arr_2 [i_0]);
            }
        } 
    } 
}
