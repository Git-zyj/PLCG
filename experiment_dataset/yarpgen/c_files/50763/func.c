/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50763
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) arr_0 [i_0 + 2]);
        var_18 = ((/* implicit */short) (-(((arr_0 [i_0 + 2]) + ((-(arr_0 [i_0 - 1])))))));
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] &= ((/* implicit */_Bool) (+(((((var_3) + (arr_6 [(_Bool)1]))) % (((/* implicit */int) ((signed char) arr_6 [i_1])))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_1])))) ^ (((((/* implicit */_Bool) 6694624348392772173ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)15753))))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) arr_0 [0U])) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)51455)) > (((/* implicit */int) var_15))))))))));
            arr_11 [i_1] [5LL] [i_2] &= ((/* implicit */unsigned long long int) arr_6 [i_1]);
        }
        var_19 = ((/* implicit */unsigned int) 3293824235068227056LL);
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_1 + 1]), (((/* implicit */long long int) arr_4 [i_1]))))) ? (((/* implicit */unsigned long long int) ((-938142839) * (((/* implicit */int) ((((/* implicit */int) arr_9 [i_1])) == (((/* implicit */int) arr_5 [i_1] [i_1 + 1])))))))) : (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) : (6434132886760339528ULL))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0)))))) * (max((arr_13 [i_3]), (((/* implicit */unsigned long long int) arr_2 [i_3]))))));
        var_21 = ((/* implicit */int) arr_1 [i_3]);
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        for (long long int i_5 = 2; i_5 < 24; i_5 += 2) 
        {
            {
                var_22 = ((((/* implicit */int) arr_18 [i_4] [i_5 - 1] [i_4])) << (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_4] [19ULL] [i_4]))))) || (((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_4]))))));
                arr_20 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_5 - 2]))))) ? (((-5648519523873736208LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)32))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [(short)5])) <= (((/* implicit */int) arr_15 [i_4]))))))));
            }
        } 
    } 
}
