/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240585
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
    var_16 = ((/* implicit */short) (!(max((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_15)))), ((((_Bool)1) || (((/* implicit */_Bool) var_8))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_0 [i_1]))));
                    var_18 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)80))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_0 - 3] [i_0 - 3]))) ? (min((((/* implicit */unsigned int) arr_11 [(unsigned short)7] [i_0 - 2] [i_3 - 2] [i_3] [(unsigned short)7])), (arr_4 [i_0 - 4] [i_1] [i_3 - 1]))) : (((/* implicit */unsigned int) min((1242671599), (max((((/* implicit */int) arr_12 [i_1] [i_2])), (356724644))))))));
                                var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) -2147483639))))) ? (max((12536300777085445009ULL), (((/* implicit */unsigned long long int) arr_12 [(short)4] [i_0])))) : (((/* implicit */unsigned long long int) ((arr_13 [i_0] [i_0] [i_0] [i_3] [i_4]) >> (((arr_2 [i_4] [i_2] [i_2]) - (18253122524214592647ULL))))))))));
                                arr_15 [i_1] [14LL] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((long long int) 12536300777085445019ULL));
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(7668625316328838360LL))), ((~(1152921504606846976LL)))))) ? (((/* implicit */int) ((unsigned short) 697596461))) : (((int) 2147483638))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */unsigned long long int) -8898465244573721983LL)) >= (max((((/* implicit */unsigned long long int) -471367654)), (2716149442520089345ULL)))))));
                }
            } 
        } 
    } 
}
