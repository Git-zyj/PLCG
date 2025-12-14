/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32300
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
    var_11 = min((min((((long long int) -8655964285433108510LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (2436702765U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))), (((/* implicit */long long int) min(((~(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) 1813909855653145334LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))));
    var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) ((short) (~(var_0))))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((8655964285433108510LL) % (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))));
            arr_7 [i_0] [i_0] [i_0] = min((((((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 1])) == (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2])))), (((((/* implicit */_Bool) arr_5 [(unsigned char)10] [i_0 - 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2] [i_0 - 2])))));
            var_13 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (-1813909855653145334LL)))))), (min(((!(((/* implicit */_Bool) (unsigned char)31)))), ((!(((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1]))))))));
        }
        var_14 = ((/* implicit */unsigned char) min((65535U), (((/* implicit */unsigned int) (unsigned char)32))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) /* same iter space */
        {
            var_15 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_0 [i_2 - 2] [i_0])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_2] [i_0 - 1])))) + (((/* implicit */int) (unsigned short)4137))));
            var_16 = ((/* implicit */int) var_10);
        }
        for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) (~(min((((/* implicit */int) arr_5 [i_3 - 1] [i_0] [i_0])), (((((/* implicit */int) var_7)) + (((/* implicit */int) var_10))))))));
            var_18 = arr_9 [i_3 - 2] [i_0] [i_0];
        }
        var_19 = ((/* implicit */_Bool) (((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)61440)))) % (((/* implicit */int) ((short) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
        var_20 += ((/* implicit */long long int) min(((+(((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) arr_11 [i_0] [i_0])))))), (((/* implicit */int) (unsigned short)45324))));
    }
}
