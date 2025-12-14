/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221390
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_10 = ((-292379379883392174LL) + (((/* implicit */long long int) arr_3 [i_0])));
                    arr_10 [7ULL] [7ULL] [7ULL] [i_1] = ((/* implicit */signed char) ((292379379883392172LL) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_2] [i_2])))));
                    var_11 = ((/* implicit */unsigned long long int) (unsigned char)242);
                }
            } 
        } 
        arr_11 [(short)14] [i_0] = ((/* implicit */_Bool) ((long long int) var_1));
        arr_12 [7ULL] [i_0] = ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
    }
    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 292379379883392172LL)), (((((/* implicit */_Bool) (unsigned char)144)) ? (min((((/* implicit */unsigned long long int) -9050385359967061920LL)), (var_9))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)42862)), (292379379883392172LL))))))));
    var_13 -= ((/* implicit */unsigned char) min((var_6), ((~(((/* implicit */int) max(((short)11381), (((/* implicit */short) var_5)))))))));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
        {
            {
                arr_18 [(short)13] = ((((/* implicit */_Bool) 2491717037175067434ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 292379379883392150LL)) ? (-8634889691905686268LL) : (7303557204833655033LL))));
                arr_19 [1] [(unsigned short)0] [(unsigned short)4] &= ((/* implicit */unsigned int) var_9);
                arr_20 [i_3] [i_3] = ((/* implicit */unsigned short) (short)24339);
                var_14 *= ((/* implicit */short) min((10ULL), (((/* implicit */unsigned long long int) 292379379883392163LL))));
                var_15 = ((/* implicit */int) -292379379883392170LL);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (var_9)));
}
