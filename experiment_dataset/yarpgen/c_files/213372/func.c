/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213372
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)8)) >= (((/* implicit */int) (_Bool)1))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) == (var_11))))))) ? (((((/* implicit */_Bool) max((14157180367566686460ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) - (var_5))) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) ? ((+(var_8))) : ((+(((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)234), (((/* implicit */unsigned char) (_Bool)1))))) & (((/* implicit */int) arr_2 [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_14 &= ((unsigned long long int) ((_Bool) 14157180367566686462ULL));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 8; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 += (+(((((/* implicit */_Bool) (unsigned char)48)) ? (11995298667934127463ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187))))));
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((3845521653085540975ULL), (14601222420624010641ULL)))) ? (((max((14680064LL), (((/* implicit */long long int) (signed char)80)))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0] [i_3 - 2] [7ULL]))))))) : (var_5)));
                                var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_11 [i_0] [(_Bool)0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) -1616599992)) ? (arr_9 [i_4] [i_2] [i_1] [i_0]) : (var_0))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (var_2))))))) : (min((max((6451445405775424156ULL), (11926323288476914686ULL))), (((/* implicit */unsigned long long int) arr_5 [i_3 - 3] [5ULL] [5ULL] [5ULL]))))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    var_17 = ((((arr_9 [i_5] [i_5] [8ULL] [i_0]) >= (arr_9 [i_0] [i_0] [(_Bool)1] [i_5]))) ? ((+(min((arr_6 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_12 [(_Bool)1])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (max((((/* implicit */unsigned long long int) var_8)), (10403514393602486347ULL))))));
                    var_18 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_5])) || (((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_0])))) ? ((+(arr_14 [i_5] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_1] [i_0]))))))));
                    var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (+(var_10)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_5] [i_1] [2LL]))))) : (((((((/* implicit */int) var_6)) >= (var_8))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_7))))) : (min((arr_1 [i_0] [i_0]), (var_3)))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (unsigned char)79))));
                }
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((((/* implicit */_Bool) (+(var_3)))) ? (arr_6 [i_1] [i_0]) : (6168601590918023358ULL))), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_12 [i_1])) || (((/* implicit */_Bool) var_1))))))))))));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)127))));
}
