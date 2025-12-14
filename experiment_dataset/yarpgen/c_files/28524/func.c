/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28524
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
    var_14 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 8589934591LL)) ? (var_11) : (((/* implicit */unsigned long long int) var_7)))) ^ (var_1))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (1919226589415285073ULL)))) ? (((int) 16527517484294266542ULL)) : (min((826406439), (var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((arr_3 [1] [1] [1]) ^ (((arr_4 [i_0]) ^ (var_1))))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_4 [i_0]) >= (((/* implicit */unsigned long long int) 3434631639377314847LL))))))))));
                var_16 = ((/* implicit */int) arr_4 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */int) 16527517484294266553ULL);
                            arr_11 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                            var_17 -= ((/* implicit */int) ((((/* implicit */_Bool) 3434631639377314847LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])))))) : (max((((/* implicit */unsigned long long int) 2316292459653396307LL)), (arr_4 [i_1])))));
                            arr_12 [i_0] [i_0] [8LL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_0] [0] [5LL])), (-1LL)))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) >= (arr_5 [i_0] [i_0] [i_2] [i_2])))))))) || (((((/* implicit */unsigned long long int) var_4)) == ((+(arr_4 [i_1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 18; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 19; i_5 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    for (int i_7 = 3; i_7 < 17; i_7 += 4) 
                    {
                        {
                            arr_24 [i_4] [i_4] = ((/* implicit */int) var_11);
                            arr_25 [i_4] [i_4] [0LL] [i_4 + 1] [6] [i_4] = arr_19 [i_4] [i_5];
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((int) arr_15 [i_6])), (var_4)))) || (((/* implicit */_Bool) ((int) -306242626)))));
                        }
                    } 
                } 
                arr_26 [i_4] [i_4 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (15587047633212634972ULL))))));
                var_19 = ((((((/* implicit */_Bool) 0LL)) ? (0ULL) : (min((((/* implicit */unsigned long long int) arr_13 [i_4 + 1] [i_5])), (arr_18 [i_4 - 1] [i_5]))))) << (((((((/* implicit */_Bool) -914102981)) ? (((/* implicit */unsigned long long int) 306242625)) : (4838397311297458062ULL))) - (306242616ULL))));
            }
        } 
    } 
    var_20 = var_0;
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((0LL) & (((/* implicit */long long int) -1)))) : (((long long int) var_12))))) == (((((/* implicit */unsigned long long int) ((int) 1362852932))) / (var_5)))));
}
