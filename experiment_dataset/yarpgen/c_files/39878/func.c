/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39878
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
    var_19 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) min((max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (7485090941951279377LL) : (((/* implicit */long long int) 1617119199)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (1617119199) : (arr_2 [i_0] [6])))))), (((/* implicit */long long int) ((((/* implicit */int) max((arr_0 [i_0]), (arr_3 [i_0])))) < (((/* implicit */int) var_5)))))));
        arr_5 [i_0] = ((/* implicit */signed char) -7485090941951279377LL);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_1])) + (42))) - (6)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_1])) + (2147483647))) << (((((((((((/* implicit */int) arr_3 [i_1])) + (42))) - (6))) + (90))) - (23))))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_7 [i_1])) || (((/* implicit */_Bool) -1128907989)))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_21 += ((/* implicit */int) arr_0 [(unsigned char)0]);
        /* LoopSeq 2 */
        for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_4 = 2; i_4 < 8; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_22 = ((int) arr_20 [i_3 + 1] [i_3 + 1] [i_5] [i_4] [i_4 + 3] [i_4 + 1]);
                            var_23 ^= ((/* implicit */_Bool) (unsigned char)96);
                            arr_22 [i_2] [i_5] [i_4 - 2] [i_2] [i_2] = ((((/* implicit */_Bool) arr_3 [i_2])) ? (((arr_2 [i_2] [i_2]) | (((/* implicit */int) var_10)))) : (-608350686));
                            arr_23 [i_2] [i_3] [i_3 - 1] [i_2] [i_3] [i_3] [i_2] = arr_17 [i_2] [i_2] [i_2] [i_2];
                            arr_24 [i_2] [i_3 + 1] [i_4] [i_2] [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [i_4 - 2] [i_4 + 1] [i_2] [i_4]))));
                        }
                    } 
                } 
            } 
            var_24 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_3 + 1] [i_3 + 1] [6ULL] [i_3 + 1])) << (((((/* implicit */int) arr_16 [i_3 + 1] [i_3 + 1] [8] [i_3 + 1])) - (211)))));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            arr_35 [(_Bool)1] [i_7] [i_8] [i_8] [i_9 - 1] [i_2] [i_9 - 1] = ((/* implicit */signed char) (+(arr_1 [i_9 - 1] [i_9 - 1])));
                            var_25 = ((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 1] [i_9 - 1]);
                            var_26 = ((/* implicit */int) var_17);
                        }
                    } 
                } 
            } 
            arr_36 [i_2] [i_2] [i_7] = ((/* implicit */_Bool) var_7);
        }
        arr_37 [i_2] = ((/* implicit */signed char) ((arr_12 [i_2] [i_2] [i_2]) >= (arr_12 [i_2] [i_2] [i_2])));
    }
    var_27 ^= ((/* implicit */signed char) (!(((((/* implicit */_Bool) 2147483627)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_11))))))));
}
