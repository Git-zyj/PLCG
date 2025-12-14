/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232974
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51328)))))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)51345)))) <= (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (unsigned char)196)))))))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (+(max((((/* implicit */unsigned int) arr_0 [i_0])), (511U))))))));
    }
    var_16 &= ((/* implicit */int) 537U);
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) var_0);
                            var_18 = ((/* implicit */_Bool) max((arr_10 [i_1] [i_2] [22LL] [i_1]), (((/* implicit */long long int) (~(var_12))))));
                            arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) arr_11 [i_1] [i_4 - 1] [i_4] [i_4] [i_1]))))) > ((((-(-191826619466109230LL))) >> (((((var_7) << (((/* implicit */int) arr_3 [i_1])))) - (5062678475233557397LL)))))))) : (((/* implicit */int) ((((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) arr_11 [i_1] [i_4 - 1] [i_4] [i_4] [i_1]))))) > ((((-(-191826619466109230LL))) >> (((((var_7) << (((((/* implicit */int) arr_3 [i_1])) - (1))))) - (5062678475233557397LL))))))));
                            arr_14 [i_1] [(unsigned short)9] [i_3] [i_4 - 1] = ((/* implicit */int) var_11);
                            var_19 &= ((((/* implicit */_Bool) ((arr_10 [i_1] [i_4 - 1] [14ULL] [i_4 - 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_4 - 1] [i_4 - 1] [i_4] [i_1])))))) ? (max((((/* implicit */long long int) arr_11 [20ULL] [i_4 - 1] [i_3] [i_4 - 1] [14LL])), (arr_10 [i_1] [i_4 - 1] [(unsigned short)0] [i_4 - 1]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_1] [i_4 - 1] [i_4 - 1] [i_2] [i_2]))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+((+(((/* implicit */int) var_8)))))))));
            }
        } 
    } 
}
