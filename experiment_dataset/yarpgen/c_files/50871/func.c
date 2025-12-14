/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50871
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
    var_12 ^= ((/* implicit */short) ((min((((/* implicit */int) (short)511)), (var_11))) / ((~(((/* implicit */int) min((var_4), (((/* implicit */short) var_9)))))))));
    var_13 = ((/* implicit */short) ((((unsigned long long int) (_Bool)1)) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)0)))) - (((/* implicit */int) ((17921931801411126832ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 17921931801411126816ULL)) || (((/* implicit */_Bool) arr_0 [i_0])))) && (((/* implicit */_Bool) arr_0 [i_0])))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [(unsigned char)9]))))), (((((/* implicit */_Bool) 16312661063679864862ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (17921931801411126827ULL)))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0])))))));
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) <= (arr_1 [i_0] [i_0]))) ? (((long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [(unsigned char)1])))) : (arr_1 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_17 = (+(((((/* implicit */_Bool) ((9086303999262729006ULL) ^ (9086303999262729006ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1]))))) : (min((7905152592446712635ULL), (10541591481262838977ULL))))));
        var_18 = ((/* implicit */long long int) arr_2 [3ULL]);
    }
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (unsigned short i_4 = 2; i_4 < 15; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_18 [i_2] [i_2] [i_4] [i_5 - 1] [i_6] [(short)4] = ((unsigned char) (unsigned char)0);
                                var_19 = ((/* implicit */unsigned char) min((((short) (~(9360440074446822609ULL)))), (((/* implicit */short) min((((((/* implicit */int) (unsigned char)10)) > (((/* implicit */int) (_Bool)1)))), ((!(((/* implicit */_Bool) 10541591481262838981ULL)))))))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */_Bool) arr_12 [i_3] [(short)16] [i_3] [i_3]);
                }
            } 
        } 
    } 
}
