/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248748
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned long long int) -9152080827982545249LL)))))));
        var_14 = ((/* implicit */_Bool) -9152080827982545249LL);
        var_15 = ((/* implicit */signed char) var_5);
    }
    var_16 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) (!(((_Bool) var_12))));
                    var_18 = ((/* implicit */unsigned char) ((signed char) 140668768878592ULL));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-21)) | (((/* implicit */int) (signed char)34))));
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) var_7);
                    var_21 = ((int) ((int) var_1));
                    var_22 = 6919473736330418841LL;
                }
                for (long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                {
                    arr_19 [i_5] [2] = ((/* implicit */unsigned long long int) var_9);
                    arr_20 [15ULL] [i_5] [15ULL] [i_5] = ((/* implicit */long long int) arr_17 [i_1] [i_1] [i_5]);
                    arr_21 [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                    var_23 = ((/* implicit */short) arr_12 [i_5] [(unsigned char)4] [i_5]);
                }
                var_24 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) var_9))) % (((long long int) var_3))));
                arr_22 [8ULL] [i_2] = ((/* implicit */signed char) (unsigned short)26328);
                var_25 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_6 [i_1] [i_2])) - (((/* implicit */int) (signed char)-34)))));
            }
        } 
    } 
}
