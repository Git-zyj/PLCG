/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238866
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
    for (int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_5 [i_1]))));
            var_17 -= ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_7 [i_0])))));
        }
        for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (unsigned char)138))));
            var_19 = ((/* implicit */unsigned int) -5380507303307074414LL);
            var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned char) arr_6 [(signed char)4] [i_0 - 3])))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_2 - 1])))))));
        }
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((unsigned int) arr_9 [i_0 + 2])) == (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_0 - 2]))))))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_22 = ((/* implicit */long long int) arr_12 [i_3] [i_3]);
                        arr_16 [i_0] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_4 [(_Bool)1] [i_5] [i_5])) != (((/* implicit */int) (_Bool)1))))) >= (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_3])) != (((/* implicit */int) (unsigned char)153)))))))) : (((/* implicit */int) ((unsigned short) var_11)))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_15))) - ((~(((/* implicit */int) var_0)))))))));
    var_24 = ((/* implicit */unsigned long long int) ((((long long int) var_1)) > (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))));
    var_25 |= ((/* implicit */unsigned long long int) var_7);
}
