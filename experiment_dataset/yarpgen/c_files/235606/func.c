/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235606
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = (-(((((/* implicit */int) ((unsigned short) (unsigned short)342))) >> (((3898495737247677066ULL) - (3898495737247677054ULL))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((3641435766U) >> (((max((min((3482051456250613893ULL), (((/* implicit */unsigned long long int) -2117467325)))), (((/* implicit */unsigned long long int) -857240866)))) - (18446744072852310722ULL)))));
                            var_18 = ((/* implicit */short) (((-(14427497939714867032ULL))) >> (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]) - (9553188124596761841ULL)))));
                            arr_11 [(_Bool)1] [(_Bool)1] [i_2] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54219))) & (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)102))))) + (((arr_0 [i_0]) ^ (arr_5 [i_2] [(_Bool)1]))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? ((~(arr_10 [(signed char)3] [i_0] [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))))))) ? (((((/* implicit */_Bool) 9962124904404354494ULL)) ? (((unsigned int) 5925001131216174579ULL)) : (((/* implicit */unsigned int) -481474190)))) : (((unsigned int) 653531530U))));
                arr_12 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))) & ((-(var_0)))))) ? (((/* implicit */int) (unsigned char)70)) : ((~((~(((/* implicit */int) (unsigned char)72))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((int) var_12));
    var_21 = ((/* implicit */_Bool) var_7);
    var_22 = ((var_11) == (((/* implicit */unsigned long long int) var_3)));
}
