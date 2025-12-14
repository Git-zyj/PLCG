/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26588
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
    var_12 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_3] [i_4]);
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_3))));
                            }
                        } 
                    } 
                } 
                arr_15 [12ULL] [i_1] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [(signed char)8])) == (((/* implicit */int) (signed char)127))))), (arr_8 [i_0] [i_0] [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            {
                var_15 = (_Bool)1;
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        {
                            var_16 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5])) | (((/* implicit */int) arr_9 [i_6]))))), (((long long int) arr_24 [i_8] [i_7] [i_6] [i_5] [i_6] [i_5]))))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_9)), (var_3)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) ^ (arr_13 [i_8] [i_8] [i_6] [i_6] [i_5]))) : (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */int) arr_18 [i_7])))))))) ? (((((/* implicit */_Bool) arr_2 [i_5] [i_6])) ? (-2689258456819522124LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_8]))))) : (((/* implicit */long long int) 3))));
                            arr_26 [i_5] [i_6] [i_7] = ((short) arr_6 [i_8] [i_6] [i_5]);
                            var_18 -= ((/* implicit */unsigned int) min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) arr_21 [i_5] [i_6] [i_5])) ? (var_4) : (min((arr_24 [i_8] [i_7] [i_7] [i_7] [i_5] [i_5]), (-1)))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 136836448)) ? (2689258456819522124LL) : (((/* implicit */long long int) 2644549771U))))) ? (((((/* implicit */_Bool) min((-5768477893355867852LL), (((/* implicit */long long int) (unsigned char)121))))) ? (((((/* implicit */_Bool) arr_6 [i_8] [i_6] [i_5])) ? (((/* implicit */int) var_2)) : (arr_25 [i_5] [i_7] [i_7] [i_8] [i_7]))) : (arr_1 [i_5]))) : (max((((/* implicit */int) (signed char)-53)), (min((136836448), (((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
                var_20 += ((/* implicit */int) max((min((4503565267632128LL), (((/* implicit */long long int) ((_Bool) (_Bool)0))))), (((/* implicit */long long int) min((((var_8) ? (((/* implicit */int) (signed char)-10)) : (var_0))), (((/* implicit */int) var_8)))))));
            }
        } 
    } 
}
