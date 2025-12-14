/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2065
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1 - 2] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (short)3968)) || (((/* implicit */_Bool) arr_0 [i_0] [19ULL])))) ? (13930569425631849794ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19112))) + (6140548605565407205ULL))))) + (min((((((/* implicit */_Bool) -7338445535630899100LL)) ? (((/* implicit */unsigned long long int) 1706519031952375568LL)) : (13319496683519042003ULL))), (((/* implicit */unsigned long long int) (signed char)-82))))));
                var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0])))) < (((/* implicit */int) var_0)))))));
                var_11 = ((((/* implicit */_Bool) arr_3 [i_1] [0ULL])) ? (((/* implicit */unsigned long long int) (-(var_2)))) : (((unsigned long long int) var_0)));
                var_12 ^= ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) >= (arr_2 [i_0]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_0])))))));
            }
        } 
    } 
    var_13 = ((((((/* implicit */int) (!(((/* implicit */_Bool) 7881299347898368LL))))) / (((var_7) + (((/* implicit */int) var_6)))))) * (((/* implicit */int) var_3)));
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_2] [i_2]))) && (((/* implicit */_Bool) ((var_9) & (((/* implicit */long long int) var_7))))))))) < (var_9)));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_5 [(signed char)14] [(signed char)14])))) ^ (4512927000299983477LL))) / (var_5))))));
        var_16 = ((/* implicit */unsigned long long int) (+(((771645719) >> (((((/* implicit */int) (unsigned short)24880)) - (24854)))))));
        var_17 *= ((/* implicit */unsigned int) min(((-(min((arr_6 [i_2]), (((/* implicit */unsigned long long int) -7881299347898378LL)))))), (((arr_6 [i_2]) | (((/* implicit */unsigned long long int) (+(var_8))))))));
        var_18 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_7)) : (var_9)))) - (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_6 [i_2]))));
    }
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) arr_9 [i_3])), (arr_8 [i_3])))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((+(arr_9 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3])) : (arr_7 [i_3]))))));
    }
    var_21 = ((/* implicit */unsigned int) 2693133247046674500LL);
    var_22 = ((/* implicit */signed char) var_8);
}
