/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50903
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
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) max(((short)-5479), (((/* implicit */short) var_12)))))))) | (var_7)));
    var_18 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) max(((+(arr_4 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((1697072859818637243ULL) != (((/* implicit */unsigned long long int) (-(var_10)))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1876802191U))), (min((arr_4 [i_2] [i_0] [i_2]), (((/* implicit */unsigned int) arr_3 [i_2] [i_0 + 1]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0]))) : (1592521273459151122ULL)));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)120)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 |= ((/* implicit */unsigned short) ((int) ((17306871516463877288ULL) << (((var_10) - (1113145732463165079LL))))));
                        arr_15 [i_0] = ((/* implicit */unsigned short) 2418530001521852712ULL);
                        arr_16 [i_1] [i_0] = ((/* implicit */unsigned int) ((var_15) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        var_23 = 34355544064LL;
                        arr_19 [i_0 + 1] [i_1] [2ULL] [2ULL] |= arr_17 [4U] [i_0 + 2] [i_2];
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
    {
        for (long long int i_7 = 2; i_7 < 14; i_7 += 1) 
        {
            {
                arr_26 [i_7 + 1] = ((/* implicit */unsigned short) (-(max((var_10), (((/* implicit */long long int) arr_18 [i_7] [(short)0] [i_7 + 1] [i_7 - 2]))))));
                arr_27 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_24 [i_6] [i_7] [i_7]), (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)25629)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_15)));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (var_13)));
}
