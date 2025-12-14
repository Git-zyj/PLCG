/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222514
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        var_15 += ((/* implicit */unsigned long long int) ((arr_3 [8ULL]) <= (arr_3 [14ULL])));
        var_16 = ((/* implicit */long long int) (+(17514304910410508642ULL)));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((int) (+(var_7)))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_8 [i_1] [17] = ((/* implicit */int) var_2);
        var_18 = ((/* implicit */signed char) min((arr_6 [15ULL]), (max((((/* implicit */unsigned long long int) ((int) (signed char)38))), (min((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) (signed char)30))))))));
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_19 |= ((/* implicit */long long int) (-((-(((arr_6 [i_2]) % (var_2)))))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (signed char i_4 = 2; i_4 < 14; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        arr_18 [i_2] [i_3] [i_3] [i_2] [i_4] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(-2439114905265588027LL))))));
                        arr_19 [i_2] [i_3] [i_4] [i_4] [i_4] [i_2] = arr_9 [i_4 + 1];
                        arr_20 [i_2] [i_3] [i_3] [i_5] [i_2] [i_5] = max(((+(932439163299042973ULL))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [i_2] [i_3] [i_4])) : (((/* implicit */int) var_3))))) - (max((3927204199627857143ULL), (6395299257727650901ULL))))));
                    }
                } 
            } 
        } 
        arr_21 [i_2] [i_2] = ((/* implicit */signed char) arr_9 [i_2]);
        var_20 += ((/* implicit */unsigned long long int) (-(-704252398)));
    }
    for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        arr_24 [i_6] = ((/* implicit */int) min(((~(arr_23 [i_6]))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_23 [i_6])))) && (((/* implicit */_Bool) arr_23 [i_6])))))));
        arr_25 [i_6] [i_6] = arr_23 [i_6];
    }
    var_21 = ((/* implicit */unsigned long long int) var_12);
}
