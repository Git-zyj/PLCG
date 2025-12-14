/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246477
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
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 |= ((/* implicit */unsigned char) 3256962223136474235ULL);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0 - 3] [i_1] [i_2] [i_0 - 3] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60824))) >= (15189781850573077381ULL))) ? (((/* implicit */int) arr_8 [i_0])) : (((((/* implicit */int) (unsigned short)29124)) % (((/* implicit */int) arr_7 [i_2] [i_2])))))) != (max((((/* implicit */int) arr_8 [i_0])), (((((/* implicit */_Bool) arr_10 [i_0] [i_3])) ? (((/* implicit */int) arr_9 [i_0 - 3] [i_1] [i_2] [i_0 - 3] [i_3])) : (((/* implicit */int) var_6))))))));
                            arr_14 [i_0] [i_1] = ((/* implicit */short) ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 3]) & (arr_12 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 3]))) ^ (((((/* implicit */unsigned long long int) arr_2 [i_0])) & (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])))));
                            arr_15 [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_0] [i_0]);
                            var_20 = ((/* implicit */_Bool) 15189781850573077380ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        {
                            arr_20 [(unsigned char)12] [i_1] [i_4] [i_0] [i_5] = ((/* implicit */short) max((15189781850573077381ULL), (((/* implicit */unsigned long long int) (signed char)-55))));
                            var_21 = ((/* implicit */_Bool) 15189781850573077381ULL);
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (unsigned short)36411))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = var_13;
    var_24 = var_8;
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            {
                arr_27 [i_6] = ((/* implicit */signed char) min((((2338743954793156621ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7] [i_7]))))), (((/* implicit */unsigned long long int) arr_25 [i_6] [i_7]))));
                arr_28 [i_6] |= ((/* implicit */short) arr_21 [i_6]);
                arr_29 [(signed char)12] [i_7] = ((/* implicit */_Bool) ((unsigned short) -2565051805836920151LL));
            }
        } 
    } 
}
