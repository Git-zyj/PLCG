/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216770
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (signed char)-29)))))) ? (((/* implicit */unsigned long long int) (+(-2072451364)))) : (arr_0 [(unsigned char)14])));
        var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */int) (!(((/* implicit */_Bool) -2072451375))))) != (var_5)))));
    }
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (~(((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (3876180400U))) ? (((/* implicit */unsigned int) var_9)) : ((+(2173133338U))))))))));
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((((long long int) var_4)) | (((/* implicit */long long int) ((/* implicit */int) var_14))))) | (((/* implicit */long long int) ((max((((/* implicit */int) arr_6 [i_1] [i_2] [i_1])), (var_5))) ^ (((/* implicit */int) var_13)))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((max((((var_0) - (-2072451372))), (min((((/* implicit */int) (signed char)-1)), (var_9))))), (-2072451382))))));
                var_21 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (418786904U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_2])), (arr_2 [i_1])))) == (max((((/* implicit */unsigned int) var_9)), (min((((/* implicit */unsigned int) var_1)), (2041717955U))))))))));
            }
        } 
    } 
}
