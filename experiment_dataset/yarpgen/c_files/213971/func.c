/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213971
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
    var_11 = ((/* implicit */unsigned short) ((unsigned long long int) (signed char)-124));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) ((unsigned long long int) -1548176426));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
        {
            var_13 &= ((/* implicit */unsigned int) max((((/* implicit */short) min((arr_0 [i_0]), (arr_0 [i_0])))), (((short) arr_0 [i_0]))));
            arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0]))) - (8096031444181267443ULL))))));
        }
        for (short i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) max((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_2])))), (((/* implicit */int) min((((short) var_2)), (((/* implicit */short) ((((/* implicit */_Bool) 8096031444181267443ULL)) || (((/* implicit */_Bool) var_9))))))))));
            arr_9 [i_0] = ((signed char) 8096031444181267459ULL);
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) 8096031444181267450ULL))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
            {
                arr_14 [i_0] = ((((((/* implicit */_Bool) arr_4 [i_0] [i_3])) && (((/* implicit */_Bool) arr_13 [i_0] [i_0] [(signed char)3] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(signed char)14] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [14U] [14U])) : (arr_11 [i_0])))) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) arr_8 [i_3]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))) * (10350712629528284161ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
                var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_7 [i_0] [i_2] [i_3])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))) - (((10350712629528284173ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_3])))));
                arr_15 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_13 [i_0] [(_Bool)1] [i_3] [i_3]), (arr_13 [i_0] [i_0] [i_0] [i_0]))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
            {
                var_18 = ((int) max((arr_13 [i_0] [i_2] [i_2] [i_4]), (arr_13 [i_0] [i_2] [i_2] [i_0])));
                var_19 = ((/* implicit */unsigned long long int) ((unsigned int) min((((unsigned int) (signed char)-68)), (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0] [i_4])))));
            }
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned int) (+(max((var_3), (((/* implicit */int) var_8))))));
        arr_23 [(short)9] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_5]))) / (10350712629528284173ULL))))) ? (((/* implicit */int) min((arr_3 [i_5]), (arr_3 [i_5])))) : ((+(((/* implicit */int) ((short) (signed char)-68)))))));
        var_20 |= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_2)) ? (var_4) : (var_3)))))) ? (var_2) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_13 [8ULL] [8ULL] [2ULL] [i_5])), (var_7)))), (arr_20 [i_5] [i_5]))));
    }
    var_21 = ((/* implicit */short) min((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) var_9))))), (var_8)));
}
