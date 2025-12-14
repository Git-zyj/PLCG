/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41312
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
    var_12 = ((/* implicit */int) min((((long long int) ((((/* implicit */_Bool) var_6)) ? (-1129455989470697681LL) : (var_9)))), (((/* implicit */long long int) ((var_5) >= (((/* implicit */long long int) max((var_4), (var_11)))))))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (min((var_11), (((/* implicit */int) (unsigned char)0))))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) -168396074)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ^ (((((/* implicit */_Bool) (short)19611)) ? (((/* implicit */long long int) -168396044)) : (-2191704324060544508LL))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0] [i_3 - 1])) ? (((/* implicit */int) arr_1 [i_4] [i_3 - 2])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_3 - 2])))), (((((/* implicit */int) arr_1 [i_0] [i_3 - 2])) >> (((/* implicit */int) arr_1 [i_0 - 4] [i_3 + 2])))))))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_3))));
                                arr_12 [i_2] [i_2 + 1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) -3914847366738266632LL);
                                arr_13 [i_4 + 1] [i_3] [i_1] [i_1 + 2] [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) min((var_6), (arr_1 [(signed char)8] [i_1])))), (1616488625))), (((/* implicit */int) ((((((/* implicit */_Bool) -3914847366738266632LL)) ? (((/* implicit */unsigned long long int) -2191704324060544512LL)) : (14252302230418479479ULL))) <= (((/* implicit */unsigned long long int) (~(var_7)))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 + 2] [i_0]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) min((min((((((/* implicit */_Bool) -3914847366738266632LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18774))) : (var_9))), (((/* implicit */long long int) var_6)))), (((((/* implicit */_Bool) var_2)) ? (-2191704324060544521LL) : (((/* implicit */long long int) (~(168396074))))))));
}
