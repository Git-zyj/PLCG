/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204060
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_20 = (short)16657;
                            arr_10 [i_3] [14U] [i_2] [i_3] [(short)24] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2089204934269606463ULL)))) / (arr_9 [i_0] [i_1] [i_0] [16U] [i_2])));
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-967))));
                            arr_11 [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) 0ULL));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) ((unsigned int) arr_8 [10ULL] [i_1] [i_1] [i_1]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 13; i_4 += 1) 
    {
        for (signed char i_5 = 2; i_5 < 11; i_5 += 4) 
        {
            {
                var_23 |= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_16))))) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) var_3)))), (max((((/* implicit */int) var_2)), ((-(arr_16 [(unsigned short)0])))))));
                var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))) && (((/* implicit */_Bool) var_10))));
                var_25 = ((/* implicit */short) (((-((+(12144001691964583367ULL))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-72)))))));
                var_26 = ((/* implicit */unsigned int) arr_1 [(unsigned short)1]);
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((unsigned int) max(((short)26915), (((/* implicit */short) (signed char)-125)))));
}
