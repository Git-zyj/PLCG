/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209725
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
    var_11 -= ((/* implicit */_Bool) ((((unsigned int) var_8)) & (((/* implicit */unsigned int) -707345415))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_12 = ((/* implicit */signed char) ((707345415) % ((-(707345404)))));
                /* LoopSeq 2 */
                for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    arr_11 [i_0] [i_0] [i_1 - 3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (+(-707345415)));
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] = arr_7 [i_0] [i_1 + 1] [14LL] [i_3];
                        arr_15 [i_1 - 3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 707345399)) ? (-707345396) : (-707345415)))) == (((unsigned long long int) (_Bool)0))));
                    }
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (+(arr_3 [i_1 + 1]))))));
                        var_14 = ((/* implicit */signed char) (+(-707345399)));
                        var_15 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)46992)) : (0));
                        var_16 = ((/* implicit */unsigned long long int) (~(707345399)));
                    }
                    arr_19 [i_3 + 1] [i_1] [11U] [i_1] [11U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 - 2]))) : (arr_18 [i_0 - 2])));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 4; i_6 < 19; i_6 += 3) 
                    {
                        var_17 += ((/* implicit */long long int) ((_Bool) arr_8 [i_0] [i_1]));
                        arr_22 [i_0] [i_0] [i_1] [i_1] [8ULL] [18U] [i_6] = ((/* implicit */signed char) ((arr_8 [i_1 + 1] [i_2]) == (707345415)));
                    }
                }
                for (int i_7 = 1; i_7 < 18; i_7 += 3) 
                {
                    arr_27 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(arr_3 [i_0 + 2])));
                    var_18 ^= ((/* implicit */short) ((unsigned int) arr_7 [i_0 + 3] [i_2] [i_7] [i_7 + 2]));
                    arr_28 [i_1] [i_2] [i_2] = 707345415;
                }
            }
            arr_29 [i_0 + 3] = ((/* implicit */unsigned char) ((arr_5 [i_0 + 3]) && (arr_5 [i_0 + 3])));
        }
        arr_30 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) arr_4 [i_0 - 2] [(short)7] [i_0 + 3])))));
        arr_31 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [7U] [7U])) ? (-7217204192330090948LL) : (-5082585458510792368LL)))));
    }
}
