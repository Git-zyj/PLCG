/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223761
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
    var_15 = var_2;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */_Bool) max(((+(4294901760ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)225)), ((short)9357))))))) ? (((unsigned long long int) ((long long int) arr_2 [i_0]))) : (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-22509)), (var_10)))) - (13968810187282840741ULL))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [(short)18] [(short)18] [i_1 + 2] [i_3 - 2] [i_3]))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_3 + 1] [i_3 + 1])) ? (max((((/* implicit */unsigned int) (unsigned short)11)), (arr_7 [i_3] [i_1 - 2] [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) 9007794744410657434ULL)))))))))));
                            var_18 = ((/* implicit */short) ((arr_1 [i_0] [(short)12]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned long long int) var_1))))))));
                            var_19 -= min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_3] [i_1 - 1] [i_2] [i_3 - 3] [16])) ^ (((((/* implicit */int) (unsigned char)31)) ^ (((/* implicit */int) (short)-30588))))))), (7046967932521557221ULL));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24621)) / (((((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1])) | (((/* implicit */int) arr_0 [i_0]))))));
                            var_21 = max((((((/* implicit */_Bool) var_9)) ? ((+(10832343974664291611ULL))) : (((/* implicit */unsigned long long int) (-(-6046256936190037537LL)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_3 - 3] [i_0] [i_1 + 2] [22ULL] [i_2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (short i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) arr_11 [i_5 - 1] [i_4]);
                var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (9007794744410657451ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 + 1]))))))), (min((((/* implicit */unsigned long long int) var_9)), (max((arr_15 [i_4] [i_4] [i_5]), (((/* implicit */unsigned long long int) var_13))))))));
                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(short)1] [i_5 + 1]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_5 - 1]))) + (15ULL)))));
                var_25 = (+(9007794744410657459ULL));
            }
        } 
    } 
}
