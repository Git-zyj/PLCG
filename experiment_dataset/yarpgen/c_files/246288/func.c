/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246288
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [(signed char)1] [i_2] [i_1] = ((unsigned char) (!(((/* implicit */_Bool) ((var_3) & (((/* implicit */unsigned int) 458752)))))));
                            arr_12 [10] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? ((-(arr_8 [i_0] [i_1] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0])))))));
                            arr_13 [i_1] [i_1 + 1] [12] [10LL] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (8452714884878267679LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211)))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                            {
                                var_14 = ((/* implicit */short) var_3);
                                var_15 = ((/* implicit */signed char) (((+(((/* implicit */int) var_2)))) / (((/* implicit */int) var_8))));
                            }
                        }
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */_Bool) ((long long int) var_13));
                arr_17 [i_1] = (+(8452714884878267679LL));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) + (((8452714884878267679LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)174))))))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_5] [i_5]))))) ? (((((/* implicit */_Bool) -2772774612157107476LL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 8452714884878267679LL))));
        arr_20 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    }
    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    {
                        arr_32 [i_6] [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_6] [i_6] [6] [i_9] [i_6]))) ^ (1708431467U)))), (((((/* implicit */_Bool) (unsigned char)44)) ? (arr_14 [i_6] [i_8] [i_8] [i_7] [i_7] [i_6] [i_6]) : (((/* implicit */long long int) arr_31 [2] [i_7] [i_8] [2] [i_9] [i_9]))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (unsigned short)4938))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) 458782)) ? (((/* implicit */unsigned long long int) 1321414200U)) : (18446744073709551607ULL)))))));
                        var_19 = ((/* implicit */int) arr_23 [i_6] [i_7]);
                        var_20 = ((/* implicit */short) var_0);
                        arr_33 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_1 [i_6] [i_6]), ((signed char)-97))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_19 [i_8])) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) var_12))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) ((unsigned short) (unsigned short)61533));
        arr_34 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_5 [i_6] [i_6] [i_6])))) ? (max((arr_5 [i_6] [2U] [2U]), (arr_5 [i_6] [i_6] [i_6]))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)150))))));
    }
    var_22 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_4))))));
}
