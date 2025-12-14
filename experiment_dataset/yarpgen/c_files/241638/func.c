/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241638
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = max((((long long int) ((short) 7410895175178189675LL))), (((/* implicit */long long int) ((signed char) max((-4079505985862550558LL), (-4079505985862550558LL))))));
        var_20 = ((/* implicit */short) ((int) ((_Bool) ((_Bool) var_8))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned short) ((unsigned long long int) ((_Bool) arr_2 [i_0])))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) max((((short) ((signed char) (unsigned short)21440))), (((short) max((((/* implicit */unsigned int) arr_3 [i_3])), (arr_9 [i_3] [i_2] [i_2] [i_0]))))));
                        var_23 = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned int) ((_Bool) arr_3 [i_0])))), (max((max((-9223372036854775805LL), (((/* implicit */long long int) 3851030374U)))), (((/* implicit */long long int) ((((/* implicit */int) (short)-11109)) <= (((/* implicit */int) (short)26025)))))))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) ((3U) - (3U))))), (((unsigned long long int) ((long long int) (short)6226))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) 4294967295U))) >= (((/* implicit */int) ((short) arr_12 [i_0]))))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27138))) | (11081287245467885102ULL)))));
                            var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((_Bool) arr_0 [i_0]))) ^ (((int) var_17)))) + (((int) max((var_4), (((/* implicit */unsigned int) var_1)))))));
                            arr_13 [i_4] [2LL] [i_2] [i_2] [i_4] = ((/* implicit */int) ((short) ((((/* implicit */int) ((unsigned short) 443936922U))) >> (((/* implicit */int) ((1554388532) < (-1554388549)))))));
                        }
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((unsigned int) ((int) ((_Bool) arr_10 [i_0] [i_1] [i_0])))))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 5LL)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (4613574844467176669ULL)))));
}
