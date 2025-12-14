/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204078
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
    var_13 = ((/* implicit */short) 4006404362371708054LL);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((signed char) (+(((((/* implicit */_Bool) 4006404362371708072LL)) ? (3887788433216271421LL) : (4006404362371708073LL))))));
                                arr_13 [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */long long int) ((short) arr_6 [7LL] [18] [i_2] [i_2]));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */int) ((signed char) max((var_6), (((/* implicit */unsigned int) ((unsigned char) (signed char)21))))));
                var_16 = ((/* implicit */unsigned char) 4006404362371708061LL);
                var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) -1239272831)), (-4006404362371708048LL)));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min(((unsigned char)189), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_17 [i_6])))))))), (((unsigned int) (+(1146823264U))))));
                            var_19 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((signed char) arr_11 [(signed char)3] [(short)8] [i_1] [i_5] [i_5] [i_6] [i_6]))) ? (((/* implicit */long long int) 268435328)) : (((long long int) (unsigned short)36273)))));
                            arr_19 [i_1] [i_5] [i_1] [i_1] = ((/* implicit */_Bool) arr_18 [i_0 + 1] [(signed char)8] [i_1] [(signed char)8] [i_5] [i_6]);
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned int) -321396252)), (((unsigned int) 28LL)))))));
                            /* LoopSeq 1 */
                            for (signed char i_7 = 1; i_7 < 17; i_7 += 3) 
                            {
                                var_21 += ((/* implicit */unsigned char) ((unsigned int) (signed char)-106));
                                arr_23 [i_1] = ((/* implicit */long long int) (signed char)-33);
                                var_22 = ((/* implicit */long long int) min((var_22), (min((((((_Bool) -4006404362371708067LL)) ? (8460474601235829489LL) : ((+(-4006404362371708061LL))))), (((/* implicit */long long int) max((max((var_10), ((unsigned char)118))), (((/* implicit */unsigned char) ((_Bool) 4006404362371708094LL))))))))));
                                var_23 ^= ((/* implicit */int) ((unsigned short) ((short) (unsigned char)30)));
                                var_24 = ((/* implicit */unsigned short) (-(-268435304)));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
