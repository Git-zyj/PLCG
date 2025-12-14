/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199210
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((((/* implicit */int) var_13)) | (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_4)) ? (2143036215) : (((/* implicit */int) arr_3 [3]))))))));
                var_20 *= ((signed char) ((unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)51)), (4063700027U))));
                arr_6 [i_1] [i_0] = ((/* implicit */signed char) (short)17776);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 21; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            arr_19 [i_2] [8LL] [i_3] [i_2] [i_5] = ((/* implicit */unsigned long long int) (((((+((~(((/* implicit */int) var_5)))))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 937075676)))))));
                            arr_20 [i_2] [i_2] [(signed char)18] [19] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_4] [i_5])) ? (((/* implicit */int) (signed char)107)) : (((((/* implicit */_Bool) ((int) 937075676))) ? (((((var_6) + (2147483647))) >> (((277530322) - (277530319))))) : ((~(996509806)))))));
                            arr_21 [i_2] [i_2] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(var_17))), (((/* implicit */unsigned long long int) arr_16 [i_5] [i_4] [17ULL] [i_2]))))) ? (((/* implicit */int) arr_7 [i_5])) : (((((/* implicit */_Bool) -1203610193)) ? (277530322) : (((/* implicit */int) (unsigned char)255))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+((+(((/* implicit */int) arr_15 [8U])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (_Bool)1)))))) * (((var_11) | (((int) (unsigned char)0))))));
}
