/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190814
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_6 [i_2 + 1] [i_0] [i_0] [i_0] = ((/* implicit */int) min((min((arr_0 [i_2 - 1]), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_2 - 1] [i_2])))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
                    arr_7 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)101)) == (((/* implicit */int) arr_2 [i_0] [i_2 - 1]))))) & (((/* implicit */int) (short)30417))))) : (((((/* implicit */_Bool) max((3327810411345272525LL), (((/* implicit */long long int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_1] [i_1])))) : (((((/* implicit */_Bool) -3327810411345272525LL)) ? (((/* implicit */unsigned long long int) -958431658)) : (var_1)))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) -3327810411345272513LL);
                    var_13 = ((unsigned int) (-(((unsigned long long int) 8291686784202881122ULL))));
                    arr_9 [i_0] [i_0] [i_2 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 2] [i_0]))) - (-3327810411345272531LL)))) ? (min((((/* implicit */int) (short)(-32767 - 1))), (958431657))) : (((/* implicit */int) ((unsigned short) arr_1 [i_2 - 2] [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_14 = var_8;
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))), (var_11))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            {
                arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) 11600763912988663986ULL);
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_16 = ((/* implicit */signed char) min((((1366508229U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (arr_11 [i_5]) : (arr_17 [i_3] [i_4] [i_3]))))));
                    arr_20 [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4])) || (((/* implicit */_Bool) arr_12 [i_4])))))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (((arr_15 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) || (((/* implicit */_Bool) min((min((13058319308026177437ULL), (((/* implicit */unsigned long long int) arr_3 [i_4] [i_4])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) var_12)) : (2010377242)))))))));
                }
                /* vectorizable */
                for (unsigned char i_6 = 3; i_6 < 10; i_6 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) ((_Bool) arr_10 [i_3] [i_4]));
                    arr_25 [i_3] [i_4] [i_3] = ((((/* implicit */_Bool) var_12)) ? (((unsigned long long int) arr_14 [i_3])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_3] [i_4])) || (((/* implicit */_Bool) var_1)))))));
                }
                arr_26 [i_3] [i_4] = ((/* implicit */short) ((max((((unsigned long long int) (unsigned char)9)), (((/* implicit */unsigned long long int) (_Bool)0)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3])))));
            }
        } 
    } 
}
