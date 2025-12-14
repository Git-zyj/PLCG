/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2350
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
    var_10 = max(((+(var_9))), (((/* implicit */unsigned int) var_1)));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_11 ^= ((/* implicit */unsigned long long int) 1459269289U);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned short) var_6);
                    var_12 += ((/* implicit */signed char) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))));
                    var_13 = ((/* implicit */signed char) var_4);
                }
            } 
        } 
        var_14 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64)))))));
    }
    for (short i_3 = 3; i_3 < 23; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    arr_18 [i_3 - 2] [19U] [i_5] [i_3 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1963927589U), (((/* implicit */unsigned int) arr_4 [(signed char)18]))))) ? (((/* implicit */int) (unsigned short)42963)) : (((/* implicit */int) max((arr_1 [i_3] [i_3 - 1]), (((/* implicit */unsigned char) (_Bool)1)))))));
                    arr_19 [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
                    arr_20 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_17 [i_3] [i_3 + 1] [(signed char)15] [i_3])) ? ((-(((/* implicit */int) arr_1 [i_3 + 2] [20U])))) : (((/* implicit */int) ((signed char) arr_2 [22LL])))))));
                    arr_21 [i_3] [i_3] [(_Bool)0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((long long int) arr_12 [(signed char)13] [i_4])) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) arr_9 [i_3]);
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) 4541964348868193217ULL))));
    }
}
