/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207461
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
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2319852812U)) ? (((/* implicit */unsigned long long int) 2319852812U)) : (min((((/* implicit */unsigned long long int) var_11)), (min((9451666017900397062ULL), (9451666017900397062ULL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [11ULL] [i_0] [i_3] = ((/* implicit */long long int) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [13ULL]))) > (17533385111186685508ULL))) ? (((/* implicit */unsigned long long int) arr_8 [i_0 - 1])) : (((((/* implicit */unsigned long long int) arr_0 [i_2])) + (9451666017900397062ULL)))))));
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)60);
                            arr_12 [8ULL] [i_2] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) 1012831320U))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2319852812U)) ? (arr_6 [2U] [i_1] [2U] [i_1]) : (11482947637871335720ULL)))) ? (((/* implicit */unsigned long long int) (+(3282135947U)))) : (((((/* implicit */_Bool) arr_2 [2LL] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 7505503613210045355LL))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -7505503613210045355LL)))) ^ (4865081127295992589LL));
                            arr_14 [i_0] [i_1 + 1] [i_2] [i_2] [i_0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : (max((arr_4 [7U] [i_0] [10ULL]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))) ? (((arr_4 [i_0 + 2] [i_1] [i_1]) >> (((arr_4 [i_0 - 3] [i_0] [i_0]) - (4479717305902282076ULL))))) : (((((/* implicit */_Bool) arr_4 [i_0 - 2] [2U] [2U])) ? (arr_4 [i_3] [i_1 - 2] [i_2]) : (arr_4 [i_1] [i_2] [i_3]))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned char) -4865081127295992589LL);
            }
        } 
    } 
    var_20 &= ((/* implicit */unsigned char) 3282135975U);
}
