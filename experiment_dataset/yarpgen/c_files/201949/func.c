/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201949
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
    var_10 = ((/* implicit */short) ((((-712023841) + (2147483647))) >> (((var_3) - (11597269423611841979ULL)))));
    var_11 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((min((var_1), (((/* implicit */unsigned int) var_8)))) >> (((((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31141))) : (var_6))) - (4294936141U)))))), ((-(((((/* implicit */_Bool) var_5)) ? (3187724456790889090LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) (+(-3187724456790889087LL)))))))));
                var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) (_Bool)1))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? ((-(15))) : ((+((+(((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (~(max((((/* implicit */long long int) (+(((/* implicit */int) var_8))))), (min((((/* implicit */long long int) 3012907523U)), (7257323413548982758LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */int) var_8);
}
