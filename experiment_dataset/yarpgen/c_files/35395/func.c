/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35395
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2])))) ? (((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0] [i_0] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))))) : (arr_6 [i_0] [i_1] [i_0] [i_2])));
                    var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_8), (min((var_3), (var_8))))))));
                    var_14 = ((/* implicit */signed char) arr_1 [i_0]);
                    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)51))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                arr_12 [i_4] [9U] [i_4] = ((/* implicit */unsigned long long int) (signed char)-49);
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    arr_15 [i_4] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_3)) ? (((var_0) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_5]))))) : (min((arr_13 [i_3] [i_4] [i_3] [i_3]), (((/* implicit */long long int) (signed char)-31))))))));
                    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) var_8))));
                    var_19 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) arr_10 [i_3])))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-52)) ? (-369530352) : (1664304943)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)75))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) < (1121501860331520LL))))) : (arr_14 [i_3] [i_4])))))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (~(9050830687070675020ULL))))));
                }
                var_22 |= ((/* implicit */int) ((long long int) arr_7 [i_3] [i_4]));
            }
        } 
    } 
}
