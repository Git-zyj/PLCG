/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247763
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) -2001033827)), (-4310614475193435848LL)))) ? (-5014000971236234456LL) : (((/* implicit */long long int) 936273844))))), (arr_13 [i_1] [i_1])));
                                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) (unsigned char)31)) ? (((((/* implicit */int) (signed char)13)) | (-936273845))) : (arr_2 [i_0] [i_3])))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), ((~(((((/* implicit */_Bool) 3930144685U)) ? (((/* implicit */unsigned long long int) 4288062748166403241LL)) : (max((((/* implicit */unsigned long long int) (signed char)104)), (255ULL)))))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))) < (max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1])), (18446744073709551590ULL)))))) < (min((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_15))))));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned long long int) var_12);
}
