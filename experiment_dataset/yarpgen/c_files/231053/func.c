/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231053
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_1 [10ULL] [10ULL]))))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) -1)) & (arr_0 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) : (arr_1 [i_0] [i_0]));
        var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)32))));
        arr_3 [(short)5] = ((/* implicit */signed char) arr_1 [6] [i_0]);
    }
    var_14 &= max((((/* implicit */unsigned long long int) var_7)), (max(((~(8900027544124324361ULL))), (8900027544124324361ULL))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (((((/* implicit */unsigned long long int) 5195595929765668718LL)) & (8900027544124324361ULL)))));
        arr_7 [i_1] [i_1] &= ((/* implicit */int) 9546716529585227244ULL);
        arr_8 [14ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) -608941888)) ? (((unsigned long long int) 9546716529585227272ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8900027544124324361ULL)) ? (max((var_1), (((/* implicit */unsigned long long int) (unsigned char)217)))) : (((((/* implicit */_Bool) 9546716529585227255ULL)) ? (arr_9 [i_2]) : (var_1)))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((+(((((/* implicit */_Bool) 9780096485951973114ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))) : (arr_9 [(unsigned char)0]))))) : (8900027544124324372ULL)));
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) 676450370)), (9780096485951973114ULL)));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) max((9780096485951973135ULL), ((-((+(arr_17 [i_4])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 4) 
                        {
                            arr_28 [i_4] [8ULL] = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) (-(14957376734284186282ULL))))));
                            arr_29 [i_4] [10] [i_5] [i_4] [i_4] = ((((var_9) / (arr_17 [i_4]))) - (max((var_3), (((/* implicit */unsigned long long int) var_2)))));
                        }
                    }
                } 
            } 
        } 
    }
}
