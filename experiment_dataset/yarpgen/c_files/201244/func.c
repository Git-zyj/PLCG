/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201244
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
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_4 [0] = ((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) ((((/* implicit */_Bool) 6184057145217907404LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))) - (((((/* implicit */long long int) ((/* implicit */int) arr_0 [10LL]))) / (-6184057145217907404LL)))))));
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 10; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                arr_10 [(unsigned short)0] [i_1] [(signed char)9] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) arr_3 [(_Bool)1] [5])) : (((/* implicit */int) var_7))))) ^ (((var_0) - (((/* implicit */unsigned long long int) var_9))))));
                var_10 -= ((/* implicit */signed char) ((long long int) var_3));
            }
            var_11 ^= ((/* implicit */_Bool) (+(((int) min((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), (arr_1 [i_0]))))));
            var_12 |= ((/* implicit */short) min((min((((var_6) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_1] [i_0 + 1])))), (((/* implicit */int) ((signed char) var_9))))), (min((((/* implicit */int) ((unsigned char) arr_7 [i_0]))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_0])) : (((/* implicit */int) arr_5 [i_0]))))))));
        }
        for (short i_3 = 3; i_3 < 10; i_3 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */signed char) min((((/* implicit */short) var_6)), (arr_5 [i_0])));
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) 3968161933U)) ? (-6184057145217907400LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            var_15 ^= ((/* implicit */signed char) ((short) min((((/* implicit */long long int) var_9)), (((long long int) 894903539256707292LL)))));
        }
        for (short i_4 = 3; i_4 < 10; i_4 += 2) /* same iter space */
        {
            var_16 = ((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_4])), (((unsigned short) var_3))))) != (((/* implicit */int) ((((/* implicit */int) arr_1 [i_4 - 2])) > (((/* implicit */int) var_6))))));
            var_17 *= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) min((arr_13 [(unsigned short)7] [i_4 - 3]), (((/* implicit */short) arr_2 [i_0] [i_4 - 3]))))) < (((/* implicit */int) ((unsigned short) var_6)))))), (min((((/* implicit */int) var_3)), (((arr_12 [i_0 + 1] [i_0] [3LL]) ? (((/* implicit */int) arr_7 [i_0])) : (476792614)))))));
        }
    }
    var_18 = var_9;
}
