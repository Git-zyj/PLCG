/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202287
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) min((min((((/* implicit */long long int) (unsigned short)6869)), (8093207090296921874LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
                    var_17 = ((/* implicit */signed char) (short)28033);
                    var_18 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [8] [8] [i_2 - 1])))) ? (min((arr_3 [i_1] [i_2 + 2]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2068)) ? (-111421919505255746LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42227)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (7068200412838020633ULL)))) ? (arr_15 [i_5] [i_3]) : (((arr_15 [i_3] [i_3]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_10 [i_3]))))))))));
                    var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) 2822551717437014233LL))) - (max((var_3), (1093084836)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 2; i_6 < 12; i_6 += 1) 
                    {
                        var_21 -= ((/* implicit */signed char) ((2247574166774019105ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15859)))));
                        var_22 -= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-25)) + (((/* implicit */int) (unsigned char)57))));
                    }
                    arr_21 [i_3] [i_3] [i_5] = (_Bool)0;
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -7583065642847057665LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))) : (3133742188385808352LL)))) ? ((~(var_11))) : (((((/* implicit */int) (unsigned char)195)) << (((1214493250) - (1214493246))))))), (((/* implicit */int) min(((unsigned short)53521), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)20548))))))))));
}
