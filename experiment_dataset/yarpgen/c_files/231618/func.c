/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231618
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
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */int) var_3))))) >= (min((((/* implicit */unsigned long long int) 3260747615U)), (10086738847015827478ULL)))))), (((int) min((var_7), (var_7))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 |= ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [8U] [8U])) * (((/* implicit */int) arr_1 [i_0]))))), (max((arr_2 [(short)16] [i_0]), (arr_2 [8U] [8U])))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((min((((/* implicit */int) arr_3 [i_0])), (arr_4 [i_0] [10U] [i_1]))), (((/* implicit */int) max((arr_1 [i_1]), (arr_3 [2U])))))))));
            var_20 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) max((arr_1 [1ULL]), (arr_3 [i_0])))))) / (min((((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), (arr_3 [i_0])))), ((-(arr_4 [i_0] [i_0] [i_0])))))));
        }
        for (unsigned int i_2 = 2; i_2 < 17; i_2 += 3) /* same iter space */
        {
            var_21 &= ((/* implicit */signed char) max((((/* implicit */int) arr_7 [i_0] [(signed char)5] [i_2])), ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
            arr_8 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) & (8360005226693724127ULL));
        }
        for (unsigned int i_3 = 2; i_3 < 17; i_3 += 3) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(min((536870848ULL), (((/* implicit */unsigned long long int) (unsigned char)109))))));
            arr_12 [(signed char)3] [(unsigned char)5] &= ((/* implicit */_Bool) ((10086738847015827478ULL) << (((((/* implicit */int) (unsigned char)89)) - (63)))));
            arr_13 [i_0] [i_0] = ((/* implicit */int) (-(max((((((/* implicit */_Bool) arr_10 [4])) ? (arr_6 [(unsigned char)10] [(unsigned char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))))), (((arr_2 [i_0] [15U]) / (arr_9 [i_3])))))));
        }
        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((/* implicit */long long int) ((min((-870987670), (-870987678))) & (min((arr_10 [i_4]), (arr_10 [i_4 - 1])))))), (((long long int) max((arr_4 [(_Bool)1] [(_Bool)1] [(_Bool)1]), (arr_4 [8] [8] [8])))))))));
            var_23 = ((/* implicit */unsigned short) min((arr_10 [i_0]), (((((/* implicit */int) arr_17 [7] [i_4 - 1] [7])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 870987669)))))))));
        }
    }
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((short) (_Bool)1))) || (((/* implicit */_Bool) min((((/* implicit */short) var_9)), (var_10)))))))));
}
