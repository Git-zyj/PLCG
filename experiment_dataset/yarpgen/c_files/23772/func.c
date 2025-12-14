/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23772
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]);
                arr_4 [i_0] [i_1] &= ((((/* implicit */_Bool) var_10)) ? (6714406837217904120ULL) : (min((232040701262528488ULL), (((/* implicit */unsigned long long int) ((signed char) 18214703372447023143ULL))))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 18214703372447023131ULL)))) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 18214703372447023117ULL))))) & (((/* implicit */int) var_9)))))));
                                var_19 += ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) ((7917339383745742275ULL) <= (8602399853073406516ULL)))), (((((/* implicit */_Bool) var_13)) ? (18214703372447023144ULL) : (232040701262528479ULL))))), (min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_9)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_11), ((short)2)))))))) ^ (18214703372447023102ULL)));
    var_21 = ((/* implicit */signed char) var_5);
    var_22 = ((/* implicit */signed char) max((var_22), (((signed char) ((((/* implicit */_Bool) max((10529404689963809341ULL), (13205012059357884806ULL)))) ? (((((/* implicit */_Bool) var_15)) ? (var_5) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))))));
}
