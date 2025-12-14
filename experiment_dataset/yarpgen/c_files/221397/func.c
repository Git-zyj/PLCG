/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221397
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (_Bool)1);
                var_16 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned short)65535)))), (((((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (unsigned char)0)))) / (((/* implicit */int) max((arr_0 [i_0 - 2] [i_0]), (var_6))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 3; i_3 < 9; i_3 += 1) /* same iter space */
        {
            var_17 = ((unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_0))));
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_2 [(signed char)14]))));
        }
        for (unsigned int i_4 = 3; i_4 < 9; i_4 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) || (((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89))))))))));
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((3515999996589727465ULL) - (3515999996589727435ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (((unsigned int) var_1))));
        }
        arr_12 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)9)))) < (arr_6 [i_2])));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) (unsigned short)65532));
        /* LoopSeq 2 */
        for (signed char i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (unsigned short)9327))));
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((signed char) (unsigned short)14268)))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [2ULL] [i_6 - 1])) <= (((/* implicit */int) var_2)))))));
            arr_20 [i_2] [i_6 - 1] = ((/* implicit */signed char) arr_2 [i_2]);
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_23 [i_7] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 14211381970806274743ULL)) ? (((/* implicit */int) arr_21 [i_7] [11U])) : (((/* implicit */int) arr_21 [i_7] [i_7])))) << ((((-(var_5))) - (3385692704466694896ULL)))));
        var_24 = ((/* implicit */short) max((((unsigned long long int) arr_22 [i_7] [20ULL])), (((/* implicit */unsigned long long int) arr_21 [i_7] [i_7]))));
    }
}
