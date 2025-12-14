/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219733
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-123)) + ((+((-(var_11)))))));
                            var_13 ^= ((/* implicit */signed char) arr_0 [i_0]);
                            var_14 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                            var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_3 - 1])))) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) (short)31))))))) : (arr_3 [i_0] [i_1])));
                        }
                    } 
                } 
                var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_11) : (((/* implicit */int) arr_1 [i_1]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(2188329477U)))), (var_2))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (var_0) : (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_19 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((signed char) (unsigned short)18))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                arr_16 [i_4 - 1] [i_4] [i_5] = arr_11 [i_4] [i_5];
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            {
                                var_21 = min((((/* implicit */unsigned long long int) ((_Bool) arr_13 [i_4 - 1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4 - 1] [i_4] [i_6] [(unsigned short)14] [i_6 + 1] [i_4]))) / (17987178341235928350ULL))));
                                var_22 *= ((/* implicit */int) (unsigned short)19);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
