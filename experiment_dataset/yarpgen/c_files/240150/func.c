/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240150
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_17 |= ((/* implicit */unsigned int) ((unsigned char) var_6));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_8)) : (var_10)));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (((+(((/* implicit */int) arr_8 [i_0] [i_0] [i_2])))) >> ((((~(arr_1 [i_1]))) - (2907195525U))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_1]))));
            arr_10 [(signed char)18] [i_1] = ((/* implicit */short) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1]);
        }
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_21 = var_12;
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        {
                            var_22 = var_4;
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (!(((((/* implicit */unsigned int) -188828155)) <= (0U))))))));
                        }
                    } 
                } 
            }
            for (int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                var_24 = ((/* implicit */long long int) arr_0 [5LL]);
                var_25 = ((((((/* implicit */int) arr_6 [i_8] [i_0])) / (((/* implicit */int) arr_6 [i_0] [i_8])))) << (((((3446965603231018932LL) << (((((/* implicit */int) (short)8214)) - (8213))))) - (6893931206462037843LL))));
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65535))))), (arr_19 [i_8] [13LL] [3U] [13LL] [13LL] [15])))) ? (((/* implicit */int) min((arr_11 [i_0] [i_0] [i_8]), (arr_11 [i_0] [i_4] [i_8])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (var_10)))))))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    for (signed char i_10 = 3; i_10 < 23; i_10 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                            arr_31 [(unsigned char)2] [i_4] [i_4] [i_4] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(var_3)))) > (min((((/* implicit */long long int) arr_7 [i_9 + 2] [i_9 - 1] [i_9 + 4] [i_9 + 2])), (arr_19 [i_9] [i_9 + 4] [i_9 + 3] [i_9 + 2] [i_9 + 4] [i_9 + 3])))));
                            arr_32 [i_0] [i_4] [i_4] [i_0] [i_9] [i_10 - 3] = ((/* implicit */unsigned short) min(((short)22885), (((/* implicit */short) (unsigned char)130))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned short i_11 = 3; i_11 < 21; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_28 [i_0] [i_4] [i_11] [(short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3576247752U)))))));
                        var_29 = ((/* implicit */int) (+(arr_19 [i_12] [14ULL] [i_12] [i_12] [(unsigned short)0] [i_12])));
                    }
                } 
            } 
            var_30 = ((/* implicit */short) (((((+(((/* implicit */int) var_15)))) << (((min((((/* implicit */unsigned int) (unsigned short)20214)), (arr_14 [i_0] [i_0]))) - (20198U))))) >= (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((signed char) var_11)))))));
        }
        var_31 = ((/* implicit */unsigned int) ((unsigned char) 7993300373451555486ULL));
        var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))), (arr_1 [i_0])));
        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
    }
    var_34 = ((/* implicit */unsigned int) min((min((((unsigned long long int) 4294967295U)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned short)65535)) - (65532)))))))), (((/* implicit */unsigned long long int) var_15))));
}
