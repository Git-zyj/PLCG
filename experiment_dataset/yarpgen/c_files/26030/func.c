/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26030
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
    var_16 = ((/* implicit */unsigned long long int) max((-703808460), (((/* implicit */int) (short)-20910))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(var_7))), (((var_9) ? (arr_0 [i_1 + 1]) : (arr_0 [i_0 + 1])))))) ? (((((_Bool) (_Bool)1)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_0])) : (var_7))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_17 = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((16777200) + (var_10)))) / (arr_8 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1])));
                            arr_9 [i_0] [6U] [i_2] [i_0] [i_0] = 1641947319U;
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) (_Bool)1))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (4054141186U)))))) % (((arr_2 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-39)))) : (min((0ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
                var_19 = ((/* implicit */long long int) 0ULL);
                var_20 = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)-75)) | (((/* implicit */int) max(((unsigned char)26), ((unsigned char)123))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (short i_5 = 3; i_5 < 21; i_5 += 2) 
        {
            {
                arr_16 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_11 [i_5 + 2]))) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)65)))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)120))))) >= (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1025941082)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 + 2] [i_4])))))));
            }
        } 
    } 
    var_22 |= var_7;
    var_23 = ((/* implicit */unsigned int) ((signed char) (unsigned char)228));
}
