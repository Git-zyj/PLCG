/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49868
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) var_6);
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
                {
                    arr_7 [(short)0] [i_1] [i_1] [(short)0] = ((/* implicit */unsigned int) ((long long int) arr_5 [(signed char)2] [i_1 + 1] [i_2]));
                    arr_8 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_1] [(signed char)9]))))) : (((((/* implicit */_Bool) (short)9821)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (3103076106193045283ULL))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_0]);
                    arr_14 [i_0] [i_0] [(short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(3103076106193045259ULL)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)87))));
                    arr_15 [(signed char)8] [i_0] [i_3] = ((/* implicit */signed char) ((short) ((arr_12 [i_0] [i_0] [i_3]) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_3] [i_3])) - (170))))));
                }
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [(short)6] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (+(3103076106193045293ULL)))) ? (10033951074248665666ULL) : (((/* implicit */unsigned long long int) -1519931072)))));
                    arr_19 [i_0] = ((/* implicit */signed char) (((+(arr_12 [(signed char)0] [i_0] [i_1 - 1]))) / (((/* implicit */long long int) var_2))));
                    arr_20 [(_Bool)1] [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((var_4) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((15343667967516506357ULL) >> (((arr_2 [i_4] [(short)3] [i_0]) - (14612644576991510369ULL)))))) ? (((/* implicit */int) ((_Bool) (signed char)-9))) : (((/* implicit */int) min((arr_1 [10ULL]), (((/* implicit */short) arr_0 [i_0]))))))))));
                }
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) var_6)) >= (var_2)))), (var_0)));
}
