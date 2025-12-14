/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46605
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
    var_15 = ((/* implicit */unsigned long long int) var_7);
    var_16 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [3] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) arr_12 [i_3])), (3ULL))));
                        /* LoopSeq 1 */
                        for (short i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            arr_16 [4U] [i_4] [i_0] [i_0] [5ULL] [5ULL] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4 + 2]))) : (arr_2 [i_0 - 1] [i_0 - 1])))));
                            var_17 ^= ((/* implicit */unsigned char) ((_Bool) ((arr_0 [i_0 - 3] [i_2]) << (((arr_0 [i_0 - 1] [i_2]) - (12134261457153181261ULL))))));
                        }
                    }
                } 
            } 
        } 
        var_18 -= (_Bool)1;
        arr_17 [10LL] [i_0] = ((/* implicit */unsigned int) arr_12 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            for (unsigned short i_6 = 2; i_6 < 12; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_5] [i_0] [i_6] [i_7] [i_7])) || (var_12))))) : (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_5 + 2] [i_0]))) : (arr_18 [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_7] [i_5 - 1] [i_0 + 1])) || (((/* implicit */_Bool) (+(arr_11 [i_6 + 1] [i_5] [i_0]))))))))));
                        arr_27 [i_7] [i_6] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_11 [i_7] [(signed char)12] [(_Bool)1]))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)3)) >= (((/* implicit */int) arr_7 [i_0] [i_5] [i_0]))))))), (((/* implicit */unsigned int) (unsigned char)167))));
                    }
                } 
            } 
        } 
        arr_28 [i_0] = ((/* implicit */unsigned short) max((arr_0 [i_0] [i_0]), (((((/* implicit */_Bool) (unsigned char)180)) ? (17008182450128127677ULL) : (9999077353785468254ULL)))));
    }
}
